#define trigPin 4
#define echoPin 3
#define pwm 1
#define led 2

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pwm, OUTPUT); 
  pinMode(led, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;


 if (distance >20  ){
  analogWrite(pwm, 0);
  digitalWrite(led, HIGH);
 }
if (13<distance&&distance<20){
  analogWrite(pwm, 250);
  digitalWrite(led, HIGH);
  delay (200);
  digitalWrite(led, LOW);
  analogWrite(pwm, 0);
 }
 else if (distance<13){
  analogWrite(pwm, 250);
  digitalWrite(led, HIGH);
  delay (70);
  digitalWrite(led,LOW);
  analogWrite(pwm, 0);
 }


 delay (300);
}
  
