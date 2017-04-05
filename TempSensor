/**
* LM35 temperture sensor v2
* @author: @TsuiXh
* email: smartcyh@hotmail.com
* time: 2017/4/5 22:00
*/

double getTemperature(int sensorPin) {
  uint16_t val;
  double temperature;
  val = analogRead(sensorPin);
  temperature = (double)(val * (3.3 / 1024) * 100);
  return temperature;
}
