void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);

}
void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
}
void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  //My name: GURWINDER
  //Morse Code: --. ..- .-. .-- .. -. -.. . .-.

  //led blink for 'G'
  dash();
  dash();
  dot();
  delay(1500);

  //led blink for 'U'
  dot();
  dot();
  dash();
  delay(1500);

  //led blink for 'R'
  dot();
  dash();
  dot();
  delay(1500);

  //led blink for 'W'
  dot();
  dash();
  dash();
  delay(1500);

  //led blink for 'I'
  dot();
  dot();
  delay(1500);
   //led blink for 'N'

  dash();
  dot();
  delay(1500);
   //led blink for 'D'
 
  dash();
  dot();
  dot();
  delay(1500);
   //led blink for 'E'
  dot();
  delay(1500);
   //led blink for 'R'
  dot();
  dash();
  dot();
  delay(20000);

}
