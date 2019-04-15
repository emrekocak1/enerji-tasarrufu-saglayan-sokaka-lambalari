// defines pins numbers
const int trigPin = A0;
const int echoPin = A1;       // defines variables
long duration;
int distance1;


void setup() {
pinMode(trigPin, OUTPUT);    // Sets the trigPin as an Output
pinMode(echoPin, INPUT);     // Sets the echoPin as an Input

Serial.begin(9600);          // Starts the serial communication
}



void loop() {                
digitalWrite(trigPin, LOW);   // Clears the trigPin
delayMicroseconds(2);        // Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);   // Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);    // Calculating the distance
distance1= duration*0.034/2;    // Prints the distance on the Serial Monitor


//---------------------------------
if(distance1>2 && distance1<25){    //If distance1 in 2-25cm set digital output high
  digitalWrite(6, HIGH);
}
else{                                //If distance1 in 2-25cm set digital output low
   digitalWrite(6, LOW);
}

Serial.print("Distance: ");         //Print distance1 to screen
Serial.println(distance1);

}
