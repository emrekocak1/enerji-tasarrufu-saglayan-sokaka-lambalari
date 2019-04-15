const int trigPin = A0;
const int echoPin = A1;       // defines variables
long duration;
int distance1;

const int trigPin2 = A2;
const int echoPin2 = A3;       // defines variables
long duration2;
int distance2;

const int trigPin3 = A4;
const int echoPin3 = A5;       // defines variables
long duration3;
int distance3;




void setup() {
pinMode(trigPin, OUTPUT);    // Sets the trigPin as an Output
pinMode(echoPin, INPUT);     // Sets the echoPin as an Input

pinMode(trigPin2, OUTPUT);    // Sets the trigPin as an Output
pinMode(echoPin2, INPUT);     // Sets the echoPin as an Input

pinMode(trigPin3, OUTPUT);    // Sets the trigPin as an Output
pinMode(echoPin3, INPUT);     // Sets the echoPin as an Input

Serial.begin(9600);          // Starts the serial communication
}



void loop() {                
digitalWrite(trigPin, LOW);   // Clears the trigPin
delayMicroseconds(2);        // Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(20);
digitalWrite(trigPin, LOW);   // Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);    // Calculating the distance
distance1= duration*0.034/2;    // Prints the distance on the Serial Monitor

digitalWrite(trigPin2, LOW);   // Clears the trigPin
delayMicroseconds(2);        // Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin2, HIGH);
delayMicroseconds(20);
digitalWrite(trigPin2, LOW);   // Reads the echoPin, returns the sound wave travel time in microseconds
duration2 = pulseIn(echoPin2, HIGH);    // Calculating the distance
distance2= duration2*0.034/2;    // Prints the distance on the Serial Monitor

digitalWrite(trigPin3, LOW);   // Clears the trigPin
delayMicroseconds(2);        // Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin3, HIGH);
delayMicroseconds(20);
digitalWrite(trigPin3, LOW);   // Reads the echoPin, returns the sound wave travel time in microseconds
duration3   = pulseIn(echoPin3, HIGH);    // Calculating the distance
distance3= duration3*0.034/2;    // Prints the distance on the Serial Monitor



//---------------------------------
if(distance1>2 && distance1<25){
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
}

else if(distance2>2 && distance2<25){
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  }
 
  
//----------------------------------
if(distance2>2 && distance2<25){
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

else if(distance3>2 && distance3<25){
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  }

//-----------------------------------
if(distance3>2 && distance3<25){
  digitalWrite(2, HIGH);

}
else{
   digitalWrite(2, LOW);

}

Serial.print("Distance: ");
Serial.println(distance1);

Serial.print("Distance2: ");
Serial.println(distance2);

Serial.print("Distance3: ");
Serial.println(distance3);

}
