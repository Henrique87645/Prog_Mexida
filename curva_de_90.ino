/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = direita 90
  [4] = esquerda 90
*/

//LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA
void Curva90() {
// COMEÇO CURVA DE 90 DIREITA
      if ((digitalRead(IR[4]) == 1)&& (digitalRead(IR[3]) == 0)) {
        //Enquanto seu valor estiver ligado, ele gira para a direita
        while ((digitalRead(IR[1]) == 1) && (digitalRead(IR[2]) == 0)) {
          Serial.println("90 direita");
          moverDireita90(V);
          delay(20);
        }
      } // FIM CURVA 90 DIREITA 

      // COMEÇO CURVA DE 90 ESQUERDA
      if ((digitalRead(IR[3]) == 1) && (digitalRead(IR[4]) == 0)) {
        //Enquanto seu valor estiver ligado, ele gira para a esquerda
        while ((digitalRead(IR[1]) == 1) && (digitalRead(IR[0]) == 0)) {
          Serial.println("90 esquerda");
          moverEsquerda90(V);
          delay(20);
        }
      } //FIM CURVA 90 ESQUERDA 

      else{
         moverFrente(V);
         delay(20);
      }
}