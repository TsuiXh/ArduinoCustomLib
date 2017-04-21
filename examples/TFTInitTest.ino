#include <SPI.h>
#include <TFT.h>

#define cs 10
#define dc 9
#define rst 8

TFT screen = TFT(cs, dc, rst);
//温度
char temp[6];
//湿度
char humidity[6];
//灰尘浓度
char dust[6];
//甲醛浓度
char voc[6];
//dewPoint
//suggestion
char suggest[8];
void setup() {
  screen.begin();
  screen.background(0, 0, 0);
  screen.stroke(255,255,255);
  screen.setTextSize(1);
  screen.text("Temp(oC):",5,15);
  screen.text("Humidity(%):", 5,35);
  screen.text("PM2.5(ug/m3):", 5, 55);
  screen.text("CH4(ppm):", 5, 75);
  screen.text("DewPoint(oC):",5,95);
  screen.text("AirQuality:", 5, 115);
}

void loop() {
  String val = String(26.5);
  val.toCharArray(temp, 6);
  val = String(48.5);
  val.toCharArray(humidity, 6);
  val = String(100);
  val.toCharArray(dust, 6);
  val = String(0.09);
  val.toCharArray(voc, 6);
  val = String("Good");
  val.toCharArray(suggest,8);
  screen.stroke(255, 255, 255);
  screen.setTextSize(2);
  //温度
  screen.text(temp, 65, 10);
  //湿度
  screen.text(humidity, 85, 30);
  //灰尘浓度
  screen.text(dust, 85, 50);
  //甲醛
  screen.text(voc, 65, 70);
  //dew
  screen.text(temp, 85, 90);
  //suggest
  screen.text(suggest, 85, 110);
  delay(5000);
  screen.stroke(0, 0, 0);
  screen.text(temp, 65, 10);
  screen.text(humidity, 85, 40);
  screen.text(dust, 85, 50);
  screen.text(voc, 65, 70);
  screen.text(temp, 85, 90);
  screen.text(suggest, 85, 110);
}
