#define enA 3 // define channel A connections
#define in1A 4
#define in2A 5
 
void setup() {
 // put your setup code here, to run once:
 
 
 Serial.begin(9600);
 
 pinMode(enA, OUTPUT);
 pinMode(in1A, OUTPUT);
 pinMode(in2A, OUTPUT);
 
 
 digitalWrite(enA, HIGH);
}

#define enB 8 // define channel B connections
#define in1B 9
#define in2B 10

void launcher() { // code for the launcher (2nd motor)

digitalWrite(enB, HIGH);

digitalWrite(in2A, HIGH);
digitalWrite(in1A, LOW);
Serial.println("Spinning one direction"); // go forward to launch zone
delay(3500); // stop at launch zone

analogWrite(in2B, 100); 
digitalWrite(in1B, HIGH);
analogWrite(in2B, 0); 
Serial.println("Spinning one direction"); // launch the ball forwards


delay(3500);

}
 
void loop() {
 // put your main code here, to run repeatedly:
 
 analogWrite(in2A, 255);
 digitalWrite(in2A, HIGH);
 digitalWrite(in1A, LOW);
 Serial.println("Spinning one direction");  // go forward
 
 delay(3500);
 
 
 
  analogWrite(in1A, 255);
 digitalWrite(in2A, LOW);
 digitalWrite(in1A, HIGH);
 Serial.println("Spinning the other direction"); // go backward 
 
 delay(6000);
 
 digitalWrite(in1A, LOW);
 digitalWrite(in2A, LOW);
 Serial.println("Stopped");
 
 delay(1000); 
 

}

 
