/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = esquerda 90
  [4] = direita 90
*/
//LEMBRETE QUE 0-LUZ DESLIGADA E 1-LIGADA
void Curva90() {

  // COMEÇO CURVA DE 90 DIREITA
  if ((digitalRead(IR[4]) == 0) && (digitalRead(IR[3]) == 1) && (digitalRead(IR[1]) == 0)){

        moverFrente(110);
        delay(900);
        moverDireita90(V);
        delay(200);

        while (digitalRead(IR[1]) == 0){

          Serial.println("90 direita");
          moverDireita90(V);
          delay(15);

        }
  } 

      // COMEÇO CURVA DE 90 ESQUERDA
      if ((digitalRead(IR[3]) == 0) && (digitalRead(IR[4]) == 1) && (digitalRead(IR[1]) == 0)){

        moverFrente(110);
        delay(900);
        moverEsquerda90(V);
        delay(200);

        while(digitalRead(IR[1]) == 0){

          Serial.println("90 esquerda");
          moverEsquerda90(V);
          delay(15);

        }
      }  

  }
 

