# PX4_QGC_AD7606_Driver_Development
Driver Development in PX4 Autopilot and its integration with QGC

**Overview**

This repository contains a custom driver for interfacing the PX4 firmware with AD7606 sensor for getting potentiometer feedback. The driver reads data via UART port on the Flight Controller, publishes it to a uORB topic, and streams the data using MAVLink, allowing it to be displayed on QGroundControl.

**Features**

Interface with AD7606 via UART port on PX4.
Publishes sensor data to uORB topics for PX4 usage.
Streams AD7606 data via MAVLink for display in QGroundControl.
Setup Instructions
1. Clone the PX4-Autopilot Repository
To begin, clone the PX4-Autopilot repository:
git clone https://github.com/PX4/PX4-Autopilot.git --recursive

2. Copy Necessary Files
cp -r path_to_this_repo/ad7606_uart_6C PX4-Autopilot/src/drivers/
cp -r path_to_this_repo/ad7606_uart_CUAV PX4-Autopilot/src/drivers/
cp path_to_this_repo/ad7606.msg PX4-Autopilot/msg/

3. Update MAVLink Message Definitions
Add the ad7606_data.xml content to the PX4-Autopilot/src/modules/mavlink/mavlink/message_definitions/v1.0/common.xml file. Insert the XML code appropriately within the section of common.xml.

4. Add MAVLink Stream Header
cp path_to_this_repo/AD7606_DATA.hpp PX4-Autopilot/src/modules/mavlink/streams/
5. Override MAVLink Source Files
cp path_to_this_repo/mavlink_main.cpp PX4-Autopilot/src/modules/mavlink/
cp path_to_this_repo/mavlink_messages.cpp PX4-Autopilot/src/modules/mavlink/
Compile the firmware and use the provided QGroundControl.exe application upload the compiled firmware to your flight controller. Then use the same QGC app to connect to the Autopilot.
