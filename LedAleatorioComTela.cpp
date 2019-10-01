#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
	lcd.begin(16, 2);
	lcd.print("Led ligado!");
    pinMode(8, OUTPUT); // verde
    pinMode(9, OUTPUT); // amarelo
    pinMode(10, OUTPUT); // vermelho
}

int arr[] = {8, 9, 10};

int i, led;

void loop() {
    //setando valor aleatorio entre 0 e 3
    i = (rand()% 3);
    led = arr[i];
  
    // mostrar o led
    if (led == 8) {
        lcd.setCursor(0, 1);
        lcd.print("verd!");
    } else if (led == 9) {
        lcd.setCursor(0, 1);
        lcd.print("amar!");
    } else if (led == 10) {
        lcd.setCursor(0, 1);
        lcd.print("verm!");
    }
  
    //liga o led alocado no array
    digitalWrite(arr[i], HIGH);
    delay(1000); // espera por 1000 milisegundos
    digitalWrite(arr[i], LOW);
    delay(1000); // espera por 1000 milisegundos

    // mostrar o led
    if (led == 8) {
        lcd.setCursor(0, 1);
        lcd.print("verd!");
    } else if (led == 9) {
        lcd.setCursor(0, 1);
        lcd.print("amar!");
    } else if (led == 10) {
        lcd.setCursor(0, 1);
        lcd.print("verm!");
    }
}
 