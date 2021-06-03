#include <Arduino.h>
#include <Time.h>

const int ledBlanca = 4;
const int ledAmarilla = 5;
const int ledVerde = 6;
const int ledRojo= 7;

boolean sens; //sensor que lee


void aviso() {
//Alineado
if (sens==true) {
  while (sens==true) {
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    }
  }
}

//void raceTime() {
  //Corre tiempo
  //setTime(00,00,00,01,01,2020);
  //time_t T = now();
  //const int actualT = minute(T) + ":" second(T);
  //const int tiempoVelocidad = T - actualT;
//}

void setup() {
  Serial.begin(9600);
  pinMode(ledBlanca, OUTPUT);//Alineado
  pinMode(ledAmarilla, OUTPUT);//Roja
  pinMode(ledVerde, OUTPUT);//Amarilla
  pinMode(ledRojo, OUTPUT);//Verde

}

void loop() {

  aviso();



}
