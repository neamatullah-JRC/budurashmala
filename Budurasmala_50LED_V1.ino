// HAZI TECH
// Program by Hasitha Jayasundara
// Subscribe to my YouTube Channel - http://www.youtube.com/c/HAZITECH?sub_confirmation=1

//#define FASTLED_ESP8266_NODEMCU_PIN_ORDER //Uncomment for ESP-12E Boards
#include "FastLED.h"


#define NUM_LEDS 50
#define DATA_PIN 6
#define BRIGHTNESS 255

CRGB leds[NUM_LEDS];

byte mainarray[5][10][3];
byte a8x25[5][10][3];

int DELAY;
void Lotus_1_1();
void setup() {
  delay(2000);
  FastLED.setBrightness( BRIGHTNESS );
  DELAY = 80;
  
  // Uncomment one of the following lines for your leds arrangement.
  // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  // FastLED.setBrightness(CRGB(255,255,255));
  // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);

  // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, 9, 10, RGB>(leds, NUM_LEDS);

  // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);

}

void loop() 
{

//In step by step designs, say the function as abc(x,y); [x - DELAY, y - Repeats]
//In array functions, after mentioning the function, put pt8x25(z, x); [z - direction as 0 - up, 1 - down, 2 - left, 3 - right]
//In pattern shifing, we can define the way that the pattern to pattern shift happen at the end of each pattern. 
//Put shiftsteps8x25(z, x, i) at the end of patterns; [z - direction, x - DELAY, i - no of lines to shift in z direction]


for (int u = 0; u < 2; u++) {
Lotus_1_1();
pt8x25(0, DELAY);
Lotus_1_2();
pt8x25(0, DELAY);
Lotus_1_3();
pt8x25(0, DELAY);
Lotus_1_4();
pt8x25(0, DELAY);
Lotus_1_5();
pt8x25(0, DELAY);
Lotus_1_6();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);

for (int u = 0; u < 2; u++) {
Lotus_2_1();
pt8x25(0, DELAY);
Lotus_2_2();
pt8x25(0, DELAY);
Lotus_2_3();
pt8x25(0, DELAY);
Lotus_2_4();
pt8x25(0, DELAY);
Lotus_2_5();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);

for (int u = 0; u < 2; u++) {
Lotus_3_1();
pt8x25(0, DELAY);
Lotus_3_2();
pt8x25(0, DELAY);
Lotus_3_3();
pt8x25(0, DELAY);
Lotus_3_4();
pt8x25(0, DELAY);
Lotus_3_5();
pt8x25(0, DELAY);
Lotus_3_6();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);


for (int u = 0; u < 2; u++) {
Spiral_1_1();
pt8x25(2, DELAY);
Spiral_1_2();
pt8x25(2, DELAY);
Spiral_1_3();
pt8x25(2, DELAY);
}
shiftsteps8x25(2, DELAY, 5);

for (int u = 0; u < 2; u++) {
Spiral_2_1();
pt8x25(3, DELAY);
Spiral_2_2();
pt8x25(3, DELAY);
Spiral_2_3();
pt8x25(3, DELAY);
}
shiftsteps8x25(3, DELAY, 5);

for (int u = 0; u < 1; u++) {
Spiral_3_1();
pt8x25(2, DELAY);
Spiral_3_2();
pt8x25(2, DELAY);
Spiral_3_3();
pt8x25(2, DELAY);
Spiral_3_4();
pt8x25(2, DELAY);
}
shiftsteps8x25(2, DELAY, 10);


for (int u = 0; u < 5; u++) {
Spread_1_1();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);

for (int u = 0; u < 2; u++) {
Spread_2_1();
pt8x25(0, DELAY);
Spread_2_2();
pt8x25(0, DELAY);
Spread_2_3();
pt8x25(0, DELAY);
Spread_2_4();
pt8x25(0, DELAY);
Spread_2_5();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);


for (int u = 0; u < 1; u++) {
Spread_3_1();
pt8x25(0, DELAY);
Spread_3_2();
pt8x25(0, DELAY);
Spread_3_3();
pt8x25(0, DELAY);
Spread_3_4();
pt8x25(0, DELAY);
Spread_3_5();
pt8x25(0, DELAY);
Spread_3_6();
pt8x25(0, DELAY);
Spread_3_7();
pt8x25(0, DELAY);
Spread_3_8();
pt8x25(0, DELAY);
Spread_3_9();
pt8x25(0, DELAY);
Spread_3_10();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);

for (int u = 0; u < 4; u++) {
Spread_4_1();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 10);

for (int u = 0; u < 2; u++) {
Spread_5_1();
pt8x25(0, DELAY);
Spread_5_2();
pt8x25(0, DELAY);
Spread_5_3();
pt8x25(0, DELAY);
Spread_5_4();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);

for (int u = 0; u < 4; u++) {
Spread_6_1();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);

for (int u = 0; u < 4; u++) {
Spread_7_1();
pt8x25(0, DELAY);
Spread_7_2();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);

for (int u = 0; u < 4; u++) {
Spread_8_1();
pt8x25(0, DELAY);
Spread_8_2();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);

for (int u = 0; u < 4; u++) {
Spread_9_1();
pt8x25(0, DELAY);
Spread_9_2();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);

for (int u = 0; u < 5; u++) {
Spread_10_1();
pt8x25(0, DELAY);
}
shiftsteps8x25(0, DELAY, 5);



for (int u = 0; u < 2; u++) {
Wheel_1_1();
pt8x25(3, DELAY);
Wheel_1_2();
pt8x25(3, DELAY);
Wheel_1_3();
pt8x25(3, DELAY);
}
shiftsteps8x25(3, DELAY, 5);

for (int u = 0; u < 1; u++) {
Wheel_2_1();
pt8x25(2, DELAY);
Wheel_2_2();
pt8x25(3, DELAY);
Wheel_2_3();
pt8x25(2, DELAY);
Wheel_2_4();
pt8x25(3, DELAY);
Wheel_2_5();
pt8x25(2, DELAY);
}
shiftsteps8x25(3, DELAY, 10);

for (int u = 0; u < 1; u++) {
Wheel_3_1();
pt8x25(3, DELAY);
Wheel_3_2();
pt8x25(2, DELAY);
Wheel_3_3();
pt8x25(3, DELAY);
Wheel_3_4();
pt8x25(2, DELAY);
Wheel_3_5();
pt8x25(3, DELAY);
}
shiftsteps8x25(2, DELAY, 10);

for (int u = 0; u < 4; u++) {
Wheel_4_1();
pt8x25(2, DELAY);
}
shiftsteps8x25(2, DELAY, 10);

for (int u = 0; u < 4; u++) {
Wheel_5_1();
pt8x25(3, DELAY);
}
shiftsteps8x25(3, DELAY, 10);

for (int u = 0; u < 1; u++) {
Wheel_6_1();
pt8x25(2, DELAY);
Wheel_6_2();
pt8x25(2, DELAY);
Wheel_6_3();
pt8x25(2, DELAY);
Wheel_6_4();
pt8x25(2, DELAY);
Wheel_6_5();
pt8x25(2, DELAY);
}
shiftsteps8x25(2, DELAY, 10);

for (int u = 0; u < 2; u++) {
Wheel_7_1();
pt8x25(2, DELAY);
Wheel_7_2();
pt8x25(2, DELAY);
}
shiftsteps8x25(2, DELAY, 10);

for (int u = 0; u < 4; u++) {
Wheel_8_1();
pt8x25(2, DELAY);
}
shiftsteps8x25(2, DELAY, 10);

for (int u = 0; u < 1; u++) {
Wheel_9_1();
pt8x25(2, DELAY);
Wheel_9_2();
pt8x25(2, DELAY);
Wheel_9_3();
pt8x25(2, DELAY);
Wheel_9_4();
pt8x25(2, DELAY);
Wheel_9_5();
pt8x25(2, DELAY);
}
shiftsteps8x25(2, DELAY, 10);

for (int u = 0; u < 4; u++) {
Wheel_10_1();
pt8x25(3, DELAY);
}
shiftsteps8x25(3, DELAY, 10);


}














void clearmainarray() {
  for (byte z1 = 0; z1 < 5; z1++) {
    for (byte z2 = 0; z2 < 10; z2++) {
      for (byte z3 = 0; z3 < 3; z3++) {
        mainarray[z1][z2][z3] = 0;
      }
    }
  }
}
void cleara8x25() {
  for (byte z1 = 0; z1 < 5; z1++) {
    for (byte z2 = 0; z2 < 10; z2++) {
      for (byte z3 = 0; z3 < 3; z3++) {
        a8x25[z1][z2][z3] = 0;
      }
    }
  }
}

void display() {
  for (byte qq = 0; qq < 10; qq++) {
    if (qq % 2 == 0) {
      for (byte q = 0; q < 5; q++) {
        leds[q + (qq * 5)] = CRGB(mainarray[q][qq][0], mainarray[q][qq][1], mainarray[q][qq][2]);
      }
    }
    else {
      for (byte q = 0; q < 5; q++) {
        leds[q + (qq * 5)] = CRGB(mainarray[4 - q][qq][0], mainarray[4 - q][qq][1], mainarray[4 - q][qq][2]);
      }
    }
  }
  FastLED.show();
}


void up() {
  for (byte i = 0; i < 4; i++) {
    for (byte j = 0; j < 10; j++) {
      mainarray[i][j][0] = mainarray[i + 1][j][0];
      mainarray[i][j][1] = mainarray[i + 1][j][1];
      mainarray[i][j][2] = mainarray[i + 1][j][2];
    }
  }
}
void down() {
  for (byte i = 4; i > 0; i--) {
    for (byte j = 0; j < 10; j++) {
      mainarray[i][j][0] = mainarray[i - 1][j][0];
      mainarray[i][j][1] = mainarray[i - 1][j][1];
      mainarray[i][j][2] = mainarray[i - 1][j][2];
    }
  }
}
void moveleft() {
  for (byte j = 0; j < 9; j++) {
    for (byte i = 0; i < 5; i++) {
      mainarray[i][j][0] = mainarray[i][j + 1][0];
      mainarray[i][j][1] = mainarray[i][j + 1][1];
      mainarray[i][j][2] = mainarray[i][j + 1][2];
    }
  }
}

void moveright() {
  for (byte j = 9; j > 0; j--) {
    for (byte i = 0; i < 5; i++) {
      mainarray[i][j][0] = mainarray[i][j - 1][0];
      mainarray[i][j][1] = mainarray[i][j - 1][1];
      mainarray[i][j][2] = mainarray[i][j - 1][2];
    }
  }
}

void setbottomrow(byte x) {
  for (byte i = 0; i < 10; i++) {
    mainarray[4][i][0] = a8x25[x][i][0];
    mainarray[4][i][1] = a8x25[x][i][1];
    mainarray[4][i][2] = a8x25[x][i][2];
  }
}

void settoprow(byte x) {
  for (byte i = 0; i < 10; i++) {
    mainarray[0][i][0] = a8x25[4 - x][i][0];
    mainarray[0][i][1] = a8x25[4 - x][i][1];
    mainarray[0][i][2] = a8x25[4 - x][i][2];
  }
}

void setleftcolumn(byte x) {
  for (byte i = 0; i < 5; i++) {
    mainarray[i][0][0] = a8x25[i][9 - x][0];
    mainarray[i][0][1] = a8x25[i][9 - x][1];
    mainarray[i][0][2] = a8x25[i][9 - x][2];
  }
}

void setrightcolumn(byte x) {
  for (byte i = 0; i < 5; i++) {
    mainarray[i][9][0] = a8x25[i][x][0];
    mainarray[i][9][1] = a8x25[i][x][1];
    mainarray[i][9][2] = a8x25[i][x][2];
  }
}


void pt8x25(int d, int sp) {
  if (d == 0) {
    for (byte hh = 0; hh < 5; hh++) {
      setbottomrow(hh);
      display();
      delay(sp);
      up();
    }
  }
  if (d == 1) {
    for (byte hh = 0; hh < 5; hh++) {
      settoprow(hh);
      display();
      delay(sp);
      down();
    }
  }
  else if (d == 2) {
    for (byte hh = 0; hh < 10; hh++) {
      setrightcolumn(hh);
      display();
      delay(sp);
      moveleft();
    }
  }
  else if (d == 3) {
    for (byte hh = 0; hh < 10; hh++) {
      setleftcolumn(hh);
      display();
      delay(sp);
      moveright();
    }
  }
}


void shiftsteps8x25(int d, int sp, byte steps) {
  if (d == 0) {
    for (byte i = 0 ; i < 10; i++) {
      mainarray[4][i][0] = 0;
      mainarray[4][i][1] = 0;
      mainarray[4][i][2] = 0;
    }
    for (byte hh = 0; hh < steps; hh++) {
      display();
      delay(sp);
      up();
    }
  }
  if (d == 1) {
    for (byte i = 0 ; i < 10; i++) {
      mainarray[0][i][0] = 0;
      mainarray[0][i][1] = 0;
      mainarray[0][i][2] = 0;
    }
    for (byte hh = 0; hh < steps; hh++) {
      display();
      delay(sp);
      down();
    }
  }
  else if (d == 2) {
    for (byte i = 0; i < 5; i++) {
      mainarray[i][9][0] = 0;
      mainarray[i][9][1] = 0;
      mainarray[i][9][2] = 0;
    }
    for (byte hh = 0; hh < steps; hh++) {
      display();
      delay(sp);
      moveleft();
    }
  }
  else if (d == 3) {
    for (byte i = 0 ; i < 5; i++) {
      mainarray[i][0][0] = 0;
      mainarray[i][0][1] = 0;
      mainarray[i][0][2] = 0;
    }
    for (byte hh = 0; hh < steps; hh++) {
      display();
      delay(sp);
      moveright();
    }
  }
}
