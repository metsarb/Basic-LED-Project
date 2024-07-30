int led1 = 6;
int led2 = 5;
int led3 = 4;
int led4 = 3;
int led5 = 2;
int led6 = 1;


void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led6, HIGH);
  delay(100);

  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);
  digitalWrite(led4, LOW);
  delay(100);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led6, LOW);
  delay(100);
}
