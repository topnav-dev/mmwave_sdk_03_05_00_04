<style>
r { color: Red }
o { color: Orange }
g { color: Green }
</style>

# mmwave_sdk_03_05_00_04
RSS 
    – RF/Analog Subsystem, Radar Subsystem
    - <g>mmwave_sdk_XXXX/packages/ti/control/mmwavelink</g>
BSS (RPRC)
    – Baseband Subsystem
    – <g>mmwave_sdk_XXXX/packages/ti/firmware</g>
DSS 
    – DSP Subsystem, DSP C647x
MSS ( model:<r>TM4C129ENCPDT</r> )
    – Master Subsystem, Cortex-M4F
Algorithm 
    – <g>mmwave_sdk_XXXX/packages/ti/alg</g>
Demo code 
    – <g>mmwave_sdk_XXXX/packages/ti/demo/</g>

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