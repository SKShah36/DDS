

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from temp.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "temp.h"

#include <new>

/* ========================================================================= */
const char *temp_msgTYPENAME = "temp_msg";

DDS_TypeCode* temp_msg_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode temp_msg_g_tc_msg_string = DDS_INITIALIZE_STRING_TYPECODE((128));
    static DDS_TypeCode_Member temp_msg_g_tc_members[3]=
    {

        {
            (char *)"temp",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"msg",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"room",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode temp_msg_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"temp_msg", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            temp_msg_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for temp_msg*/

    if (is_initialized) {
        return &temp_msg_g_tc;
    }

    temp_msg_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    temp_msg_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&temp_msg_g_tc_msg_string;

    temp_msg_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &temp_msg_g_tc;
}

RTIBool temp_msg_initialize(
    temp_msg* sample) {
    return temp_msg_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool temp_msg_initialize_ex(
    temp_msg* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return temp_msg_initialize_w_params(
        sample,&allocParams);

}

RTIBool temp_msg_initialize_w_params(
    temp_msg* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->temp)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory){
        sample->msg= DDS_String_alloc ((128));
        if (sample->msg == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->msg!= NULL) { 
            sample->msg[0] = '\0';
        }
    }

    if (!RTICdrType_initShort(&sample->room)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void temp_msg_finalize(
    temp_msg* sample)
{

    temp_msg_finalize_ex(sample,RTI_TRUE);
}

void temp_msg_finalize_ex(
    temp_msg* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    temp_msg_finalize_w_params(
        sample,&deallocParams);
}

void temp_msg_finalize_w_params(
    temp_msg* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->msg != NULL) {
        DDS_String_free(sample->msg);
        sample->msg=NULL;

    }

}

void temp_msg_finalize_optional_members(
    temp_msg* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool temp_msg_copy(
    temp_msg* dst,
    const temp_msg* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyLong (
            &dst->temp, &src->temp)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyStringEx (
            &dst->msg, src->msg, 
            (128) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyShort (
            &dst->room, &src->room)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'temp_msg' sequence class.
*/
#define T temp_msg
#define TSeq temp_msgSeq

#define T_initialize_w_params temp_msg_initialize_w_params

#define T_finalize_w_params   temp_msg_finalize_w_params
#define T_copy       temp_msg_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

