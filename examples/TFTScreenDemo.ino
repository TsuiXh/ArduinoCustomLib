/*
  Genuino 101 with TFT screen
  author: TsuiXh
  time: 2017/4/12 19:12
*/

#include <SPI.h>
#include <TFT.h>
 
#define cs 10
#define dc 9
#define rst 8
/*
  MOSI -- pin11
  SCLK -- pin13
  As default, you can change it to any other pins, in 
  that case, you need use another constructor with 5 parameters
  and define MOSI pin and SCLK pin.
*/

//create an instance of the library
TFT TFTscreen = TFT(cs, dc, rst);

void setup() {
  //init the tft screen
  TFTscreen.begin();

  //clear the screen with a black background 
  TFTscreen.background(0, 0, 0);

  //let's write HelloWorld
  TFTscreen.stroke(255, 255, 255);
  TFTscreen.setTextSize(2);
  TFTscreen.text("Hello,\n Arduino :D",40,20);
}

void loop() {
  //do nothing here
}
