#define __DELAY_BACKWARD_COMPATIBLE__
#define F_CPU 16000000UL
#define __OPTIMIZE__

#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PB5

int main(void) {
  // Set PB5 (digital pin 13) as output
  DDRB |= (1 << LED_PIN);

  while (1) {
    // Turn the LED on
    PORTB |= (1 << LED_PIN);
    _delay_ms(50);

    // Turn the LED off
    PORTB &= ~(1 << LED_PIN);
    _delay_ms(50);
  }

  return 0;
}
