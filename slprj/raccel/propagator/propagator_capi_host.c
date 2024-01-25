#include "propagator_capi_host.h"
static propagator_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        propagator_host_InitializeDataMapInfo(&(root), "propagator");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
