#include "mbed.h"

void Led(DigitalOut &ledpin, int times)
{
    for (int i = 0; i < (times * 2); i++) {                     //blink for 10 times
        ledpin = !ledpin; // toggle led
        ThisThread::sleep_for(100ms);
   }
}