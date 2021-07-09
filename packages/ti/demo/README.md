[TOC]

# Linux
## 1. CCStudio is not complete support

https://e2e.ti.com/support/sensors-group/sensors/f/sensors-forum/936621/ccs-awr1843boost-unable-to-build-deployment-executable-bin-for-1843boost-out-of-box-demo-form-industrial-toolbox-labs/3461384#3461384

```
rm -f /home/sirab/workspace_v9/mmwave_sdk_18xx_mss/xwr18xx_mmw_demo.bin
/home/sirab/ti/mmwave_sdk_03_03_00_03/packages/scripts/ImageCreator/out2rprc/out2rprc.exe xwr18xx_mmw_demo_mss.xer4f xwr18xx_mmw_demo_mss.tmp
Parsing the input object file, xwr18xx_mmw_demo_mss.xer4f.
Appending zeros 0
Appending zeros 256
Appending zeros 120616
File conversion complete!
/home/sirab/ti/mmwave_sdk_03_03_00_03/packages/scripts/ImageCreator/multicore_image_generator/MulticoreImageGen.exe LE 37 0x02000006 xwr18xx_mmw_demo.bin 0x35510000 xwr18xx_mmw_demo_mss.tmp 0xb5510000 /home/sirab/ti/mmwave_sdk_03_03_00_03/firmware/radarss/xwr18xx_radarss_rprc.bin 0xd5510000 /home/sirab/workspace_v9/mmwave_sdk_18xx_dss/Release/xwr18xx_mmw_demo_dss.bin
makefile:196: recipe for target 'post-build' failed
run-detectors: unable to find an interpreter for /home/sirab/ti/mmwave_sdk_03_03_00_03/packages/scripts/ImageCreator/multicore_image_generator/MulticoreImageGen.exe
gmake[2]: [post-build] Error 2 (ignored)
run-detectors: unable to find an interpreter for /home/sirab/ti/mmwave_sdk_03_03_00_03/packages/scripts/ImageCreator/crc_multicore_image/crc_multicore_image.exe
gmake[2]: [post-build] Error 2 (ignored)
gmake[2]: execvp: /home/sirab/ti/mmwave_sdk_03_03_00_03/packages/scripts/ImageCreator/append_bin_crc/gen_bincrc32.exe: Permission denied
gmake[2]: [post-build] Error 127 (ignored)
/home/sirab/ti/mmwave_sdk_03_03_00_03/packages/scripts/ImageCreator/crc_multicore_image/crc_multicore_image.exe xwr18xx_mmw_demo.bin xwr18xx_mmw_demo.tmp
makefile:196: recipe for target 'post-build' failed
/home/sirab/ti/mmwave_sdk_03_03_00_03/packages/scripts/ImageCreator/append_bin_crc/gen_bincrc32.exe xwr18xx_mmw_demo.bin
makefile:196: recipe for target 'post-build' failed
```

## 2. And matlab should edit port ...

# Windows

## 1. If on Windows, you can't compfile file by make...
