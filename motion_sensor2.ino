

const int trigPin = 7;
const int echoPin =13;
const int led = 4;
float duration, distance;


void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delay(2);
digitalWrite(trigPin,HIGH);
delay(10);
digitalWrite(trigPin,LOW);

duration = pulseIn(echoPin, HIGH);
Serial.print("Duration: ");
Serial.println(duration);
distance= (duration*0.343)/2;
Serial.print("Distance: ");
Serial.println(distance);
 if (distance < 500) {
    digitalWrite(led, HIGH);
  }
 else {
    digitalWrite(led, LOW);
  }


delay (1000);



}
