/**
* Genuino 101 
* author: @TsuiXh
* email:  smartcyh@hotmail.com
* time: 2017/4/6  8:53
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Temperature:");
  Serial.print(getTemperature(0));
  Serial.println("C");
  delay(1000);
}

double getTemperature(int sensorPin) {
  uint16_t val;
  double temperature;
  val = analogRead(sensorPin);
  temperature = (double)(val * (3.3 / 1024) * 100);
  return temperature;
}

