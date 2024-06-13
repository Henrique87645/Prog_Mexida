void Verde() {
 ///ler o valor do LDR
 //O valor lido será entre 0 e 1023

  // beco sem saida (dois verdes ativados)
  if ((analogRead(ldrEsq) > verdeVal) && (analogRead(ldrDir) > verdeVal)) { 
    while(digitalRead(IR[1]) == 1){  
     moverEsquerda(V);
      delay(1500);
    }
  }

  //notação verde na esquerda
  if ((analogRead(ldrEsq) > verdeVal) && (analogRead(ldrDir) < verdeVal)) { 
    while(digitalRead(IR[1]) == 1){  
       moverEsquerda90(V);
       delay(10);
    }
  } 

   //notação verde na direita
  if ((analogRead(ldrEsq) < verdeVal) && (analogRead(ldrDir) > verdeVal)) { 
    while(digitalRead(IR[1]) == 1){  
       moverDireita90(V);
       delay(10);
    }
  } 
}
