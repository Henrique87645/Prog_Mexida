/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = direita 90
  [4] = esquerda 90
*/
void Verde() {
 ///ler o valor do LDR
 //O valor lido será entre 0 e 1023 
  ldrEsq = analogRead(ldrEsquerdo1);
  ldrDir = analogRead(ldrDireito1);
  Serial.println(analogRead(ldrEsquerdo1));
  Serial.println( analogRead(ldrDireito1));

  //notação verde na esquerda
  if ((ldrEsq > verdeVal) && (ldrDir < verdeVal)) { 
    if((digitalRead(IR[4]) == 0) && (digitalRead(IR[0]) == 0)) {
      Serial.println("Verde esquerda");
      moverEsquerda90(V);
      delay(20);
    }
  } 

  //notação verde na direita
  if ((ldrEsq < verdeVal) && (ldrDir > verdeVal)) { 
    if((digitalRead(IR[3]) == 0) && (digitalRead(IR[2]) == 0)) {
      Serial.println("Verde Direita");
      moverDireita90(V);
      delay(20);
    }
  } 
  //beco sem saida (dois verdes ativados)
  if ((analogRead(ldrEsq) > verdeVal) && (analogRead(ldrDir) > verdeVal)) { 
    if((digitalRead(IR[3]) == 0) && (digitalRead(IR[4]) == 0)){
      Serial.println("beco verde");  
      moverTras(V);
      delay(15);
    }
  }
}
