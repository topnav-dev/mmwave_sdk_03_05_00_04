![Alt text](xWR6843AOP.jpg)
![Alt text](xWR1843AOP.jpg)
![Alt text](xWR6843ISK_xWR1843BOOST.jpg)

https://e2e.ti.com/support/sensors-group/sensors/f/sensors-forum/908009/ccs-iwr6843aop-oob-68xxhwa-ant-define-error-antenna_geometry-c

```
Hello


Seems like definition of AntGemetry  struct is not easy to find. We will look into it.

To understand the struct, following seems to be the the grid along which antenna is layed out:

1. Consider the top left corner of the Tx  (and Rx) antennas as Reference = (0,0)  ie. X=0, Y=0

2. Struct specifies the offset of each antenna from this  Reference location in values of labmda/2 multiples.

3. For X values -->  Increments values from left to right for Lambda/2 counts

4. For Y values --> Increments values from top to bottom for Lambda/2 counts

Please let us know if that helped.

Thank you,

Vaibhav

```

```

The Antenna Geometry structure is explained in SDK module documentation under AoA2DProc DPU (Angle of Arrival using 2D FFT Method). You can access it as shown below:

- Navigate to C:\ti\mmwave_sdk_03_04_xx_xx\docs and and open the file mmwave_sdk_module_documentation.html in a browser.
- Click on the AoA using 2D FFT method link as highlighted in the picture below:
- Scroll down to the section named Antenna Geometry Definition, which explains how the generic antenna geometry structure is defined and used by the HWA AoA2dProc DPU code. The antenna geometry for a specific antenna (for example, xWR6843AoP ES2.0) is defined in the corresponding C structure in mmwave_sdk_03_04_xx_xx\packages\ti\board\antenna_geometry.c.
- Phase rotation: Phase rotation is configured using the compRangeBiasAndRxChanPhase CLI command available in the mmw demo as shown in the SDK user guide below:
For more details, including comparison pictures of AOP ES1.0 and ES2.0 antennas, please refer to section 4.2.2 xWR6843AoP ES2.0 - AoA Software Updates of the following app note: Migrating to xWR68xx and xWR18xx Millimeter Wave Sensors

 Regards

-Nitin
```

file:///Volumes/Case/mmwave/ti/mmwave_sdk_03_05_00_04/packages/ti/datapath/dpc/dpu/aoa2dproc/docs/doxygen/html/index.html
