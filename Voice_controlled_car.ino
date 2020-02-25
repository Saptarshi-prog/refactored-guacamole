#include <SoftwareSerial.h>

SoftwareSerial BT(0, 1); //TX, RX respetively
String readvoice;

void setup() {
 BT.begin(9600);
 Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  while (BT.available()){ 
  delay(10); 
  char c = BT.read(); 
  readvoice += c; 
  } 
  if (readvoice.length() > 0) {
    Serial.println(readvoice);

  if(readvoice == "*move up#")
  {
    digitalWrite(3, HIGH);
    digitalWrite (4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6,LOW);
    delay(50);
  }

  else if(readvoice == "*move down#")
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6,HIGH);
    delay(50);
  }

  else if (readvoice == "*turn right#")
  {
    digitalWrite (3,HIGH);
    digitalWrite (4,LOW);
    digitalWrite (5,LOW);
    digitalWrite (6,LOW);
   delay (600);
      digitalWrite(3, HIGH);
    digitalWrite (4, LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    delay(50);
  
  }

 else if ( readvoice == "*turn left#")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (600);
      digitalWrite(3, HIGH);
    digitalWrite (4, LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    delay(50);
 }

 else if (readvoice == "*d#")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (100);
 }
 else if (readvoice == "*keep watch in all direction#")
 {
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (100);
 }
  else if (readvoice == "*show me Garbage#")
 {
 digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);

digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);
 }


 readvoice="";}} //Reset the variable
