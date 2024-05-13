#include <iostream>
#include <b15f/b15f.h>


int main() {
  B15F& drv = B15F::getInstance();

  while(true) {
    for (uint16_t voltage = 0; voltage <= 1023; voltage += 20) {
        drv.analogWrite0(voltage);
        drv.delay_ms(1);
    }
  }

}