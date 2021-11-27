#include <stdlib.h>
#include "numbers.h"

int main() {
  assert(bit_to_int(bits8_from_int(2).b0) == 0);
  bits8_print(bits8_from_int(1));
  printf("Expected 00000001\n");
  bits8_print(bits8_from_int(2));
  printf("Expected 00000010\n");
  bits8_print(bits8_from_int(4));
  printf("Expected 00000100\n");
  bits8_print(bits8_from_int(5));
  printf("Expected 00000101\n");
  bits8_print(bits8_from_int(8));
  printf("Expected 00001000\n");
  bits8_print(bits8_from_int(15));
  printf("Expected 00001111\n");
  bits8_print(bits8_from_int(6));
  printf("Expected 00000110\n");
  bits8_print(bits8_from_int(123));
  printf("Expected 01111011\n");

  printf("%i\n",bits8_to_int(bits8_from_int(1)));
  printf("Expected 1\n");
  printf("%i\n",bits8_to_int(bits8_from_int(2)));
  printf("Expected 2\n");
  printf("%i\n",bits8_to_int(bits8_from_int(4)));
  printf("Expected 4\n");
  printf("%i\n",bits8_to_int(bits8_from_int(5)));
  printf("Expected 5\n");
  printf("%i\n",bits8_to_int(bits8_from_int(8)));
  printf("Expected 8\n");
  printf("%i\n",bits8_to_int(bits8_from_int(15)));
  printf("Expected 15\n");
  printf("%i\n",bits8_to_int(bits8_from_int(6)));
  printf("Expected 6\n");
  printf("%i\n",bits8_to_int(bits8_from_int(123)));
  printf("Expected 123\n");

  printf("%i\n",get_bit(5,0));
  printf("%i\n",get_bit(5,2));

  printf("%i\n",set_bit(2,0));
  printf("%i\n",set_bit(2,1));

  bits8_print(bits8_add(bits8_from_int(5), bits8_from_int(2)));
  printf("Expected 00000111\n");
  bits8_print(bits8_add(bits8_from_int(10), bits8_from_int(20)));
  printf("Expected 11110\n");
  bits8_print(bits8_add(bits8_from_int(20), bits8_from_int(10)));
  printf("Expected 11110\n");
  bits8_print(bits8_add(bits8_from_int(99), bits8_from_int(1)));
  printf("Expected 1100100\n");
}
