/*********************************************************************************
**                                                                              **
**                                Control Structures                            **
**                                                                              **
** Nom: Aleix Llimargas                                       Data: 03/12/2021  **
*********************************************************************************/

//********* Includes *************************************************************

//********* Variables ************************************************************
int KgCO2m2 = 50;

//********* Setup ****************************************************************
void setup()              
{
  Serial.begin(9600);     

    if (KgCO2m2<=3.5)
  {
    Serial.print("A");
  }
    else if (KgCO2m2<6.5)
  {
    Serial.print("B");
  }
    else if (KgCO2m2<11.1)
  {
    Serial.print("C");
  }
    else if (KgCO2m2<17.7)
  {
    Serial.print("D");
  }
    else if (KgCO2m2<38.2)
  { 
    Serial.print("E");
  }
    else if (KgCO2m2<43.2)
  {
    Serial.print("F");
  } 
    else if (KgCO2m2>=43.2)
  {
    Serial.print("G");
  }
}

//********* Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
}
//********* Funcions *************************************************************
