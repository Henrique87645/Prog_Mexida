/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = direita 90
  [4] = esquerda 90
*/

//LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA
void Seguelinha(){

//CORREÇÃO SEGUE LINHA ESQUERDA
      if((digitalRead(IR[0]) == 1) && (digitalRead(IR[2]) == 0)){  
        while(digitalRead(IR[2]) == 0){
          Serial.println("Correção esq");
          moverEsquerda(V);
        }
      } //FIM CORREÇÃO SEGUE LINHA ESQUERDA 

      //CORREÇÃO SEGUE LINHA DIREITA
      if((digitalRead(IR[2]) == 1) && (digitalRead(IR[0]) == 0)) {
        while(digitalRead(IR[0]) == 0){
          Serial.println("Correção dir");
          moverDireita(V);
        }
      } //FIM CORREÇÃO SEGUE LINHA DIREITA 
      
      else {
        while(digitalRead(IR[1]) == 0){
          Serial.println("tudo ok");
          moverFrente(V);
          delay(15);
        }
      }
}