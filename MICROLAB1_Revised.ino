//Group Members: Skylar Smith, Daniel Kassey, Sakshi Jeena

int red = 10;
int yellow = 9;
int green = 8;
int buzzer = 13;
int button_Input = 7;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button_Input, INPUT);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  while(digitalRead(button_Input) == LOW)
  {
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);
  }
  if(digitalRead(button_Input) == HIGH)
  {
  changeLights();
  }
  
}
void changeLights() {       //Functions called to change the traffic light
 while(true)
 { 
  green_on();
  delay(20000);
  buzzerRG();

  yellow_on();
  delay(3000);
  buzzerY();
   
  red_on();
  delay(20000);
  buzzerRG();
 }
}

  void green_on()
  {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
  }

  void yellow_on()
  {
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
  }
  
  void red_on()
  {
    digitalWrite(red,HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
  } 

  void buzzerRG()
  {
    digitalWrite(buzzer, LOW);
    delay(17000);
    digitalWrite(buzzer, HIGH);
    delay(3000);
    digitalWrite(buzzer, LOW);
  }

  void buzzerY()
  {
    digitalWrite(buzzer, HIGH);
    delay(3000);
    digitalWrite(buzzer, LOW);
  }
  
