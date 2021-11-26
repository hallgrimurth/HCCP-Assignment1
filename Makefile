CFLAGS=-Wall -Wextra -pedantic -std=c11

roll: roll.c
	gcc roll.c -o roll $(CFLAGS)

mynameis: mynameis.c
	gcc mynameis.c -o mynameis $(CFLAGS)

repeatme: repeatme.c
	gcc repeatme.c -o repeatme $(CFLAGS)

noAs: noAs.c
	gcc noAs.c -o noAs $(CFLAGS)

test_bits: test_bits.c bits.h
	gcc -o test_bits test_bits.c $(CFLAGS)

test_numbers: test_numbers.c numbers.h
	gcc -o test_numbers test_numbers.c $(CFLAGS)

test: test.c
	gcc test.c -o test $(CFLAGS)
