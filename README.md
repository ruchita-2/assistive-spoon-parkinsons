# Assistive spoon for patients suffering from Parkinson’s disease

One of the major symptoms of Parkinson's disease is hand tremors, which can limit a patient's independence, particularly during activities like eating. To address this problem, this project aims to build an assistive spoon that cancels out hand tremors, enabling patients to eat without assistance. The spoon utilizes an Arduino UNO microcontroller, an MPU 6050 motion sensor for monitoring hand motion, and an SG90 micro servo motor to stabilize the spoon's position.


## Objectives:

- To develop an assistive spoon using Arduino UNO, MPU 6050 motion sensor, and SG90 servo motor to cancel hand tremors caused by Parkinson's disease.
- To implement an algorithm that interprets tremor data from the motion sensor to provide servo motor control, maintaining spoon stability during meal consumption.

## Components Used:

- Arduino UNO board
- MPU 6050 motion sensor
- SG90 micro servo motor
- Breadboard and jumper wires



## Working Principle:

- The MPU 6050 motion sensor is attached to the breadboard to monitor hand tremors accurately.
- The Arduino UNO processes the data from the MPU 6050 motion sensor in real-time.
- Based on the tremor data received, the Arduino UNO drives the servo motor connected as output, which rotates the spoon in the desired direction.


By continuously monitoring the hand tremors and dynamically adjusting the spoon's position, the assistive spoon helps the effects of Parkinson's disease and enables individuals to eat without the need for assistance.