// Link da Biblioteca: https://github.com/adafruit/Adafruit_SSD1306
//                     https://github.com/adafruit/Adafruit-GFX-Library
//
// Link do Display:https://pt.aliexpress.com/item/1005003787866468.html?spm=a2g0o.detail.1000014.1.352479e6LqM1gr&gps-id=pcDetailBottomMoreOtherSeller&scm=1007.40000.326746.0&scm_id=1007.40000.326746.0&scm-url=1007.40000.326746.0&pvid=9ffb074f-23da-457f-bd6b-27b8886eebe7&_t=gps-id:pcDetailBottomMoreOtherSeller,scm-url:1007.40000.326746.0,pvid:9ffb074f-23da-457f-bd6b-27b8886eebe7,tpp_buckets:668%232846%238107%2391&pdp_ext_f=%7B%22sku_id%22%3A%22-1%22%2C%22sceneId%22%3A%2230050%22%7D&pdp_npi=3%40dis%21BRL%2186.05%2186.05%21%21%21%21%21%40210312f116783867436561629ec32a%21-1%21rec%21BR%21722523043
// Link do Módulo RFID: https://pt.aliexpress.com/item/1005003955618398.html?spm=a2g0o.detail.1000060.1.221fc446w836OP&gps-id=pcDetailBottomMoreThisSeller&scm=1007.13339.291025.0&scm_id=1007.13339.291025.0&scm-url=1007.13339.291025.0&pvid=e1ad4bec-0e46-47bd-99d5-fde04b89920e&_t=gps-id%3ApcDetailBottomMoreThisSeller%2Cscm-url%3A1007.13339.291025.0%2Cpvid%3Ae1ad4bec-0e46-47bd-99d5-fde04b89920e%2Ctpp_buckets%3A668%232846%238110%231995&pdp_ext_f=%7B%22sku_id%22%3A%2212000027560917942%22%2C%22sceneId%22%3A%223339%22%7D&pdp_npi=2%40dis%21BRL%21267.72%21235.62%21%21%21%21%21%402103222716745633567668575eb345%2112000027560917942%21rec&gatewayAdapt=glo2bra
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

