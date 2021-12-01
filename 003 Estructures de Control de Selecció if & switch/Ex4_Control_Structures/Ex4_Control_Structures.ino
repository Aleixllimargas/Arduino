/*********************************************************************************
**                                                                              **
**                                Control Structures                            **
**                                                                              **
** Nom: Aleix Llimargas                                       Data: 01/11/2021  **
*********************************************************************************/

//********* Includes *************************************************************

//********* Variables ************************************************************
int tempAigua = 100;

//********* Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua < 90)
  {
    Serial.print("Aigua encara no vull!");
  }
    else if (tempAigua>=90 && tempAigua<100)
  {
    Serial.print("Aigua apunt de bullir!");
  }
    else if (tempAigua == 100)
  {
    Serial.print("Aigua a 100C!");
  }
    else
  {
    Serial.print("Aigua bullint!");
  }
}

//********* Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
}
//********* Funcions *************************************************************
