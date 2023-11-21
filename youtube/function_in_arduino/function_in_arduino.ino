//=================FUNCTIONS IN ARDUINO PROGRAMMING=======================================//
//CREATE A VOID FUNCNTION TO PRINT 1 TO 10 TO THE SERIAL MONITOR WITH NO PARAMETERS
//CREATE A VOID FUNCNTION TO PRINT 1 TO 10 TO THE SERIAL MONITOR WITH PARAMETERS (INT TYPE)
// CREATE AN INT FUNCTION TO CALCULATE AREA OF A RECTANGLE WITH LENGTH AND BREADTH AS PARAMETERS

// returnType functionName(parameters) {
  //instructions
// }

void printSerial(functions is) {//print {0, 1, 2, 3, 4, 5}
  Serial.print("{");
  for( int num = 0; num <=5; num++) {
    Serial.print(num);
    Serial.print(",");
  }
  Serial.println("}");
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  printSerial();
  printSerial();
  printSerial();
  printSerial();
  printSerial();
  printSerial();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("\n\n\n");
  printSerial();
}
