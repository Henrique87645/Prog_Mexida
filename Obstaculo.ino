void Obstaculo(){
  distanciaF = ultrasonicF.read();

  if ((digitalRead(IR[1]) == 0) && (distanciaF < 7)) {
    moverTras(V);//
    delay(250);
    //CONTORNO PELA ESQUERDA
    moverEsquerdaUltra(V); 
    delay(650);
    moverFrente(V);
    delay(700);
    moverDireitaUltra(V);
    delay(650);
    moverFrente(V);
    delay(1200);
    moverDireitaUltra(V);
    delay(650);
    moverFrente(V);
    delay(650);
    moverEsquerdaUltra(V); 
    delay(650); 
    }
} //fim do void
