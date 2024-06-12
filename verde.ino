void Verde() {
 ///ler o valor do LDR
 ldrEsq = analogRead(ldrPinEsq); 
 ldrDir = analogRead(ldrPinDir); //O valor lido será entre 0 e 1023

  // beco sem saida (dois verdes ativados)
  if ((ldrEsq > verdeVal) && (ldrDir > verdeVal)) {   
       moverEsquerda(V);
       delay(1500);
  }

  //notação verde na esquerda
  else if ((ldrEsq > verdeVal) && (ldrDir < verdeVal)) {   
       moverEsquerda(V);
       delay(100);
  } 

   //notação verde na direita
  else if ( (ldrEsq < verdeVal) && (ldrDir > verdeVal)) {   
       moverDireita(V);
       delay(10);
  } 
 

}


