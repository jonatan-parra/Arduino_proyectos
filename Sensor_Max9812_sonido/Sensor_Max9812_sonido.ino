
int soundPin = A0;

void setup(){ 
  Serial.begin(9600); 
} 

void loop(){ 
  delay(1000);
  int value = analogRead(soundPin);

  // Parte gráfica
  /*Serial.print(320);
  Serial.print(" ");
  Serial.println(value); */

  // Cuando sobrepasa un límite de ruido
  if (value > 340){
    Serial.println("Está hablando muy alto ");
    Serial.println(value);
  } else {
    Serial.println(value);
    }
 
} 
