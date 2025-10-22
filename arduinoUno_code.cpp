#include <Wire.h>
#include <MPU6050.h>

#define LEFT_SWITCH_PIN 2
#define RIGHT_SWITCH_PIN 3
#define up 5
#define down 4

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();
  pinMode(LEFT_SWITCH_PIN, INPUT_PULLUP);
  pinMode(RIGHT_SWITCH_PIN, INPUT_PULLUP);
  pinMode(up, INPUT_PULLUP);
  pinMode(down, INPUT_PULLUP);
}

void loop() {
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  int leftSwitchState = digitalRead(LEFT_SWITCH_PIN);
  int rightSwitchState = digitalRead(RIGHT_SWITCH_PIN);
  int upstate = digitalRead(up);
  int downstate = digitalRead(down);


  Serial.print((2000-az)-850);
  Serial.print(",");
  Serial.print((-250-ay)+460);
  Serial.print(",");
  Serial.print(leftSwitchState);
  Serial.print(",");
  Serial.print(rightSwitchState);
  Serial.print(",");
  Serial.print(upstate);
  Serial.print(",");
  Serial.println(downstate);
 
  delay(350); 
}
