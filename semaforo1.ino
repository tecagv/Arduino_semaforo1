#define LED_GREEN A0
#define LED_YELLOW A1
#define LED_RED A2
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Go!");
  digitalWrite(A0, HIGH);
  delay (10000);
  digitalWrite(A0, LOW);
  Serial.println ("Stop!");
  digitalWrite(A2, HIGH);
  delay (10000);
  digitalWrite(A2, LOW);
  Serial.println("Reduce speed!");
  digitalWrite(A1, HIGH);
  delay (3000);
  digitalWrite(A1, LOW);
}
