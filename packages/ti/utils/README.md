# ccsdebug
```
CCS Debug Utility
CCS Debug Utility: This utility can be flashed on the QSPI The application is written over SYSBIOS and will loop forever. In the meantime CCS can be attached and the developers can then download the real application which needs to be debugged.

This utility provides while loop application for MSS in XWR14xx and for MSS and DSS in XWR16xx/XWR18xx/XWR68xx.

On MSS, it calls ESM and SOC init functions to initialize the device in known state. ESM init is needed to install the FIQ handler in case there are ESM errors on bootup. SOC init is needed to unhalt DSP in XWR16xx/XWR18xx/XWR68xx. As a byproduct, SOC init also unhalts the BSS and performs the APLL close loop procedure. Hence when this debug utility is executed from flash, the system is running using the APLL clocks.
```

#hsiheader(DCA1000)
```
DCA1000, mmWave demo with LVDS-based instrumentation
 *   @file  dss_lvds_stream.c
 *
 *   @brief
 *      Implements LVDS stream functionality.
```

# cycleprofiler
https://e2e.ti.com/support/sensors-group/sensors/f/sensors-forum/805225/awr1642-measure-process-time-in-mcu-side
```
timer count 
```

# mathutils
```
uint32_t mathUtils_ceilLog2(uint32_t x)
3 -> 1
uint32_t mathUtils_floorLog2(uint32_t x)
3 -> 2
uint32_t mathUtils_pow2roundup(uint32_t x)
3 -> 4
```

```
/**
 *  @b Description
 *  @n
 *      Function to generate window coefficients for FFT.
 *
 *  @param[out] win Pointer to output calculated window samples in Q17 format.
 *  @param[in]  winLen Length of window.
 *  @param[in]  winGenLen Length of window to be generated.
 *  @param[in]  winType Type of window, one of @ref FFT_WINDOW_TYPES
 *  @param[in]  qFormat Q format of generated window samples
 *  @retval none.
 *
 *  \ingroup MATHUTILS_EXTERNAL_FUNCTION
 */
void mathUtils_genWindow(uint32_t *win, uint32_t winLen,
                         uint32_t winGenLen, uint32_t winType, uint32_t qFormat)
Q17
leakage
窗函數
```
https://en.wikipedia.org/wiki/Window_function
https://zhuanlan.zhihu.com/p/24318554

# randomdatagenerator
```
1. 高斯雜訊產生
2. 0-7ffff 亂數產生
```

# sbl
```
Secondary Boot Loader (SBL)
Software Design
```
file:///C:/Users/opo20/iCloudDrive/iCloud~QReader~MarginStudy/MMWAVE/SBL_design.pdf

# testlogger
```
For every test file
```