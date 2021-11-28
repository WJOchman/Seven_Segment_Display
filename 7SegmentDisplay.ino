// 7 Segment Light Display

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6; 
int led6 = 7;
int led7 = 8;

// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
}

void loop() {

  // 0
  digitalWrite(led1, LOW);           
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(1000); 

  // 1
  digitalWrite(led1, HIGH);           
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  delay(1000);                                                  

  // 2
  digitalWrite(led1, LOW);           
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  delay(1000);                            

  // 3 
  digitalWrite(led1, LOW);           
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  delay(1000);                            

  // 4 
  digitalWrite(led1, HIGH);           
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  delay(1000);                            

  // 5
  digitalWrite(led1, LOW);           
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  delay(1000);                            

  // 6 
  digitalWrite(led1, LOW);           
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  delay(1000);                            

  // 7 
  digitalWrite(led1, LOW);           
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  delay(1000);              

  // 8 
  digitalWrite(led1, LOW);           
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  delay(1000); 

  //9
  digitalWrite(led1, LOW);           
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  delay(1000); 
}
