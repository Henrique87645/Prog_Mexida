void rampa(){
  distanciaL1 = ultrasonicL1.read();
  distanciaL2 = ultrasonicL2.read();
  if ((distanciaL1 < 10) && (distanciaL2 < 10)){
    moverFrente(255);
    delay(5000);
  }
}