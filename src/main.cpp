// Link da Biblioteca: https://github.com/adafruit/Adafruit_SSD1306
//                     https://github.com/adafruit/Adafruit-GFX-Library
//
//
// Link tutorial base: https://randomnerdtutorials.com/esp32-ssd1306-oled-display-arduino-ide/ 
// Data: 28/04/2023



#include <Arduino.h>

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels


// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  
  Serial2.begin(38400);
  Serial.begin(115200);

  // Inicializa com o I2C addr 0x3C
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 

}

void loop() {

  //Serial2.print("Q\r\n");
  //Serial.println(Serial2.readString());
  //delay(100);

  display.clearDisplay();
  // Texto no display
  display.setTextSize(1); // Fonte do texto
  display.setTextColor(WHITE); // Cor do texto
  display.setCursor(0,28); // Posiciona o cursor
  display.println("Display OLED 2.42"); // Imprime mensagem
  display.display();
  delay(2000);
  display.clearDisplay();

}

