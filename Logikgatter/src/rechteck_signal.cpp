#include <iostream>
#include <b15f/b15f.h>

int main() {
  B15F& drv = B15F::getInstance();

  std::cout<<"Frequenz: ";
  double frequenz = 0;
  std::cin>>frequenz;
  double time = 1/frequenz *1000;

  drv.analogWrite0(1023);
  while(true) {
    drv.analogWrite1(1023);
    drv.delay_ms(time);
    drv.anlaogWrite1(0);
    drv.delay_ms(time);
  }

}