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


  //notação verde na esquerda
  if ((analogRead(ldrEsq) > verdeVal) && (analogRead(ldrDir) < verdeVal)) { 
        //Enquanto seu valor estiver ligado, ele gira para a esquerda
        while ((digitalRead(IR[1]) == 0)) {

          Serial.println("Verde esquerda");
          moverEsquerda90(V);
          delay(20);

        }
  } 

  //notação verde na direita
  if ((analogRead(ldrEsq) < verdeVal) && (analogRead(ldrDir) > verdeVal)) { 
        while ((digitalRead(IR[1]) == 0)) {

          Serial.println("Verde direita");
          moverDireita90(V);
          delay(20);

        }
  } 
  // beco sem saida (dois verdes ativados)
  // if ((analogRead(ldrEsq) > verdeVal) && (analogRead(ldrDir) > verdeVal)) { 
  //   while(digitalRead(IR[1]) == 1){
  //     Serial.println("beco verde");  
  //     moverTras(V);
  //     delay(15);
  //   }
  // }
}
