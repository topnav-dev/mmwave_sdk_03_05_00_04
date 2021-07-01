<style>
r { color: Red }
o { color: Orange }
g { color: Green }
</style>

# File_cmd
find ./<r>hwa</r> -name "*.h" -exec grep -in "extern " > <r>hwa</r>_cmd {} \;

# Peripherals
<pre>
[can]           <-> only in can/test/
[canfd]         <-> only in canfd/test/
[qspiflash]     <-> <g>../utils/sbl</g>, [qspi]
[qspi]          <-> <g>../utils/hsiheader</g>
[dma]           <-> [uart]
</pre>

# Peripherals test with MSP_EXP432P401R or platform
<pre>
[i2c]           <-> MSP_EXP432P401R
[spi]           <-> MSP_EXP432P401R
[csi]           <-> <o>platform::xwr14xx</os>
</pre

# indepency utils
<pre>
[crc]
[crypto]
</pre>

# [adcbuff]
The ADCBuf driver in TI-RTOS samples an analogue waveform at a specified frequency. The resulting samples are transferred to a buffer provided by the application. The driver can either take n samples once, or continuously sample by double-buffering and providing a callback to process each finished buffer.

# [cbuff]
The CBUFF (Common Buffer Controller) is responsible for the transfer of data from multiple sources like <r>ADCBUFF, Chirp Parameters (CP), Chirp Quality (CQ) or any other source</r> to the <r>LVDS Tx</r> or <r>CSI2</r> Module.
And also cbuff <-> <g>../utils/hsiheader</g>

# [hwa]
<o> platform::xwr14xx &&platform::xwr18xx & platform::xwr68xx </o>
./drivers/hwa/platform/hwa_xwr18xx.c dss/mss
./drivers/hwa/platform/hwa_xwr68xx.c dss/mss
./drivers/hwa/platform/hwa_xwr14xx.c mss
./drivers/hwa/src/hwa.c
./datapath/dpedma/src/dpedmahwa.c
./datapath/dpu/rangeproc/test/hwa_main.c
./datapath/dpu/rangeproc/src/rangeprochwa.c
./datapath/dpc/dpu/aoaproc/test/aoaprochwa_test_main.c
./datapath/dpc/dpu/aoaproc/src/aoaprochwa.c
./datapath/dpc/dpu/cfarcaproc/test/cfarprochwa_test_main.c
./datapath/dpc/dpu/cfarcaproc/src/cfarcaprochwa.c
./datapath/dpc/dpu/aoa2dproc/src/aoa2dprochwa.c
./datapath/dpc/dpu/dopplerproc/test/doppleprochwa_test_main.c
./datapath/dpc/dpu/dopplerproc/src/dopplerprochwa.c
./datapath/dpc/objectdetection/objdetrangehwa/src/objdetrangehwa.c