#include <stdio.h>
#include "inf_calc.h"

Num upDown(Num number, int round)
{
	int i;
	Digit integer_part_head, decimal_part_head;

	if (round > 0) {
		for (i = round; i != 0; i--) {
			number.integer_part_size++;
			number.decimal_part_size--;
		}
		if (number.decimal_part_size < 0)
			number.decimal_part_size = 0;
	}

	if (round < 0) {
		for (i = round; i != 0; i++) {
			number.integer_part_size--;
			number.decimal_part_size++;
		}
		if (number.integer_part_size < 0)
			number.integer_part_size = 0;
	}
		
	integer_part_head = number.integer_part;
	decimal_part_head = number.decimal_part;
	for ( ; integer_part_head != NULL; integer_part_head = integer_part_head -> next) {}
	integer_part_head -> next = decimal_part_head;

	integer_part_head = number.integer_part;
	decimal_part_head = number.integer_part -> next;
	for (i = number.integer_part_size; i != 0; i--) {
		integer_part_head = integer_part_head -> next;
		decimal_part_head = decimal_part_head -> next;
	}
	integer_part_head -> next = NULL;
	number.decimal_part = decimal_part_head;

	return number;
}
