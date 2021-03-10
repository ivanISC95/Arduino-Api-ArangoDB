const int pulsadorPin = 4;
const int pulsadorPin2 = 5;
const int ledPin = 2;
 
int val=0;
int val2=0;
void setup() {
  // Activamos los pines de entrada y salida
    pinMode(pulsadorPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
    delay(20);
}

void loop(){
  val = digitalRead(pulsadorPin);
  val2 = digitalRead(pulsadorPin2);
  
  if(val == HIGH){
    digitalWrite(ledPin, HIGH);
    Serial.println("Derecha");
    delay(20);
    }
  if(val2 == HIGH){
    digitalWrite(ledPin, HIGH);
    Serial.println("Izquierda");
    delay(20);
    }
   if(val == LOW && val2 == LOW){
      digitalWrite(ledPin, LOW);
      Serial.println("APAGADO");
      delay(20);
      }
}
