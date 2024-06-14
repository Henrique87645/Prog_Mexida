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

  // beco sem saida (dois verdes ativados)
  if ((analogRead(ldrEsq) > verdeVal) && (analogRead(ldrDir) > verdeVal)) { 
    while(digitalRead(IR[1]) == 1){
      Serial.println("beco verde");  
      moverEsquerda(255);
      delay(1500);
    }
  }

  //notação verde na esquerda
  if ((analogRead(ldrEsq) > verdeVal) && (analogRead(ldrDir) < verdeVal)  && (digitalRead(IR[0]) == 0) && (digitalRead(IR[4]) == 0)) { 
    while(analogRead(ldrEsq) > verdeVal){
      Serial.println("verde esq"); 
      moverEsquerda90(255);
      delay(15);
    }
  } 

   //notação verde na direita
  if ((analogRead(ldrEsq) < verdeVal) && (analogRead(ldrDir) > verdeVal)  && (digitalRead(IR[2]) == 0) && (digitalRead(IR[3]) == 0)) { 
    while(analogRead(ldrDir) > verdeVal){
      Serial.println("verde dir"); 
      moverEsquerda90(255);
      delay(15);
    }
  } 
}
