const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;
const int buttonPin6 = 7;
const int buttonPin7 = 8;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;
int val6 = 0;
int val7 = 0;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;

void setup() 
{
   pinMode(buttonPin1, INPUT);
   pinMode(buttonPin2, INPUT);
   pinMode(buttonPin3, INPUT);
   pinMode(buttonPin4, INPUT);
   pinMode(buttonPin5, INPUT);
   pinMode(buttonPin6, INPUT);
   pinMode(buttonPin7, INPUT);
   Serial.begin(9600);
   buttonState1 = digitalRead(buttonPin1);
   buttonState2 = digitalRead(buttonPin2);
   buttonState3 = digitalRead(buttonPin3); 
   buttonState4 = digitalRead(buttonPin4);
   buttonState5 = digitalRead(buttonPin2);
   buttonState6 = digitalRead(buttonPin3); 
   buttonState7 = digitalRead(buttonPin4);
}

void loop() 
{
   val1 = digitalRead(buttonPin1);      // read input value and store it in val
   val2 = digitalRead(buttonPin2);
   val3 = digitalRead(buttonPin3);
   val4 = digitalRead(buttonPin4);
   val5 = digitalRead(buttonPin5);
   val6 = digitalRead(buttonPin6);
   val7 = digitalRead(buttonPin7);
   //if(Serial.available()) {
   if (val1 != buttonState1) {          // the button state has changed!
     if (val1 == HIGH) // check if the button is pressed
     {                
       Button1();
     } 
     if (val1 == LOW) // check if the button is pressed
     {                
       minusButton();
     } 
     buttonState1 = val1;
  }
  if(val2 != buttonState2)
  {
    if(val2 == HIGH)
    {
      Button2();
    }
    if(val2 == LOW)
    {
      minusButton();
    }
    buttonState2 = val2;
  }
  if (val3 != buttonState3) {          // the button state has changed!
     if (val3 == HIGH) // check if the button is pressed
     {                
       Button3();
     } 
     if (val3 == LOW) // check if the button is pressed
     {                
       minusButton();
     } 
     buttonState3 = val3;
  }
  if(val4 != buttonState4)
  {
    if(val4 == HIGH)
    {
      Button4();
    }
    if(val4 == LOW)
    {
      minusButton();
    }
    buttonState4 = val4;
  }
  if (val5 != buttonState5) {          // the button state has changed!
     if (val5 == HIGH) // check if the button is pressed
     {                
       Button5();
     } 
     if (val5 == LOW) // check if the button is pressed
     {                
       minusButton();
     } 
     buttonState5 = val5;
  }
  if(val6 != buttonState6)
  {
    if(val6 == HIGH)
    {
      Button6();
    }
    if(val6 == LOW)
    {
      minusButton();
    }
    buttonState6 = val6;
  }
  if (val7 != buttonState7) {          // the button state has changed!
     if (val7 == HIGH) // check if the button is pressed
     {                
       Button7();
     } 
     if (val7 == LOW) // check if the button is pressed
     {                
       //minusButton();
     } 
     buttonState7 = val7;
  }
}

void Button1()
{
  Serial.println('7');
}

void Button2()
{
  Serial.println('8');
}
void Button3()
{
  Serial.println('9');
}

void Button4()
{
  Serial.println('a');
}
void Button5()
{
  Serial.println('b');
}

void Button6()
{
  Serial.println('c');
}
void Button7()
{
  Serial.println('d');
}

void minusButton()
{
  Serial.println('-');
}

