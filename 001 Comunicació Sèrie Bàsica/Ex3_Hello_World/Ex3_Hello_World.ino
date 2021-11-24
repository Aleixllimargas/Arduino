/*********************************************************************************
**                                                                              **
**                                  HELLO WORLD                                 **
**                                                                              **
** Nom: Aleix Llimargas                                       Data: 22/11/2021  **
*********************************************************************************/

//********* Includes *************************************************************

//********* Variables ************************************************************

//********* Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}


//********* Loop *****************************************************************
void loop()                 // run over and over again
{
  Serial.println("Escull el numero de l'operació que vols realitzar?");  
  delay(1000);

  Serial.println("   1. Comprovar numero de tarjeta de credit.");  
  delay(1000);

  Serial.println("   2. Comprovar numero de compte bancari.");  
  delay(1000);

  Serial.println("   3. Buscar un digit perdut de targeta de crèdit.");  
  delay(1000);
}
     
//********* Funcions *************************************************************
