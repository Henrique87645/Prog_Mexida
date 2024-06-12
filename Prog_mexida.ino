//Arquivo principal que chama funções e adiciona biblioteca
#include <AFMotor.h>//biblioteca de motores

//motores
AF_DCMotor motor3(1); //Seleção do Motor 1
AF_DCMotor motor4(2); //Seleção do Motor 2
//VELOCIDADE
int V = 130;

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

//LED CENTRO
// const int Centro = A12;

//LDR (verde)
// int ldrPinEsq = 0; 
// int ldrPinDir = 0; 
// int verdeVal = 500; 
// int ldrEsq = 0; //Valor lido do LDR
// int ldrDir = 0; //Valor lido do LDR

void setup(){
//DECLARANDO O SENSOR IR COMO INPUT
    for (int i = 0; i <= 5; i++) {
   pinMode(IR[i], INPUT);
   }     

  //Setup Serial Monitor
  Serial.begin(9600); 
  //digitalWrite(Centro, HIGH);

  //Verde
  // pinMode(ldrPinEsq, OUTPUT); 
  // pinMode(ldrPinDir, OUTPUT); 
}



void loop() {

  Curva90();
  //Seguelinha();  
  //testes do motor
  //moverFrente(255);
  //moverTras(255);   
  //moverDireita(255);
  //moverEsquerda(255);
  //parar(0);
}