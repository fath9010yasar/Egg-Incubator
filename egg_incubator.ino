#include "DHT.h"
#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
 DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void loop() {
  
  

  float H = dht.readHumidity();
  float T = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if( isnan(H) ||  isnan(T)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print(F("H"));
  Serial.print(H);
  Serial.print("\t");
  Serial.print(F("H"));
  Serial.print(T);
  Serial.println(F("°C "));
  delay(100);
}
