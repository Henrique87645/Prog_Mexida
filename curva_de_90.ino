/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = esquerda 90
  [4] = direita 90
*/

//LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA
void Curva90() {

// COMEÇO CURVA DE 90 DIREITA
      if ((digitalRead(IR[4]) == 0)&& (digitalRead(IR[3]) == 1)) {
        //Enquanto seu valor estiver ligado, ele gira para a direita
          Serial.println("90 direita");
         while(digitalRead(IR[1]) == 0){
          moverDireita(255);
          delay(30);
         }
        
      } // FIM CURVA 90 DIREITA 

      // COMEÇO CURVA DE 90 ESQUERDA
      if ((digitalRead(IR[3]) == 0) && (digitalRead(IR[4]) == 1)) {
        //Enquanto seu valor estiver ligado, ele gira para a esquerda
          Serial.println("90 esquerda");
         while(digitalRead(IR[1]) == 0){
          moverEsquerda(255);
          delay(30);
         }
      } //FIM CURVA 90 ESQUERDA 
}