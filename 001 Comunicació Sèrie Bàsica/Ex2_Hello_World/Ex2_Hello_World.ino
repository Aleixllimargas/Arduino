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
  Serial.println("Hello world!");  
  delay(1000);
}
   
//********* Funcions *************************************************************
