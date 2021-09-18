void kombi(int t, int k) {
  for (int i = 0; i < k; i++) {
    led1s(t, k);
    led1ss(t, k);
    led1(t, k);
  }
}
void kombi2(int t, int k) {
  for (int i = 0; i < k; i++) {
    led1ss(t, 2);
    led1(t, k);
    led1s(t, 2);
  }
}
void kombi3(int t, int c) {
  for (int i = 0; i < c; i++) {
    led6(t);
    led7(t);
  }
}
void kombi4(int t, int h) {
  for (int j = 0; j < h; j++) {
    for (int i = 0; i < 2; i++) {
      led4(t);
    }
    for (int k = 0; k < 2; k++) {
      led5(t);
    }
  }
}
void kombi5(int t, int h) { //2
  for (int j = 0; j < h; j++) {
    for (int i = 0; i < 2; i++) {
      led9(t);
    }
    for (int k = 0; k < 2; k++) {
      led8(t);
    }
  }
}
void kombi6(int t, int h) {  //1
  for (int j = 0; j < h; j++) {
    for (int i = 0; i < 2; i++) {
      led11(t);
    }
    for (int k = 0; k < 2; k++) {
      led10(t);
    }
  }
}
void kombi7(int t, int l) {
  for (int i = 0; i < l; i++) {
    led12(t);
    led13(t);
  }
}
void kombi8(int t, int l) {
  for (int i = 0; i < l; i++) {
    led1(t, l);
  }
}
void kombi9(int t, int l) {
  for (int i = 0; i < l; i++) {
    led14(t);
  }
}
void kombi10(int t, int l) {
  for (int i = 0; i < l; i++) {
    led3(t);
  }
}
