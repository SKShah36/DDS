# DDS/TestApps
There are three sets of test applications based on how data is received. Each of this application has a publisher and a subscriber. Each of the example applications have three instances of room publishing random values of temperature on a particular topic and the subscriber application having subscribed to that application receives those temperature values per room. How the subscriber receives those temperature values is what makes each subscriber application different.

## QoS

The Quality of Service policies for each set of three application has been kept the same.

The QoS parameters for the datawriter and datareader are set using user_qos_profiles.xml.

For the DataWriter, the LIVELINESS QoS of the kind AUTOMATIC_LIVELINESS_QOS is specified which allows DDS to sample its liveliness every lease_duration time. In our case, lease_duration, an another LIVELINESS QoS type is set to 1 second.

On the DataReader, two QoS policies, Reliability and History QoS policies are set. 
The reliability QoS policy is used to determine whether or not the data published by the DataWriter will be reliably delivered by the DDS to the matching DataReaders. 
- We have set the reliability policy to BEST_EFFORT_RELIABILITY_QOS which means that the DDS will not deploy extra resources to monitor if the samples have been delivered reliably. In other words,  data samples are sent once and missed samples are allowed.
- The history QoS has been set to KEEP_ALL_HISTORY_QOS which means that the DDS attempts to keep all data samples received by the DataReader for the topic until the application takes them via DataReader’s take() operation.

## Listener

In the publisher part of the application, we create a temp_msg data writer to write every 1 second a randomly generated temperature value on an instance uniquely identifying the rooms from each other. It simply prints out the message of the number of times the message has been published.

The subscriber implements a listener functionality for the data reader which triggers a callback function on_data_available whenever it receives a message. The callback function in this case is used to print out the temperature as sample on the room instance. The call back function also checks the instance state of each received sample to see 
- if the instance has been disposed by the data writer using DDS_NOT_ALIVE_DISPOSED_INSTANCE_STATE and 
- if the DataReader has detected that the DataWriter writing on that instance is dead using DDS_NOT_ALIVE_NO_WRITERS_INSTANCE_STATE

## Poll

Unlike the listener, the poll way of receiving the data is checking for a new data by calling DataReader’s read() or take() method every few units of time. 
In this way of receiving data, the processing of the received data occurs in the main() function instead via callbacks using DDS’ receive thread as in a listener.

In this example application, the publisher publishes temperature values for every room instance every second. The subscriber polls for data every 4 seconds in the main loop using the Datareader’s take() method. 

The take method in our case has been configured to:
1. Take a sequence object that holds the ordered collection of the same type.
2. Take a sample information structure (in our case info_seq) which contains information of the sample including its sample state, view state and instance state.
3. Allow DDS to allocate unlimited physical memory to the DataReader object (in our case temp_msgreader).
4. To take any sample state irrespective of whether it has been read or not by the DataReader using DDS_ANY_SAMPLE_STATE.
5. To take any sample irrespective of its view state i.e. irrespective of whether the data sample is first from an instance or not using DDS_ANY_VIEW_STATE.
6. To poll for any sample irrespective of whether the instance using the DataWriter is alive or has been disposed or the DataWriter isn’t alive at all.

Based on the arguments passed in the take method, the DataReader polls for samples available every 4 seconds.


The sample in the form of room instance and temperature are printed out on the console.

## Waitset

The waitset way of receiving the data involves waiting on the main application thread to wait for the status changes synchronously unlike a listener. This way unlike in listener, the Connext DDS thread remains unblocked. A Waitset allows the subscriber application to wait until an attached condition becomes true. The wait() blocks until one or more of the Waitset’s attached conditions becomes TRUE.

In the example, the way this is achieved can be described in the following steps:
1. Get status of the condition.
2. Enable status of the condition by setting it to when data is available using set_enabled_statuses(DDS_DATA_AVAILABLE_STATUS).
3. Create a waitset.
4. Attach the status condition to the waitset.
5. Additionally, we can configure the waitset to wait()/block on the attached condition until a configurable time and then timeout if the condition isn’t met. In our application it has been kept to 1.5 seconds.
6. Iterate over the attached conditions. If the DDS_DATA_AVAILABLE_STATUS and the status mask read by the reader using get_status_changes() becomes TRUE, then poll using the take() operation of the DataReader to receive the data. In our case, the arguments to the take() method have been kept the same as poll application.


 	
