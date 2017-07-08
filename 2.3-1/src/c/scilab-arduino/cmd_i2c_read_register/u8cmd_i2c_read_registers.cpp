#include "cmd_i2c_read_register.h"
#include "Arduino.h"
#include "Wire.h"

uint16 u8cmd_i2c_read_registers(uint8 address, uint8 reg_adrs)
{
  long int reading;

  Wire.beginTransmission(address); // transmit to device address
  Wire.write(reg_adrs);      // sets register pointer to reg_adrs position
  Wire.endTransmission();      // stop transmitting

  //  request reading from sensor
  Wire.requestFrom(address, 2);    // request 2 bytes from slave device with address

  // receive reading from sensor
  if (2 <= Wire.available())  // if two bytes were received
  {
    reading = Wire.read();  // receive high byte (overwrites previous reading)
    reading = reading << 8;    // shift high byte to be high 8 bits
    reading |= Wire.read(); // receive low byte as lower 8 bits
  }
  
    return(reading);

}
