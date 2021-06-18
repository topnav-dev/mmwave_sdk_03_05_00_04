TI Automotive and Industrial mmWave Radar products are highly-integrated 77GHz CMOS millimeter wave devices.The devices integrate all of the RF and Analog functionality, including VCO, PLL, PA, LNA, Mixer and ADC for multiple TX/RX channels into a single chip.
1. The AWR1243 is an RF transceiver device and it includes 4 receiver channels and 3 transmit channels in a single chip. AWR1243 also support multi-chip cascading.
2. The AWR1443/IWR1443 is a mmwave radar-on-a-chip device, which includes 4 receive channels and 3 transmit channels and additionally an Cortex R4F and hardware FFT accelerator.
3. AWR1642 and IWR1642 are mmwave radar-on-a-chip device, which includes 4 receive channels and 2 transmit channels and additionally an Cortex R4F and C674x DSP for signal processing

TI mmWave radar devices include a mmwave front end or BIST (Built-in Self-Test) processor, which is responsible to configure the RF/Analog and digital front-end in real-time, as well as to periodically schedule calibration and functional safety monitoring.This enables the mmwave front-end(BIST processor) to be self-contained and capable of adapting itself to handle temperature and ageing effects, and to enable significant ease-of-use from an external host perspective.

1. TI mmwave front end is a closed subsystem whose internal blocks are configurable using messages coming over mailbox.
2. TI mmWaveLink provides APIs generates these message and sends it to mmwave front end over mailbox. It also includes acknowledement and CRC for each message to provide a reliable communication
3. TI mmWaveLink Framework:

Is a link between application and mmwave front end.
Provides low level APIs to configure the front end and handles the communication with the front end.
Is platform and OS independent which means it can be ported into any processor which provides communication interface such as SPI and basic OS routines. The mmWaveLink framework can also run in single threaded environment
Is integrated into mmWave SDK and can run on R4F or DSP and communicates with mmwave front end over Mailbox interface
