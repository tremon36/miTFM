#include "sigmadelta_full_DCO_Sampled_differential_integer_true_capi_host.h"
static sigmadelta_full_DCO_Sampled_differential_integer_true_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        sigmadelta_full_DCO_Sampled_differential_integer_true_host_InitializeDataMapInfo(&(root), "sigmadelta_full_DCO_Sampled_differential_integer_true");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
