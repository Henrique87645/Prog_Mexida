void Verde() {
  
  // ler o valor do LDR
  // O valor lido será entre 0 e 1, zero branco e 1 verde
  ldrEsq = digitalRead(ldrEsquerdo1);
  ldrDir = digitalRead(ldrDireito1);


  // notação verde na direita
  if ((ldrEsq == 0) && (ldrDir == 1)) {
    Serial.println("ENTREI Direita");
      Serial.println(" verde 90 direita");
      moverFrente(150);
      delay(500);
      while (digitalRead(IR[2]) == 0) {
        moverDireita90(150);
        delay(20);
      }
  }
}
