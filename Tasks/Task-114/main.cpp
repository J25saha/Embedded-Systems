#include "mbed.h"

DigitalOut redLED(PC_2);
DigitalOut yellowLED(PC_3);
DigitalOut greenLED(PC_6);

int main()

{       redLED = 1;
        yellowLED = 1;
        greenLED = 1;
        wait_us(1000000);

        yellowLED = 0;
        greenLED = 0;

    while (true) {
        
        redLED = 1;
        wait_us(2000000);

        redLED =1;
        yellowLED = 1;
        wait_us(2000000);

        redLED = 0;
        yellowLED = 0;
        greenLED = 1;
        wait_us(2000000);

        greenLED = 0;

        int count = 0;
        while (count < 4) {
        yellowLED = 1;
        wait_us(250000);
        yellowLED = 0;
        wait_us(250000);
        count = count + 1;
        }
    }
}

