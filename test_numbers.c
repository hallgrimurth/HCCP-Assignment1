#include <stdlib.h>
#include "numbers.h"

int main() {
  assert(bit_to_int(bits8_from_int(2).b0) == 0);
  printf("\nTesting bits8_from_int function\n");
  printf("1 to binary | result:");
  bits8_print(bits8_from_int(1));
  printf("Expected:00000001\n");
  printf("2 to binary | result:");
  bits8_print(bits8_from_int(2));
  printf("Expected:00000010\n");
  printf("4 to binary | result:");
  bits8_print(bits8_from_int(4));
  printf("Expected:00000100\n");
  printf("5 to binary | result:");
  bits8_print(bits8_from_int(5));
  printf("E5pected:00000101\n");
  printf("8 to binary | result:");
  bits8_print(bits8_from_int(8));
  printf("Expected:00001000\n");
  printf("15 to binary | result:");
  bits8_print(bits8_from_int(15));
  printf("Expected:00001111\n");
  printf("6 to binary | result:");
  bits8_print(bits8_from_int(6));
  printf("Expected:00000110\n");
  printf("123 to binary | result:");
  bits8_print(bits8_from_int(123));
  printf("Expected:01111011\n");

  
  printf("\nTesting bits8_to_int function\n");
  printf("00000001 to int | result:%i\n",bits8_to_int(bits8_from_int(1)));
  printf("Expected:1\n");
  printf("00000010 to int | result:%i\n",bits8_to_int(bits8_from_int(2)));
  printf("Expected:2\n");
  printf("00000100 to int | result:%i\n",bits8_to_int(bits8_from_int(4)));
  printf("Expected:4\n");
  printf("00000101 to int | result:%i\n",bits8_to_int(bits8_from_int(5)));
  printf("Expected:5\n");
  printf("00001000 to int | result:%i\n",bits8_to_int(bits8_from_int(8)));
  printf("Expected:8\n");
  printf("00001111 to int | result:%i\n",bits8_to_int(bits8_from_int(15)));
  printf("Expected:15\n");
  printf("00000110 to int | result:%i\n",bits8_to_int(bits8_from_int(6)));
  printf("Expected:6\n");
  printf("01110011 to int | result:%i\n",bits8_to_int(bits8_from_int(123)));
  printf("Expected:123\n");
  
  printf("\nTesting bits8_add function\n");
  printf("5 + 2 | result:");
  bits8_print(bits8_add(bits8_from_int(5), bits8_from_int(2)));
  printf("Expected:00000111\n");
  printf("-10 + 20 | result:");
  bits8_print(bits8_add(bits8_from_int(-10), bits8_from_int(20)));
  printf("Expected:00001010\n");
  printf("20 + 10 | result:");
  bits8_print(bits8_add(bits8_from_int(20), bits8_from_int(10)));
  printf("Expected:00011110\n");
  printf("35 + 40 | result:");
  bits8_print(bits8_add(bits8_from_int(35), bits8_from_int(40)));
  printf("Expected:01001011\n");

  assert((bits8_to_int(bits8_add(bits8_from_int(10),
	 bits8_from_int ( 50 )))) == (( 10 + 50) & 0xFF));

  printf("\nTesting bits_negate function\n");
  printf("Negating 00110111 | result:");
  bits8_print(bits8_negate(bits8_from_int(55)));
  printf("Expected:11001001\n");
  printf("Negating 11111111 | result:");
  bits8_print(bits8_negate(bits8_from_int(255)));
  printf("Expected:00000001\n");
  printf("Negating 01010101 | result:");
  bits8_print(bits8_negate(bits8_from_int(85)));
  printf("Expected:10101011\n");
  

   
}
