#include <Arduino.h>
#include <LibRobus.h>

void setup() {
  // put your setup code here, to run once:
  //pinMode(LED_BUILTIN,OUTPUT);
  BoardInit();
  AudioInit();
  DisplayInit();
  BluetoothInit();

 Serial.println("Hello world");

}

void loop() {
  // put your main code here, to run repeatedly:
  //Flasher LED
  /*
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  */

 MOTOR_SetSpeed(0,-1);
 MOTOR_SetSpeed(1,-1);
 delay(3000);
 MOTOR_SetSpeed(0,0);
 MOTOR_SetSpeed(1,0);
int32_t encodeur_G = ENCODER_Read(0);
int32_t encodeur_D = ENCODER_Read(1);
char encodeur_value[64] = {0};

sprintf(encodeur_value, "%ld", encodeur_D);
Serial.println(encodeur_value);

sprintf(encodeur_value, "%ld", encodeur_G);
Serial.println(encodeur_value);

while (true)
{
  /* code */
}


}