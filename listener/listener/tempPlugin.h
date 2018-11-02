

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from temp.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef tempPlugin_1323386543_h
#define tempPlugin_1323386543_h

#include "temp.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct temp_msg
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct temp_msg)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * temp_msg must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct temp_msg.
    */
    typedef  class temp_msg temp_msgKeyHolder;

    #define temp_msgPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define temp_msgPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define temp_msgPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define temp_msgPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define temp_msgPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define temp_msgPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define temp_msgPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern temp_msg*
    temp_msgPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern temp_msg*
    temp_msgPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern temp_msg*
    temp_msgPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    temp_msgPluginSupport_copy_data(
        temp_msg *out,
        const temp_msg *in);

    NDDSUSERDllExport extern void 
    temp_msgPluginSupport_destroy_data_w_params(
        temp_msg *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    temp_msgPluginSupport_destroy_data_ex(
        temp_msg *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    temp_msgPluginSupport_destroy_data(
        temp_msg *sample);

    NDDSUSERDllExport extern void 
    temp_msgPluginSupport_print_data(
        const temp_msg *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern temp_msg*
    temp_msgPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern temp_msg*
    temp_msgPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    temp_msgPluginSupport_destroy_key_ex(
        temp_msgKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    temp_msgPluginSupport_destroy_key(
        temp_msgKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    temp_msgPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    temp_msgPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    temp_msgPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    temp_msgPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    temp_msgPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        temp_msg *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        temp_msg *out,
        const temp_msg *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const temp_msg *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        temp_msg *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    temp_msgPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const temp_msg *sample); 

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        temp_msg **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    temp_msgPlugin_deserialize_from_cdr_buffer(
        temp_msg *sample,
        const char * buffer,
        unsigned int length);    
    NDDSUSERDllExport extern DDS_ReturnCode_t
    temp_msgPlugin_data_to_string(
        const temp_msg *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    

    NDDSUSERDllExport extern RTIBool
    temp_msgPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    temp_msgPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    temp_msgPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    temp_msgPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    temp_msgPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const temp_msg * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    temp_msgPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    temp_msgPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    temp_msgPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const temp_msg *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        temp_msg * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        temp_msg ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    temp_msgPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        temp_msg *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        temp_msgKeyHolder *key, 
        const temp_msg *instance);

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        temp_msg *instance, 
        const temp_msgKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const temp_msg *instance);

    NDDSUSERDllExport extern RTIBool 
    temp_msgPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    temp_msgPlugin_new(void);

    NDDSUSERDllExport extern void
    temp_msgPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* tempPlugin_1323386543_h */

