/*********************************************************************************
**                                                                              **
**                                Math Is Fun                                   **
**                                                                              **
** Nom: Aleix Llimargas                                       Data: 29/11/2021  **
*********************************************************************************/

//********* Includes *************************************************************

//********* Variables ************************************************************
int test = 32767;

//********* Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is: ");
  Serial.println(test);
}

//********* Loop *****************************************************************
void loop()
{
}

//********* Funcions *************************************************************