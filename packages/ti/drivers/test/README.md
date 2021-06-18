5. 4. 18. Usecases

5. 4. 18. 2. CSI-2 based streaming of ADC data
IWR14xx device has a high speed CSI-2 transmit interface that can be used to ship ADC data or 1D/2D processed data out of the device. An example 
usecase on how to program the front end to generate the ADC samples and tie it up to CBUFF/CSI-2 interface for data shipment is provided under mm
wave_sdk_<ver>\packages\ti\drivers\test\csi_stream. Refer to the doxygen documentation located at mmwave_sdk_<ver>\packages\ti\drivers\test\csi_
stream\docs\doxygen\html\index.html for more details.

5. 4. 18. 3. Basic configuration of Front end and capturing ADC data in L3 memory
To access ADC data from mmWave sensors, user need to program various basic components within the device in a given sequence. In order to help 
user understand the programming model needed to configure the device and generate ADC data in device's L3 memory, an example usecase is 
provided under mmwave_sdk_<ver>\packages\ti\drivers\test\mem_capture. Refer to the doxygen documentation located at mmwave_sdk_<ver>\pack
ages\ti\drivers\test\mem_capture\docs\doxygen\html\index.html for more details.

