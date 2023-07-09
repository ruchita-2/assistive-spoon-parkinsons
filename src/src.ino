// Code 

// Connections:

// Arduino UNO to MPU6050 motion sensor
// Vcc - Vcc
// GND - GND
// A5 - SCL
// A4 - SDA

// SG90 Servo Motor - Arduino UNO
// VCC - 5V
// SIG - D2
// GND - GND

#include <Wire.h>
#include <MPU6050.h>
#include <Servo.h>

Servo sg90;
int servo_pin = 2;
MPU6050 sensor;
int16_t ax, ay, az;
int16_t gx, gy, gz;

void setup()
{
  sg90.attach(servo_pin);
  Wire.begin();
  Serial.begin(9600);
  Serial.println("Initializing the sensor");
  sensor.initialize();
  Serial.println(sensor.testConnection() ? "Successfully Connected" : "Connection failed");
  delay(1000);
  Serial.println("Taking Values from the sensor");
  delay(1000);
}

void loop()
{
  sensor.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  ax = map(ax, -17000, 17000, 0, 180);
  Serial.println(ax);
  sg90.write(ax);
  ay = map(ay, -17000, 17000, 0, 180);
  Serial.println(ay);
  sg90.write(ay);
  az = map(az, -17000, 17000, 0, 180);
  Serial.println(az);
  sg90.write(az);
  delay(170);
}
