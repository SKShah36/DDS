

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from temp.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef temp_1323386543_h
#define temp_1323386543_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *temp_msgTYPENAME;

}

struct temp_msgSeq;
#ifndef NDDS_STANDALONE_TYPE
class temp_msgTypeSupport;
class temp_msgDataWriter;
class temp_msgDataReader;
#endif

class temp_msg 
{
  public:
    typedef struct temp_msgSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef temp_msgTypeSupport TypeSupport;
    typedef temp_msgDataWriter DataWriter;
    typedef temp_msgDataReader DataReader;
    #endif

    DDS_Long   temp ;
    DDS_Char *   msg ;
    DDS_Short   room ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* temp_msg_get_typecode(void); /* Type code */

DDS_SEQUENCE(temp_msgSeq, temp_msg);

NDDSUSERDllExport
RTIBool temp_msg_initialize(
    temp_msg* self);

NDDSUSERDllExport
RTIBool temp_msg_initialize_ex(
    temp_msg* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool temp_msg_initialize_w_params(
    temp_msg* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void temp_msg_finalize(
    temp_msg* self);

NDDSUSERDllExport
void temp_msg_finalize_ex(
    temp_msg* self,RTIBool deletePointers);

NDDSUSERDllExport
void temp_msg_finalize_w_params(
    temp_msg* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void temp_msg_finalize_optional_members(
    temp_msg* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool temp_msg_copy(
    temp_msg* dst,
    const temp_msg* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* temp */

