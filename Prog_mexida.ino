//Arquivo principal que chama funções e adiciona biblioteca
#include <AFMotor.h>//biblioteca de motores

//motores
AF_DCMotor motor3(1); //Seleção do Motor 1
AF_DCMotor motor4(2); //Seleção do Motor 2

//VELOCIDADE
int V = 210;

//segue linha
int IR[] = {48, 44, 50, 52, 46};

/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = direita 90
  [4] = esquerda 90
*/
//int K = 0.8; //alta correção
// int k = 0.5; //baixa correção

//LDR (verde) 
 int verdeVal = 600; 
 int ldrEsq = A14; 
 int ldrDir = A15; 

void setup(){
//DECLARANDO O SENSOR IR COMO INPUT
    for (int i = 0; i <= 5; i++) {
   pinMode(IR[i], INPUT);
   }     

  //Setup Serial Monitor
  Serial.begin(9600); 
  pinMode(24, OUTPUT);
  pinMode(22, OUTPUT);

  //Verde
  pinMode(ldrPinEsq, INPUT); 
  pinMode(ldrPinDir, INPUT); 
}

void loop() {
  
  digitalWrite(22,HIGH);
  digitalWrite(24,LOW);
  Curva90(); 
  Seguelinha();
 
  
  //Verde(); 
  //testes do motor
  //moverFrente(255);
  //moverTras(255);   
  //moverDireita(255);
  //moverEsquerda(255);
  //parar(0);
}
