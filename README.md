# Temperature-controlled-fan
A temperature controlled fan using an Arduino, created in TinkerCAD. The circuit uses a TMP36 temperature sensor, which is used to determine when a fan is turned on. The fan remains off until the temperature is greater than 20 degrees Celsius, when it will turn a fan on (represented by a motor).

# Component list

- 1	Arduino Uno R3
- 1	PCF8574-based, 32 LCD 16 x 2 (I2C)
- 1	DC Motor
- 1	Temperature Sensor [TMP36]
- 1	nMOS Transistor (MOSFET)
- 1	9V Battery
- 1	220 Ω Resistor (just used to help limit the speed of the motor)

# Circuit diagram

![Circuit view](https://github.com/caffeine98/Temperature-controlled-fan/blob/main/Circuit_view.png)
