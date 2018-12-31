const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;
const int buttonPin6 = 7;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;
int val6 = 0;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;

void setup() 
{
   pinMode(buttonPin1, INPUT);
   pinMode(buttonPin2, INPUT);
   pinMode(buttonPin3, INPUT);
   pinMode(buttonPin4, INPUT);
   pinMode(buttonPin5, INPUT);
   pinMode(buttonPin6, INPUT);
   Serial.begin(9600);
   buttonState1 = digitalRead(buttonPin1);
   buttonState2 = digitalRead(buttonPin2);
   buttonState3 = digitalRead(buttonPin3); 
   buttonState4 = digitalRead(buttonPin4);
   buttonState5 = digitalRead(buttonPin5); 
   buttonState6 = digitalRead(buttonPin6);
}

void loop() 
{
  checkSerial();
   val1 = digitalRead(buttonPin1);      // read input value and store it in val
   val2 = digitalRead(buttonPin2);
   val3 = digitalRead(buttonPin3);
   val4 = digitalRead(buttonPin4);      // read input value and store it in val
   val5 = digitalRead(buttonPin5);
   val6 = digitalRead(buttonPin6);
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
}

void Button1()
{
  Serial.println('1');
  doTone(523);
}

void Button2()
{
  Serial.println('2');
  doTone(554);
}
void minusButton()
{
  Serial.println('-');
  doTone(0);
}
void Button3()
{
  Serial.println('3');
  doTone(587);
}

void Button4()
{
  Serial.println('4');
  doTone(622);
}
void Button5()
{
  Serial.println('5');
  doTone(659);
}

void Button6()
{
  Serial.println('6');
  doTone(698);
}

void checkSerial(){
  if (Serial.available() > 0) {
   char Read = Serial.read();
   if(Read == '-'){
     doTone(0);
   }
   if(Read == '7'){
     doTone(740);
   }
   if(Read == '8'){
     doTone(784);
   }
   if(Read == '9'){
     doTone(831);
   }
   if(Read == 'a'){
     doTone(880);
   }
   if(Read == 'b'){
     doTone(932);
   }
   if(Read == 'c'){
     doTone(988);
   }
   if(Read == 'd'){
     playDemo();
   }
  }
}

void doTone(int freq){
  if(freq == 0)
    noTone(11);
  else
    tone(11, getOctave(freq));
}

int getOctave(int freq){
  int val = analogRead(A3);
  if(val <= 146){
    return freq/8;
  }
  else if(val <= 293){
    return freq/4;
  }
  else if(val <= 439){
    return freq/2;
  }
  else if(val <= 585){
    return freq;
  }
  else if(val <= 731){
    return freq*2;
  }
  else if(val <= 878){
    return freq*4;
  }
  else{
    return freq*8;
  }
}

void playDemo(){
  int E = 659;
  int F = 698;
  int Gb = 740;
  int G = 784;
  int Ab = 831;
  int A = 880;
  int Bb = 932;
  int B = 988;
  int C = 1047;
  int Db = 1109;
  int D = 1175;
  int Eb = 1245;
  
  noTone(11);
  delay(1000);
  tone(11, E*2);
  delay(166.7);
  noTone(11);
  delay(1);
  tone(11, E*2);
  delay(333.3);
  noTone(11);
  tone(11, E*2);
  delay(166.7);
  noTone(11);
  noTone(11);
  delay(166.7);
  tone(11, C);
  delay(166.7);
  tone(11, E*2);
  delay(333.3);
  tone(11, G*2);
  delay(666.7);
  tone(11, G);
  delay(666.7);

  tone(11, C);
  delay(333.3);
  noTone(11);
  delay(166.7);
  tone(11, G);
  delay(166.7);
  noTone(11);
  delay(333.3);
  tone(11, E);
  delay(333.3);
  noTone(11);
  delay(166.7);
  tone(11, A);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, B);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, Bb);
  delay(166.7);
  tone(11, A);
  delay(333.3);

  tone(11, G);
  delay(222.2);
  tone(11, E*2);
  delay(222.2);
  tone(11, G*2);
  delay(222.2);
  tone(11, A*2);
  delay(333.3);
  tone(11, F*2);
  delay(166.7);
  tone(11, G*2);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, E*2);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, C);
  delay(166.7);
  tone(11, D);
  delay(166.7);
  tone(11, B);
  delay(166.7);
  noTone(11);
  delay(333.3);

  tone(11, C);
  delay(333.3);
  noTone(11);
  delay(166.7);
  tone(11, G);
  delay(166.7);
  noTone(11);
  delay(333.3);
  tone(11, E);
  delay(333.3);
  noTone(11);
  delay(166.7);
  tone(11, A);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, B);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, Bb);
  delay(166.7);
  tone(11, A);
  delay(333.3);

  tone(11, G);
  delay(222.2);
  tone(11, E*2);
  delay(222.2);
  tone(11, G*2);
  delay(222.2);
  tone(11, A*2);
  delay(333.3);
  tone(11, F*2);
  delay(166.7);
  tone(11, G*2);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, E*2);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, C);
  delay(166.7);
  tone(11, D);
  delay(166.7);
  tone(11, B);
  delay(166.7);
  noTone(11);
  delay(666.7);

  tone(11, G*2);
  delay(166.7);
  tone(11, Gb*2);
  delay(166.7);
  tone(11, F*2);
  delay(166.7);
  tone(11, Eb);
  delay(333.3);
  tone(11, E*2);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, Ab);
  delay(166.7);
  tone(11, A);
  delay(166.7);
  tone(11, C);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, A);
  delay(166.7);
  tone(11, C);
  delay(166.7);
  tone(11, D);
  delay(166.7);

  noTone(11);
  delay(333.3);
  tone(11, G*2);
  delay(166.7);
  tone(11, Gb*2);
  delay(166.7);
  tone(11, F*2);
  delay(166.7);
  tone(11, Eb);
  delay(333.3);
  tone(11, E*2);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, C*2);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, C*2);
  delay(166.7);
  noTone(11);
  delay(0.1000);
  tone(11, C*2);
  delay(666.7);

  noTone(11);
  delay(333.3);
  tone(11, G*2);
  delay(166.7);
  tone(11, Gb*2);
  delay(166.7);
  tone(11, F*2);
  delay(166.7);
  tone(11, Eb);
  delay(333.3);
  tone(11, E*2);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, Ab);
  delay(166.7);
  tone(11, A);
  delay(166.7);
  tone(11, C);
  delay(166.7);
  noTone(11);
  delay(166.7);
  tone(11, A);
  delay(166.7);
  tone(11, C);
  delay(166.7);
  tone(11, D);
  delay(166.7);

  noTone(11);
  delay(333.3);
  tone(11, Eb);
  delay(333.3);
  noTone(11);
  delay(166.7);
  tone(11, D);
  delay(333.3);
  noTone(11);
  delay(333.3);
  tone(11, C);
  delay(333.3);
  noTone(11);
  delay(2000);
}

