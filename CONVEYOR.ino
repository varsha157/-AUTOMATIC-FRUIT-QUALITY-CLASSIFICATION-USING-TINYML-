String readString = " ";
int enA = 9;
int in1 = 5;
int in2 = 6;
int in3 = 4;
int in4 = 3;
int enB = 10;
void setup() {
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  analogWrite(enA,50);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    readString += c; 
  }
  if(readString.length() >0)
  {
    Serial.println(readString);
    if(readString == "Good")     
    {
      analogWrite(enA,50);
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      delay(3000);
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
    }
    if(readString == "Bad")
    {
      analogWrite(enA,50);
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      delay(3000);
      analogWrite(enB,100);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      delay(1000);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      delay(1000);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
    }
    readString="";
    
  } 
}
