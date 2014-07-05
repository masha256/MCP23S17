// This #include statement was automatically added by the Spark IDE.
#include "MCP23S17.h"

MCP mcpchip(0, D4);    // create an object at address 0, SPI slave select on pin D4

void setup() {
    mcpchip.pinMode(0B0000000000000000);
}

void loop() {

  mcpchip.wordWrite(MCP_GPIOA, 0xFFFF);
  delay(2000);
  mcpchip.wordWrite(MCP_GPIOA, 0x00F0);
  delay(2000);
  mcpchip.wordWrite(MCP_GPIOA, 0x000F);
  delay(2000);
  mcpchip.wordWrite(MCP_GPIOA, 0x00FF);
  delay(2000);
  mcpchip.wordWrite(MCP_GPIOA, 0x0000);
  delay(2000);
  
}
