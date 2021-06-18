```
6. 8. Range Bias and Rx Channel Gain/Offset Measurement and Compensation
Refer to the section "Range Bias and Rx Channel Gain/Offset Measurement and Compensation" in the mmwave_sdk_<ver>\packages\ti\datapath\dpc\
objectdetection\<chain_type>\docs\doxygen\html\index.html documentation for the procedure and internal implementation details. To execute the 
procedure using Visualizer GUI, here are the steps:
  Set the target as explained in the demo documentation and update the mmwave_sdk_<ver>\packages\ti\demo\<platform>\mmw\profiles\profile_calibration.cfg appropriately.

  Set up Visualizer and mmW demo as mentioned in the section Running the Demos.

  Use the "Load Config From PC and Send" button on plots tab to send the mmwave_sdk_<ver>\packages\ti\demo\<platform>\mmw\profiles\profile_calibration.cfg.

  The Console messages window on the Configure tab will dump the "compRangeBiasAndRxChanPhase" command to be used for 
  subsequent runs where compensation is desired.a

  Copy and save the string for that particular mmWave sensor to your PC. You can use it in the "Advanced config" tab in the Visualizer and 
  tune any running profile in real time. Alternatively, you can add this to your custom profile configs and use it via the "Load Config From PC 
  and Send" button.
```
