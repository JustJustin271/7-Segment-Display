const int countPin = 12;

const int ledA = 11;
const int ledB = 10;
const int ledC = 9;
const int ledD = 8;
const int ledE = 7;
const int ledF = 6;
const int ledG = 5;

int count = 0;

bool lastState = true;

void setup() {
  pinMode(countPin, INPUT_PULLUP);

  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
}

void loop() {
  bool currentState = digitalRead(countPin);

  if (currentState != lastState) {
    if(currentState == LOW) {
      if(count < 10){
        count++;
      } else {
        count = 0;
      }
    }
    delay(50);
  }

  lastState = currentState;

  if(count == 0) {
    drawNumber(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW);
  }

  else if(count== 1) {
    drawNumber(LOW, HIGH, HIGH, LOW, LOW, LOW, LOW);
  }

  else if(count == 2) {
    drawNumber(HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH);
  }

  else if(count == 3) {
    drawNumber(HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH);
  }

  else if(count == 4) {
    drawNumber(LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH);
  }

  else if(count == 5) {
    drawNumber(HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH);
  }

  else if(count == 6) {
    drawNumber(HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH);
  }

  else if(count ==7) {
    drawNumber(HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW);
  }

  else if(count == 8) {
    drawNumber(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH);
  }

  else if(count == 9) {
    drawNumber(HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH);
  }

}

void drawNumber(bool sA, bool sB, bool sC, bool sD, bool sE, bool sF, bool sG){
    digitalWrite(ledA, sA);
    digitalWrite(ledB, sB);
    digitalWrite(ledC, sC);
    digitalWrite(ledD, sD);
    digitalWrite(ledE, sE);
    digitalWrite(ledF, sF);
    digitalWrite(ledG, sG);

    delay(50);
  }

  //March 26th, 2026
  //Code to power a single digit, 7 segemnt display
