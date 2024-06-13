// funções de movimentação do robô que recebem "V" que vai ser velocidade
//MOTORES DE CURVA 90
void moverDireita90(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(FORWARD);//FRENTE
  motor4.setSpeed(V);
  motor4.run(FORWARD);//TRAS
} 

void moverEsquerda90(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(BACKWARD);//TRAS
  motor4.setSpeed(V);
  motor4.run(BACKWARD);//FRENTE
} // FIM MOTOR CURVA 90

//COMEÇO CURVAS IR
void moverDireita(unsigned char V)
{
  motor3.setSpeed(V-50);
  motor3.run(FORWARD);//FRENTE
  motor4.setSpeed(V);
  motor4.run(BACKWARD);//FRENTE
} 

void moverEsquerda(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(FORWARD);//FRENTE
  motor4.setSpeed(V-50);
  motor4.run(BACKWARD);//FRENTE
} // FIM CURVA IR 

void moverFrente(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(FORWARD); //FRENTE
  motor4.setSpeed(V);
  motor4.run(BACKWARD); //FRENTE
} 


void moverTras(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(BACKWARD);//tras
  motor4.setSpeed(V);
  motor4.run(FORWARD); //tras
}

void parar(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(RELEASE);
  motor4.setSpeed(V);
  motor4.run(RELEASE);
}
