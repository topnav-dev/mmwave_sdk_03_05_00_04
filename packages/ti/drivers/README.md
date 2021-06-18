find ./hwa -name "*.h" -exec grep -in "extern " > hwa_cmd {} \;

The CBUFF (Common Buffer Controller) is responsible for the transfer of data from multiple sources like ADCBUFF, Chirp Parameters (CP), Chirp Quality (CQ) or any other source to the LVDS Tx or CSI2 Module.
