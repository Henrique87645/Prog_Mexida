

/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = direita 90
  [4] = esquerda 90
*/

//LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA
void Seguelinha() {

       //CORREÇÃO SEGUE LINHA ESQUERDA
      if((digitalRead(IR[0]) == 0) && (digitalRead(IR[2]) == 1)){ 
        //Serial.println("Correção esq");
        moverDireita(V);
        delay(20);
      } 

      //CORREÇÃO SEGUE LINHA DIREITA
      if((digitalRead(IR[2]) == 0) && (digitalRead(IR[0]) == 1)){ 
        //Serial.println("Correção dir");
        moverEsquerda(V);
        delay(20);
      }  

      if ((digitalRead(IR[4]) == 1) && (digitalRead(IR[3]) == 1) && (digitalRead(IR[1]) == 0)){

        moverTras(110);
        delay(700);
        moverEsquerda(110);
        delay(700);
        moverDireita90(V);
        delay(200);

        while (digitalRead(IR[1]) == 0){

          Serial.println("beco");
          moverDireita90(V);
          delay(15);

        }
      } 

      else{
        //Serial.println("Tudo OK");
        moverFrente(V-10);
      }



}
