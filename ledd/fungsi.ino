int led1s(int timer, int jum) {
  for (int i = 0; i < jum; i++) {
    for (int j = 0; j < 11; j++) {
      digitalWrite(pin[j], HIGH);
      delay(timer);
    }

    for (int j = 0; j < 11; j++) {
      digitalWrite(pin[j], LOW);
      delay(timer);
    }

  }
}
int led1ss(int timer, int jum) {
  for (int i = 0; i < jum; i++) {
    for (int j = 10; j >= 0; j--) {
      digitalWrite(pin[j], HIGH);
      delay(timer);
    }
    for (int j = 10; j >= 0; j--) {
      digitalWrite(pin[j], LOW);
      delay(timer);
    }
  }
}
int led1(int timer, int l) {
  for (int k = 0; k < l; k++) {
    for (int i = 0; i < 12; i++) {
      for (int j = 0; j < 11; j++) {
        digitalWrite(pin[j], led[i][j]);
      }
      delay(timer);
    }
  }
}
int led2(int timer) {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 11; j++) {
      digitalWrite(pin[j], led[i][j]);
    }
    delay(timer);
  }
}
int led3(int timer) {
  for (int i = 5; i < 12; i++) {
    for (int j = 0; j < 11; j++) {
      digitalWrite(pin[j], led[i][j]);
    }
    delay(timer);
  }
}
void led4(int t) {
  bool i = 1;
  int k = 0;
  while (i) {
    digitalWrite(pin[0], HIGH);
    digitalWrite(pin[1], HIGH);
    digitalWrite(pin[2], HIGH);
    digitalWrite(pin[3], HIGH);
    digitalWrite(pin[4], HIGH);
    delay(t);
    digitalWrite(pin[0], LOW);
    digitalWrite(pin[1], LOW);
    digitalWrite(pin[2], LOW);
    digitalWrite(pin[3], LOW);
    digitalWrite(pin[4], LOW);
    delay(t);
    k++;
    if (k == 1) {
      i = 0;
    }
  }
}
int led5(int t) {
  bool i = 1;
  int k = 0;
  while (i) {
    digitalWrite(pin[6], HIGH);
    digitalWrite(pin[7], HIGH);
    digitalWrite(pin[8], HIGH);
    digitalWrite(pin[9], HIGH);
    digitalWrite(pin[10], HIGH);
    delay(t);
    digitalWrite(pin[6], LOW);
    digitalWrite(pin[7], LOW);
    digitalWrite(pin[8], LOW);
    digitalWrite(pin[9], LOW);
    digitalWrite(pin[10], LOW);
    delay(t);
    k++;
    if (k == 1) {
      i = 0;
    }
  }
}
int led6(int t) {
  for (int i = 0; i < 11; i++) {
    digitalWrite(pin[i], HIGH);
    delay(t);
    digitalWrite(pin[i], LOW);
    delay(t);
  }
}
int led7(int t) {
  for (int i = 10; i >= 0; i--) {
    digitalWrite(pin[i], HIGH);
    delay(t);
    digitalWrite(pin[i], LOW);
    delay(t);
  }
}
void led8(int t) {
  bool i = 1;
  int k = 0;
  while (i) {
    digitalWrite(pin[6], LOW);
    digitalWrite(pin[7], LOW);
    digitalWrite(pin[8], HIGH);
    digitalWrite(pin[9], HIGH);
    digitalWrite(pin[10], HIGH);
    delay(t);
    digitalWrite(pin[6], LOW);
    digitalWrite(pin[7], LOW);
    digitalWrite(pin[8], LOW);
    digitalWrite(pin[9], LOW);
    digitalWrite(pin[10], LOW);
    delay(t);
    k++;
    if (k == 1) {
      i = 0;
    }
  }
}
int led9(int t) {
  bool i = 1;
  int k = 0;
  while (i) {
      digitalWrite(pin[0], HIGH);
    digitalWrite(pin[1], HIGH);
    digitalWrite(pin[2], HIGH);
    digitalWrite(pin[3], LOW);
    digitalWrite(pin[4], LOW);
    delay(t);
    digitalWrite(pin[0], LOW);
    digitalWrite(pin[1], LOW);
    digitalWrite(pin[2], LOW);
    digitalWrite(pin[3], LOW);
    digitalWrite(pin[4], LOW);
    delay(t);
    k++;
    if (k == 1) {
      i = 0;
    }
  }
}
void led10(int t) {
  bool i = 1;
  int k = 0;
  while (i) {
   digitalWrite(pin[0], HIGH);
    digitalWrite(pin[1], LOW);
    digitalWrite(pin[2], LOW);
    digitalWrite(pin[3], LOW);
    digitalWrite(pin[4], LOW);
    delay(t);
    digitalWrite(pin[0], LOW);
    digitalWrite(pin[1], LOW);
    digitalWrite(pin[2], LOW);
    digitalWrite(pin[3], LOW);
    digitalWrite(pin[4], LOW);
    delay(t);
    k++;
    if (k == 1) {
      i = 0;
    }
  }
}
int led11(int t) {
  bool i = 1;
  int k = 0;
  while (i) {
    digitalWrite(pin[6], LOW);
    digitalWrite(pin[7], LOW);
    digitalWrite(pin[8], LOW);
    digitalWrite(pin[9], LOW);
    digitalWrite(pin[10], HIGH);
    delay(t);
    digitalWrite(pin[6], LOW);
    digitalWrite(pin[7], LOW);
    digitalWrite(pin[8], LOW);
    digitalWrite(pin[9], LOW);
    digitalWrite(pin[10], LOW);
    delay(t);
    k++;
    if (k == 1) {
      i = 0;
    }
  }
}
int led12(int timer) {
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 6; j++) {
      digitalWrite(pin[j], led[i][j]);
    }
    delay(timer);
  }
}
int led13(int timer) {
  for (int i = 0; i < 12; i++) {
    for (int j = 5; j < 12; j++) {
      digitalWrite(pin[j], led[i][j]);
    }
    delay(timer);
  }
}
int led14(int timer) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 11; j++) {
      digitalWrite(pin[j], leds3[i][j]);
    }
    delay(timer);
    i + 1;
    for (int j = 0; j < 11; j++) {
      digitalWrite(pin[j], leds3[i][j]);
    }
    i - 1;
    delay(timer);
  }
}
