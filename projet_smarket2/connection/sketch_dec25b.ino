
#include <Password.h>
#include <Keypad.h>
#include <LiquidCrystal.h>
 
Password password = Password("1234");  // password
int dlugosc = 4;                        // length of the password
 
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
 
int ledRed = 11;
int ledGreen = 12;
int buzzer = 13;
 
int ilosc; // number of clicks
 
const byte ROWS = 4; // rows
const byte COLS = 3; // cols
 
char keys[ROWS][COLS] =
{
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
 
byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8};
 
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
 
void setup()
{
  Serial.begin(9600);
  keypad.addEventListener(keypadEvent);  
  pinMode(ledRed, OUTPUT);  
  pinMode(ledGreen, OUTPUT);
  pinMode(buzzer, OUTPUT);
 
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen, LOW);
 
  lcd.begin(16, 2);
 
  lcd.setCursor(1,0);
  lcd.print("Welcome");
  delay(1000);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("ENTER P");
  lcd.setCursor(0,1);
  lcd.print("IN");

}
 
void loop()
{
  keypad.getKey();
}
void keypadEvent(KeypadEvent eKey)
{
  switch (keypad.getState())
  {
    case PRESSED:
    Serial.print(eKey);

int i;
for( i = 1; i <= 1; i++ )
{
  tone(buzzer , 1000 ) ;   
  delay(50);  
  noTone(buzzer) ;           
  delay(50);      
}    
 
// Serial.print("Pressed:");
//Serial.print(eKey);

switch (eKey)
{
/*
case '#':
break;
 
case '*':
break;
*/
 
default:
ilosc=ilosc+1;
password.append(eKey);
}
//Serial.print(ilosc);
 
if(ilosc == 1)
{
lcd.clear();
lcd.setCursor(1,0);
lcd.print("PIN");
lcd.setCursor(0,1);
lcd.print("*_");
}
if(ilosc == 2)
{
lcd.clear();
lcd.setCursor(1,0);
lcd.print("PIN");
lcd.setCursor(0,1);
lcd.print("**_");
}
if(ilosc == 3)
{
lcd.clear();
lcd.setCursor(1,0);
lcd.print("PIN");
lcd.setCursor(0,1);
lcd.print("***_");
}
if(ilosc == 4)
{
lcd.clear();
lcd.setCursor(1,0);
lcd.print("PIN");
lcd.setCursor(0,1);
lcd.print("****_");
}
if(ilosc == 5)
{
lcd.clear();
lcd.setCursor(1,0);
lcd.print("PIN");
lcd.setCursor(0,1);
lcd.print("*****_");
}
if(ilosc == 6)
{
lcd.clear();
lcd.setCursor(1,0);
lcd.print("PIN");
lcd.setCursor(0,1);
lcd.print("******_");
}
if(ilosc == 7)
{
lcd.clear();
lcd.setCursor(1,0);
lcd.print("PIN");
lcd.setCursor(0,1);
lcd.print("*******_");
}
if(ilosc == 8)
{
lcd.clear();
lcd.setCursor(1,0);
lcd.print("PIN");
lcd.setCursor(0,1);
lcd.print("********");
}
 
if(ilosc == dlugosc)
{
delay(250);
//Serial.print(password);
checkPassword();
ilosc = 0;
}
}
}
 
void checkPassword()
{
//Serial.print(password);

 if (password.evaluate())
 //{
 //password.evaluate();
 {
int i;
for( i = 1; i <= 2; i++ )
{
  tone(buzzer , 1000 ) ;   
  delay(70);  
  noTone(buzzer) ;           
  delay(70);      
}  
 
      
    ilosc = 0;
    char inChar ; 
    inChar =(char) Serial.read();
    //Serial.print(inChar);

 if(inChar == '1')
 {
 
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
    
 
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("SUCCESS"); 


    delay(5000); 
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);

    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("WELCOME"); 
    

       
 }  
  else   if (inChar == '2' ) 
  {
int i;
for( i = 1; i <= 1; i++ )
{
 tone(buzzer , 1000 ) ;   
  delay(200);  
  noTone(buzzer) ;           
  delay(200);      
}  
    ilosc = 0;  
    password.reset();
 
    
 
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);    
             
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("WRONG!");
    delay(2000);
   
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("WELCOME");
  }
 }
}
