```
# soc_xwr14xx.h
int32_t SOC_enableHWA(SOC_Handle handle, int32_t* errCode);
int32_t SOC_enableCSI(SOC_Handle handle, int32_t* errCode);

# soc_xwr18xx.h
int32_t SOC_enableHWA(SOC_Handle handle, int32_t* errCode);
int32_t SOC_isMMWaveMSSOperational(SOC_Handle handle, int32_t* errCode);
int32_t SOC_setMMWaveMSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_isMMWaveDSSOperational(SOC_Handle handle, int32_t* errCode);
int32_t SOC_setMMWaveDSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_setMSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_isMSSOperational(SOC_Handle handle, int32_t* errCode);
uint32_t SOC_getMSSVCLKFrequency(SOC_Handle handle, int32_t* errCode);
int32_t SOC_setDSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_isDSSOperational(SOC_Handle handle, int32_t* errCode);
int32_t SOC_triggerDSStoMSSsoftwareInterrupt(SOC_Handle handle,
int32_t SOC_configureDSSESMMask(SOC_Handle handle, uint8_t errorNumber, uint8_t mask, int32_t *errCode);

# soc_xwr16xx.h
int32_t SOC_isMMWaveMSSOperational(SOC_Handle handle, int32_t* errCode);
int32_t SOC_setMMWaveMSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_isMMWaveDSSOperational(SOC_Handle handle, int32_t* errCode);
int32_t SOC_setMMWaveDSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_setMSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_isMSSOperational(SOC_Handle handle, int32_t* errCode);
uint32_t SOC_getMSSVCLKFrequency(SOC_Handle handle, int32_t* errCode);
int32_t SOC_setDSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_isDSSOperational(SOC_Handle handle, int32_t* errCode);

int32_t SOC_triggerDSStoMSSsoftwareInterrupt(SOC_Handle handle,
int32_t SOC_configureDSSESMMask(SOC_Handle handle, uint8_t errorNumber, uint8_t mask, int32_t *errCode);

# soc_xwr68xx.h
int32_t SOC_enableHWA(SOC_Handle handle, int32_t* errCode);
int32_t SOC_isMMWaveMSSOperational(SOC_Handle handle, int32_t* errCode);
int32_t SOC_setMMWaveMSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_isMMWaveDSSOperational(SOC_Handle handle, int32_t* errCode);
int32_t SOC_setMMWaveDSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_setMSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_isMSSOperational(SOC_Handle handle, int32_t* errCode);
uint32_t SOC_getMSSVCLKFrequency(SOC_Handle handle, int32_t* errCode);
int32_t SOC_setDSSLinkState(SOC_Handle handle, uint8_t state, int32_t* errCode);
int32_t SOC_isDSSOperational(SOC_Handle handle, int32_t* errCode);
int32_t SOC_selectDMARequestMapping(SOC_Handle handle, SOC_ModuleId moduleId, int32_t* errCode);
int32_t SOC_selectInterruptRequestMapping(SOC_Handle handle, SOC_ModuleId moduleId, int32_t* errCode);

int32_t SOC_triggerDSStoMSSsoftwareInterrupt(SOC_Handle handle,
int32_t SOC_configureDSSESMMask(SOC_Handle handle, uint8_t errorNumber, uint8_t mask, int32_t *errCode);

# soc_internal.h
void SOC_deviceInit (SOC_DriverMCB* ptrSOCDriverMCB, int32_t* errCode);
void SOC_deviceDeinit(SOC_DriverMCB* ptrSOCDriverMCB, int32_t* errCode);
void SOC_SystemISR (uintptr_t arg);
SOC_TranslateAddr_LUT_Type SOC_getInAddr_LUTType(SOC_TranslateAddr_Dir direction);
SOC_TranslateAddr_LUT_Type SOC_getOutAddr_LUTType(SOC_TranslateAddr_Dir direction);

#soc.h
SOC_Handle SOC_init(SOC_Cfg* ptrCfg, int32_t* errCode);
int32_t SOC_ungateClock(SOC_Handle handle, SOC_ModuleId module, int32_t* errCode);
int32_t SOC_gateClock(SOC_Handle handle, SOC_ModuleId module, int32_t* errCode);
int32_t SOC_unhaltBSS(SOC_Handle handle, int32_t* errCode);
int32_t SOC_haltBSS(SOC_Handle handle, int32_t* errCode);
int32_t SOC_enableLVDS(SOC_Handle handle, int32_t* errCode);
int32_t SOC_SPIOutputCtrl (SOC_Handle handle, uint8_t spiInst, uint8_t enable, int32_t* errCode);
int32_t SOC_waitBSSPowerUp(SOC_Handle handle, int32_t* errCode);
int32_t SOC_deinit(SOC_Handle handle, int32_t* errCode);
SOC_SysIntListenerHandle SOC_registerSysIntListener(SOC_Handle handle, SOC_SysIntListenerCfg* ptrListenerCfg, int32_t* errCode);
int32_t SOC_deregisterSysIntListener(SOC_Handle handle, uint32_t systemInterrupt, SOC_SysIntListenerHandle listenerHandle, int32_t* errCode);
uint32_t SOC_translateAddress(uint32_t inAddr, SOC_TranslateAddr_Dir direction, int32_t* errCode);
int32_t SOC_setPeripheralClock(   SOC_Handle handle, SOC_ModuleId module, SOC_PeripheralClkSource clkSource, uint8_t clkDivisor, int32_t* errCode);
int32_t SOC_initPeripheralRam(SOC_Handle handle, SOC_ModuleId module, int32_t* errCode);
void SOC_microDelay (uint32_t delayInMircoSecs);
int32_t SOC_triggerWarmReset(SOC_Handle handle, SOC_WarmResetRequestType resetRequestType, int32_t* errCode);
int32_t SOC_enableWatchdog(SOC_Handle handle, int32_t* errCode);
int32_t SOC_disableWatchdog(SOC_Handle handle, int32_t* errCode);
int32_t SOC_getDevicePartNumber(SOC_Handle handle, SOC_PartNumber *devicePartNum, int32_t* errCode);
double SOC_getDeviceRFFreqScaleFactor(SOC_Handle handle, int32_t* errCode);
int32_t SOC_softReset(SOC_Handle handle, int32_t* errCode);
int32_t SOC_isSecureDevice(SOC_Handle handle, int32_t* errCode);
int32_t SOC_hasDSPCore(SOC_Handle handle, int32_t* errCode);
int32_t SOC_controlSecureFirewall(SOC_Handle handle, uint32_t firewallModulesBitmap, uint8_t control, int32_t* errCode);
int32_t SOC_resetDMA(SOC_Handle handle, int32_t* errCode);
```

```
SOC_MODULE_DCAN & SOC_MODULE_MCAN
https://e2e.ti.com/support/processors-group/processors/f/processors-forum/617022/tda3-what-does-dcan-stand-for/2272860#2272860
```

```
SOC_MODULE_RTID
SOC_MODULE_RTIC
???
```

# 各版本 api 差異

1. SOC_enableHWA(只有16xx沒有)
2. SOC_enableCSI(只有14xx有)
3. SPIA DMA(68xx有，不確定為什麼1843沒有)
```
extern int32_t SOC_selectDMARequestMapping(SOC_Handle handle, SOC_ModuleId moduleId, int32_t* errCode);
extern int32_t SOC_selectInterruptRequestMapping(SOC_Handle handle, SOC_ModuleId moduleId, int32_t* errCode);
???
```