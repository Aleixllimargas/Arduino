/*********************************************************************************
**                                                                              **
**                                Control Structures                            **
**                                                                              **
** Nom: Aleix Llimargas                                       Data: 10/12/2021  **
*********************************************************************************/

//********* Includes *************************************************************

//********* Variables ************************************************************
int taula = 2;
int Taula = 3;
int Taaula = 4;
int Taaulaa = 5;

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
  Serial.println(Taula);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(Taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(Taula*i);    
  }
  Serial.begin(9600);     
  Serial.print("Taula de multiplicar del ");
  Serial.println(Taaula);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(Taaula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(Taaula*i);    
  }
  Serial.begin(9600);     
  Serial.print("Taula de multiplicar del ");
  Serial.println(Taaulaa);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(Taaulaa);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(Taaulaa*i);    
  }

}


//********* Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
}
//********* Funcions *************************************************************
