#include "hohmannTransfer_capi_host.h"
static hohmannTransfer_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        hohmannTransfer_host_InitializeDataMapInfo(&(root), "hohmannTransfer");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
