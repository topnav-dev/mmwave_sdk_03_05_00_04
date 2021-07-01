# dpm.h -> dpm_core.c
```c
extern DPM_Handle DPM_init (DPM_InitCfg* ptrInitCfg, int32_t* errCode);
extern int32_t DPM_synch (DPM_Handle handle, int32_t* errCode);
extern int32_t DPM_ioctl (DPM_Handle handle, uint32_t cmd, void* arg, uint32_t argLen);
extern int32_t DPM_start (DPM_Handle handle);
extern int32_t DPM_stop (DPM_Handle handle);
extern int32_t DPM_execute (DPM_Handle handle, DPM_Buffer* ptrResult);
extern int32_t DPM_sendResult (DPM_Handle handle, bool isAckNeeded, DPM_Buffer* ptrResult);
extern int32_t DPM_relayResult (DPM_Handle handle, DPM_DPCHandle dpcHandle, DPM_Buffer* ptrResult);
extern int32_t DPM_notifyExecute (DPM_Handle handle, DPM_DPCHandle dpcHandle, bool isrContext);
extern int32_t DPM_deinit (DPM_Handle handle);
```

# include
dpm_internal.h

```c
extern DPM_HWAttribute   gDPMHwAttrib;        // dpm_xwrXXXX.c
extern SemaphoreP_Handle gDPMSemaphoreHandle; // ???
extern DPM_DomainTable   gDPMLocalTable;      // ???
extern DPM_DomainTable   gDPMRemoteTable;     // dpm_mailbox.c
```

- pipe
  - DPM_pipeInit 
    - DPM_init
  - DPM_pipeSend
    - dpm_mailbox.c -> DPM_mboxRemoteMailboxCallbackFxn
    - dpm_msg.c -> DPM_msgPostProcess
  - DPM_pipeRecv
    - DPM_msgRecv
  - DPM_pipeDeinit 
    - DPM_deinit
  
- msg 

  - DPM_msgInitHeader
  - DPM_msgRecv


dpm_listlib.h -> dpm_listlib.c -> dpm_pipe.c  

# src
dpm_core.c  
dpm_listlib.c  
dpm_mailbox.c  
dpm_msg.c  
dpm_pipe.c  
dpm_stubMailbox.c // depressed

# platform is same as each other
dpm_xwr16xx.c  
dpm_xwr18xx.c  
dpm_xwr68xx.c

---

# DPC_OBJDET\w+_INSTANCEID;
- DPC_OBJDET_DSP_INSTANCEID=0xDEEDDEED
- DPC_OBJDET_R4F_INSTANCEID=0xFEEDFEED

# DPMTest_\wlReportFxn
- LL_DPM_INSTANCE_ID=1111
- ML_DPM_INSTANCE_ID=2222
- HL_DPM_INSTANCE_ID=3333

---

  /* Setup the configuration: */

  dpmInitCfg.socHandle    = gMmwDssMCB.socHandle;

  dpmInitCfg.ptrProcChainCfg = &gDPC_ObjectDetectionCfg;

  dpmInitCfg.instanceId    = 0xFEEDFEED;

  dpmInitCfg.domain      = DPM_Domain_REMOTE;

  dpmInitCfg.reportFxn    = MmwDemo_DPC_ObjectDetection_reportFxn;

  dpmInitCfg.arg       = &objDetInitParams;

  dpmInitCfg.argSize     = sizeof(DPC_ObjectDetection_InitParams);

---

# DPM_EXTERNAL_DEFINITIONS

- DPM_MAX_FILE_NAME_LEN
- DPM_MAX_INFO_SIZE
- DPM_MAX_BUFFER
- DPM_MAX_DPC_DATA

# DPM_COMMAND

- DPM_CMD_INJECT_DATA
- DPM_CMD_BSS_FAULT
- DPM_CMD_DPC_ASSERT
- DPM_CMD_DPC_INFO
- DPM_CMD_DPC_START_INDEX

# flow
```
DPC_Objdet_Assert(...)
```

```
DPM_init -> DPM_synch -> DPM_start -> DPM_stop -> DPM_deinit
```

extern int32_t DPM_sendResult (DPM_Handle handle, bool isAckNeeded, DPM_Buffer* ptrResult);
extern int32_t DPM_relayResult (DPM_Handle handle, DPM_DPCHandle dpcHandle, DPM_Buffer* ptrResult);
<r>This function is only applicable for remote & distributed domains.</r>