/*********************************************************************************
**                                                                              **
**                                Control Structures                            **
**                                                                              **
** Nom: Aleix Llimargas                                       Data: 10/12/2021  **
*********************************************************************************/

//********* Includes *************************************************************

//********* Variables ************************************************************
int taula = 2;
int talua = 3;

//********* Setup ****************************************************************
void setup()      
{
  Serial.begin(9600);     
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula*i);    
  }
  Serial.begin(9600);     
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula*i);    
  }



}


//********* Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
}
//********* Funcions *************************************************************
