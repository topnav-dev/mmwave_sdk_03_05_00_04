# mmwave_sdk_03_05_00_04
RSS 
    – RF/Analog Subsystem, Radar Subsystem
BSS(RPRC) 
    – Baseband Subsystem, Radar subsystem, – mmwave_sdk_XXXX/packages/ti/firmware
DSS 
    – DSP Subsystem, DSP C647x
MSS 
    – Master Subsystem, Cortex-R4F
Algorithm 
    – mmwave_sdk_XXXX/packages/ti/alg
Demo code 
    – mmwave_sdk_XXXX/packages/ti/demo/

---

tools: ftdi

---

# Datapath Layer Design

## DPM: Datapath manager
– Foundation layer that enables the "scalability" aspect of the 
architecture.

## DPIF: Standard Interface points in the Detection chain are 
defined
– Input ADC data, Radar Cube, Detection Matrix, Point cloud

## DPUs: Data Translating function(s) from one interface point to the other are called “Data Processing Units”
– Range Processing (ADC data to Radar Cube)
– Doppler Processing (Radar Cube to Detection Matrix)
– CFAR and AoA (Detection Matrix to Point Cloud)

## DPC: Data Processing Chain 
– Chain of “data processing units” is called a data processing Chain. 
Ex: Detection DPC (ADC to Point Cloud).
– This conforms to the DPM dictated API definition