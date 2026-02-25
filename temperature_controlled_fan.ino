// Temperature controlled fan
//

#define SENSOR_PIN A0
#define FAN_PIN 5

#include <inttypes.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(32, 16, 2);

uint32_t v_in;	// Read value from Arduino pin
double temperature;	// Temperature in degrees

void setup()
{
  Serial.begin(9600);
  
  lcd.init();
  lcd.backlight();
}

void loop()
{
  lcd.clear(); 
  v_in = analogRead(SENSOR_PIN);
  
  temperature = (v_in * 100) / 1023; // Temperature in Celsius
  
  lcd.setCursor(0,0);
  String line1 = "Temp = " + String(temperature) + " C";
  lcd.print(line1);
  
  lcd.setCursor(0,1);
  if (temperature > 20) {
    analogWrite(FAN_PIN, (temperature + 10)); // Duty cycle varies by change in temperature
  	lcd.print("Fan: On");
  }
  else {
    analogWrite(FAN_PIN, 0);
    lcd.print("Fan : Off");
  }
  
  delay(500);
}