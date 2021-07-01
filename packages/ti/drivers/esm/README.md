```
ESM_Handle ESM_init(uint8_t bClearErrors);
int32_t ESM_close(ESM_Handle handle);
int32_t ESM_registerNotifier(ESM_Handle handle, ESM_NotifyParams* params, int32_t* errCode);
int32_t ESM_deregisterNotifier(ESM_Handle handle, int32_t notifyIndex, int32_t* errCode);
```

``` #relationship
mss_mainc.c <-> ESM_init(0U); //dont clear errors as TI RTOS does it
watchdog    <-> ESM_registerNotifier & ESM_deregisterNotifier
```