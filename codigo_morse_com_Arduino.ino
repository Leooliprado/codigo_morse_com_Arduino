/* código morse com Arduino.38º projeto.linguagem utilizada c++ 

  criado por: Leonardo de Oliveira Prado
  Instagram: arduino2.0tecnologico

  Data de inicio do projeto 5/12/2023
  Data de término do projeto 6/12/2023

*/
//******************inclusão das bibliotecas
#include <SPI.h>
#include <Wire.h> 
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//******************distanciada do objeto
Adafruit_SSD1306 display ;
//******************variaveis
String A="01";
String B="1000";
String C="1010";
String D="100";
String E="0";
String F="0010";
String G="110";
String H="0000";
String I="00";
String J="0111";
String K="101";
String L="0100";
String M="11";
String N="10";
String O="111";
String P="0110";
String Q="1101";
String R="010";
String S="000";
String T="1";
String U="001";
String V="0001";
String W="011";
String X="1001";
String Y="1011";
String Z="1100";
String espaco="00000";
String  digitado;
//******************definições
#define botao_1 2
#define botao_2 3
#define botao_enter 4
#define buzzer 5
//******************void setup
void setup(){
//******************executa as bibliotecas
  Wire.begin(); 
  display.begin(SSD1306_SWITCHCAPVCC,0X3C);
  display.setTextColor(WHITE); // COR DO DISPLAY
  display.clearDisplay();
  display.display();
//******************pim mode
  pinMode( botao_1, INPUT_PULLUP);
  pinMode( botao_2, INPUT_PULLUP);
  pinMode( botao_enter, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);

  //Serial.begin(9600);
}
//******************void loop
void loop(){
  //Serial.println(digitalRead( botao_1));
  //Serial.println(digitalRead( botao_2));
  display.setTextSize(1.10,1.10); // TAMANHO DA LETRA
//******************adiciona na variavel (digitado) o numro 0 ou 1 e faz o bip
 if(digitalRead(botao_1)==LOW){
  digitado=digitado +"0";
  tone(buzzer, 523, 100);
  delay(300);
  noTone(buzzer);
 }
 if(digitalRead(botao_2)==LOW){
  digitado=digitado +"1";
  tone(buzzer, 523, 600);
  delay(300);
  noTone(buzzer);
 }

//******************se o botao enter for clicado faça a verificação da sequências dos números que adiciona a letra correspondente da sequência digitada
else if(digitalRead(botao_enter)==LOW){
  tone(buzzer, 823, 100);
  delay(300);
  noTone(buzzer);

  if (digitado == espaco){
  display.print("  ");
  display.display();
  delay(100);
  digitado="";
 }
 if (digitado == A){//se a sequências dos números que eu digitei for a sequências da letra "A" Imprima no LCD a letra A
  display.print("A");
  display.display();
  delay(100);
  digitado="";
 }
 if (digitado == B){
  display.print("B");
  display.display();
  delay(100);
  digitado="";
 }  
 if (digitado == C){
  display.print("C");
  display.display();
  delay(100);
  digitado="";
 }  
 if (digitado == D){
  display.print("D");
  display.display();
  delay(100);
  digitado="";
 }  
 if (digitado == E){
  display.print("E");
  display.display();
  delay(100);
  digitado="";
 }  
 if (digitado == F){
  display.print("F");
  display.display();
  delay(100);
  digitado="";
 }  
 if (digitado == G){
  display.print("G");
  display.display();
  delay(100);
  digitado="";
 }  
 if (digitado == H){
  display.print("H");
  display.display();
  delay(100);
  digitado="";
 }  
 if (digitado == I){
  display.print("I");
  display.display();
  delay(100);
  digitado="";
 } 
 if (digitado ==J){
  display.print("J");
  display.display();
  delay(100);
  digitado="";
 }  
 if (digitado == K){
  display.print("K");
  display.display();
  delay(100);
  digitado="";
 }  
 if (digitado == L){
  display.print("L");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == M){
  display.print("M");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == N){
  display.print("N");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == O){
  display.print("O");
  display.display();
  delay(100);
  digitado="";
 } 
if (digitado == P){
  display.print("P");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == Q){
  display.print("Q");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == R){
  display.print("R");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == S){
  display.print("S");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == T){
  display.print("T");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == U){
  display.print("U");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == V){
  display.print("V");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == W){
  display.print("W");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == X){
  display.print("X");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == Y){
  display.print("Y");
  display.display();
  delay(100);
  digitado="";
 }  
if (digitado == Z){
  display.print("Z");
  display.display();
  delay(100);
  digitado="";
 } 
}
} 

