find ./hwa -name "*.h" -exec grep -in "extern " > hwa_cmd {} \;

# peripherals
can
canfd

# peripherals not used but test with MSP_EXP432P401R
i2c<->MSP_EXP432P401R
spi<->MSP_EXP432P401R

# utils
crc
crypto

# ADCBUFF
The ADCBuf driver in TI-RTOS samples an analogue waveform at a specified frequency. The resulting samples are transferred to a buffer provided by the application. The driver can either take n samples once, or continuously sample by double-buffering and providing a callback to process each finished buffer.

# CBUFF
The CBUFF (Common Buffer Controller) is responsible for the transfer of data from multiple sources like ADCBUFF, Chirp Parameters (CP), Chirp Quality (CQ) or any other source to the LVDS Tx or CSI2 Module.
