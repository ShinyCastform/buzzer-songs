//put your own pin
int buzzer_pin = 8;

struct MusicStruct {
  int c = 262;
  int d = 294;
  int e = 330;
  int f = 349;
  int g = 392;
  int a = 440;
  int b = 494;
  int c2 = 523;
  int d2 = 587;
  int e2 = 659;
  int f2 = 698;
  
}Music;

struct LengthStruct {
  float quarter = 0.25;
  float three_quarter = 0.75;
  float one = 1.0;
  float two = 2.0;
  float two_half = 2.5;
  float three = 3;
}Length;

 
int tempo =400;

void setup() {
  
  pinMode(buzzer_pin, OUTPUT);
}

void setTone(int pin, int note, int duration) {
  tone(pin, note, duration);
  delay(duration);
  noTone(pin);
}

void loop() {
  //1
  setTone(buzzer_pin, Music.e, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.f, tempo * Length.quarter);
  //2
  setTone(buzzer_pin, Music.g, tempo * Length.one);
  setTone(buzzer_pin, Music.c2, tempo * Length.two);
  setTone(buzzer_pin, Music.d, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.e, tempo * Length.quarter);
  //3
  setTone(buzzer_pin, Music.f, tempo * Length.three);
  setTone(buzzer_pin, Music.g, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.a, tempo * Length.quarter);
  //4
  setTone(buzzer_pin, Music.b, tempo * Length.one);
  setTone(buzzer_pin, Music.f2, tempo * Length.two);
  setTone(buzzer_pin, Music.a, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.b, tempo * Length.quarter);
  //5
  setTone(buzzer_pin, Music.c2, tempo * Length.one);
  setTone(buzzer_pin, Music.d2, tempo * Length.one);
  setTone(buzzer_pin, Music.e2, tempo * Length.one);
  setTone(buzzer_pin, Music.e, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.f, tempo * Length.quarter);
  //6 
  setTone(buzzer_pin, Music.g, tempo * Length.one);
  setTone(buzzer_pin, Music.c2, tempo * Length.two);
  setTone(buzzer_pin, Music.d2, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.e2, tempo * Length.quarter);
  //7
  setTone(buzzer_pin, Music.f2, tempo * Length.three);
  setTone(buzzer_pin, Music.g, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  //8
  setTone(buzzer_pin, Music.e2, tempo * Length.one);
  setTone(buzzer_pin, Music.d2, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  setTone(buzzer_pin, Music.e2, tempo * Length.one);
  setTone(buzzer_pin, Music.d2, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  //9
  setTone(buzzer_pin, Music.e2, tempo * Length.one);
  setTone(buzzer_pin, Music.d2, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  setTone(buzzer_pin, Music.f2, tempo * Length.one);
  setTone(buzzer_pin, Music.e2, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.d2, tempo * Length.quarter);
  //10 
  setTone(buzzer_pin, Music.c2, tempo * Length.three);
  setTone(buzzer_pin, Music.e, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  //11
  setTone(buzzer_pin, Music.f, tempo * Length.three);
  setTone(buzzer_pin, Music.d, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.f, tempo * Length.quarter);
  //12
  setTone(buzzer_pin, Music.e, tempo * Length.quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  setTone(buzzer_pin, Music.c2, tempo * Length.two_half);
  setTone(buzzer_pin, Music.e, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  //13
  setTone(buzzer_pin, Music.f, tempo * Length.three);
  setTone(buzzer_pin, Music.d, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.f, tempo * Length.quarter);
  //14 
  setTone(buzzer_pin, Music.e, tempo * Length.quarter);
  setTone(buzzer_pin, Music.d, tempo * Length.quarter);
  setTone(buzzer_pin, Music.c, tempo * Length.two_half);
  setTone(buzzer_pin, Music.e, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  //15
  setTone(buzzer_pin, Music.f, tempo * Length.three);
  setTone(buzzer_pin, Music.d, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.f, tempo * Length.quarter);
  //16
  setTone(buzzer_pin, Music.e, tempo * Length.quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  setTone(buzzer_pin, Music.c2, tempo * Length.two_half);
  setTone(buzzer_pin, Music.g, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  //17
  setTone(buzzer_pin, Music.e2, tempo * Length.one);
  setTone(buzzer_pin, Music.d2, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  setTone(buzzer_pin, Music.e2, tempo * Length.one);
  setTone(buzzer_pin, Music.d2, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  //18
  setTone(buzzer_pin, Music.e2, tempo * Length.one);
  setTone(buzzer_pin, Music.d2, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.g, tempo * Length.quarter);
  setTone(buzzer_pin, Music.f2, tempo * Length.one);
  setTone(buzzer_pin, Music.e2, tempo * Length.three_quarter);
  setTone(buzzer_pin, Music.d2, tempo * Length.quarter);
  //19
  setTone(buzzer_pin, Music.c2, tempo * Length.two);
  delay(500000);
}
