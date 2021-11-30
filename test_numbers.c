#include <stdlib.h>
#include "numbers.h"

void test_bits8_add(unsigned int x, unsigned int y){
  struct bits8 got = bits8_add(bits8_from_int(x), bits8_from_int(y));
  struct bits8 expected = bits8_from_int(x + y);
  if (bits8_to_int(got) != bits8_to_int(expected)) {
    printf("Input:     %u & %u\n", x, y);
    printf("Got:       ");
    bits8_print(got);
    printf("Expected:  ");
    bits8_print(expected);
    exit(1);
  } 
}

void test_bits8_negate(unsigned int x){
  struct bits8 got = bits8_negate(bits8_from_int(x));
  struct bits8 expected = bits8_from_int(~x + 1);
  if (bits8_to_int(got) != bits8_to_int(expected)) {
    printf("Input:     %u\n", x);
    printf("Got:       ");
    bits8_print(got);
    printf("Expected:  ");
    bits8_print(expected);
    exit(1);
  } 
}

void test_bits8_mul(unsigned int x, unsigned int y){
  struct bits8 got = bits8_mul(bits8_from_int(x), bits8_from_int(y));
  struct bits8 expected = bits8_from_int(x * y);
  if (bits8_to_int(got) != bits8_to_int(expected)) {
    printf("Input:     %u & %u\n", x, y);
    printf("Got:       ");
    bits8_print(got);
    printf("Expected:  ");
    bits8_print(expected);
    exit(1);
  } 
}

int main() {
  assert(bit_to_int(bits8_from_int(2).b0) == 0);
  assert((bits8_to_int(bits8_add(bits8_from_int(10),
	 bits8_from_int ( 50 )))) == (( 10 + 50) & 0xFF));
  
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

  printf("\nTesting bits8_to_int function\n");
  printf("00000001 to int | result:%i\n",bits8_to_int(bits8_from_int(1)));
  printf("Expected:1\n");
  printf("00000010 to int | result:%i\n",bits8_to_int(bits8_from_int(2)));
  printf("Expected:2\n");
  printf("00000100 to int | result:%i\n",bits8_to_int(bits8_from_int(4)));
  printf("Expected:4\n");

  
  printf("\nTesting bits8_add function\n");
  
  test_bits8_add(5, 2);
  test_bits8_add(-10, 20);
  test_bits8_add(20, 10);
  test_bits8_add(35, 40);
  

  printf("\nTesting bits_negate function\n");
 
  test_bits8_negate(55);
  test_bits8_negate(255);
  test_bits8_negate(1);
  test_bits8_negate(85);
  test_bits8_negate(3);
  
  
  printf("\nTesting bits8_mul function\n");
  
  test_bits8_mul(5,11);
  test_bits8_mul(10,11);
  test_bits8_mul(20,5);
  test_bits8_mul(5,25);
	      
}
