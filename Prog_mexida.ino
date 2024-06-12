//Arquivo principal que chama funções e adiciona biblioteca
#include <AFMotor.h>//biblioteca de motores
//motores
AF_DCMotor motor3(1); //Seleção do Motor 1
AF_DCMotor motor4(2); //Seleção do Motor 2
//VELOCIDADE
int V = 170;

//COMEÇO SEGUE LINHA
int IR[] = {48, 44, 50, 52, 46};
/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = direita 90
  [4] = esquerda 90
*/
//FIM SEGUE LINHA

void setup(){
//DECLARANDO O SENSOR IR COMO INPUT
  for (int i = 0; i <= 5; i++) {
    pinMode(IR[i], INPUT);
  }     
  
//COMEÇO ULTRASSONICO
  pinMode(trig, OUTPUT); //trig envia o sinal
  pinMode(echo, OUTPUT); //echo recebe o sinal
//FIM ULTRASSONICO

  //Setup Serial Monitor
  Serial.begin(9600); 
  pinMode(22, OUTPUT);
  pinMode(24, OUTPUT);
}



void loop() {
  digitalWrite(24,HIGH);
  digitalWrite(22, LOW);

  //Curva90();
  //Seguelinha();  
  //ultrassonico();
  //testes do motor
  //moverFrente(255);
  //moverTras(255);   
  //moverDireita(255);
  //moverEsquerda(255);
  //parar(0);
}
