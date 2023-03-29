/* RGB Analog Example, Teensyduino Tutorial #2
   http://www.pjrc.com/teensy/tutorial2.html

   This example code is in the public domain.
*/

const int leftMotor =  10;
const int rightMotor =  9;
const int leftDirection =  14;
const int rightDirection =  15;
const int motorEnable =  8;
const int estop =  7;
const int motorPwr = 15;
  float val = 0;
void setup()   {
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
  pinMode(motorEnable, OUTPUT);
  pinMode(leftDirection, OUTPUT);
  pinMode(rightDirection, OUTPUT);
  pinMode(estop, OUTPUT);
  digitalWrite(motorEnable, LOW);
  digitalWrite(estop, LOW);
  digitalWrite(leftDirection, LOW);
  digitalWrite(rightDirection, HIGH);

  analogWrite(leftMotor, motorPwr);
  analogWrite(rightMotor, motorPwr);
}

void loop()
{

  digitalWrite(leftDirection, LOW);
  digitalWrite(rightDirection, HIGH);
  val = analogRead(A9);
  Serial.print("analog 0 is: ");
  Serial.println(val);
  delay(5000);
  digitalWrite(leftDirection, HIGH);
  digitalWrite(rightDirection, LOW);
  val = analogRead(A9);
  Serial.print("analog 0 is: ");
  Serial.println(val);
  delay(5000);
}

void forward() {
  
}
