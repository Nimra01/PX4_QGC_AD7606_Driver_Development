# Driver Development in PX4 Autopilot

## Overview

This repository contains a custom PX4 driver for interfacing with the **AD7606 sensor** to obtain potentiometer feedback.

The driver:

- Reads data via **UART** on the flight controller  
- Publishes data to a **uORB topic**  
- Streams the data over **MAVLink**  
- Displays values in **QGroundControl**

This enables real-time monitoring of AD7606 sensor channels directly inside QGC.

---

## Features

- UART interface with AD7606 on PX4  
- Publishes sensor data to uORB topics  
- Streams AD7606 data via MAVLink  
- Displays values in QGroundControl  

---

## Setup Instructions
Part-1

### 1. Clone PX4-Autopilot

```bash
git clone https://github.com/PX4/PX4-Autopilot.git --recursive
cd PX4-Autopilot

```
2. Copy Driver Files
Replace path_to_this_repo with your repository path:
```bash
cp -r path_to_this_repo/ad7606_uart_6C PX4-Autopilot/src/drivers/
cp -r path_to_this_repo/ad7606_uart_CUAV PX4-Autopilot/src/drivers/

```
3. Copy uORB Message Definition
```bash
cp path_to_this_repo/ad7606.msg PX4-Autopilot/msg/

```
4. Update MAVLink Message Definitions
Open:

```bash
PX4-Autopilot/src/modules/mavlink/mavlink/message_definitions/v1.0/common.xml
Add the contents of:
ad7606_data.xml
inside the appropriate <messages> section.
```

5. Add MAVLink Stream Header
```bash
cp path_to_this_repo/AD7606_DATA.hpp PX4-Autopilot/src/modules/mavlink/streams/

```
6. Override MAVLink Source Files
```bash
cp path_to_this_repo/mavlink_main.cpp PX4-Autopilot/src/modules/mavlink/
cp path_to_this_repo/mavlink_messages.cpp PX4-Autopilot/src/modules/mavlink/
```

7. Build PX4
For Pixhawk / CUAV targets (example):
```bash
make px4_fmu-v6c_default

make cuav_x7pro_default

```
Part-2
## QGroundControl Customization
To view the messages in QGC, the application must "know" the structure of your custom MAVLink ID.

Header Generation:

Use the MAVLink Generator (mavgenerate.py) to process your modified common.xml.

Select Language: C, Protocol: 2.0.

QGC Header Replacement:

Locate your QGC source folder: libs/mavlink/include/mavlink/v2.0/common/.

Replace the existing common.h and add your custom ad7606_mavlink_msg.h.

Rebuild QGC:

Open qgroundcontrol.pro in Qt Creator.

Run Clean, then Run qmake, and Build.

## Usage & Verification
Once both PX4 and QGC are updated:

Connect your Flight Controller to QGC.

Navigate to Analyze Tools > MAVLink Inspector.

Look for the message named AD7606_DATA.

Expand the message to view real-time values for all 8 channels (Potentiometer feedback).

## Data Flow
AD7606 Sensor
     ↓ UART
PX4 Driver
     ↓ uORB
MAVLink Module
     ↓ MAVLink
QGroundControl

## Result
After flashing the firmware:

AD7606 values are published internally via uORB

MAVLink streams the data

QGroundControl displays the sensor values in MAVLink Inspector or custom widgets

<img width="509" height="532" alt="mavinsp" src="https://github.com/user-attachments/assets/61c900ed-c7b7-40f2-be53-c04db9e79e13" />

## Notes
Ensure correct UART port configuration in PX4 parameters

Rebuild firmware after every MAVLink or driver modification

Tested on Pixhawk 6C and CUAV X7 Pro
