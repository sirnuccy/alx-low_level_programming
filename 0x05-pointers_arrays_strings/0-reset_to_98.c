/**
 * A function that takes a pointer to an int as 
 * parameter and updates the value it points to 98
 */



#include "main.h"
#include <stdio.h>

int main(void) {
	int n;
	int * reset_to_98 = &n;
	*reset_to_98 = 98;

	return (0);
}
