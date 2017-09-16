/*
 * Name: Nauli Putri Ramadhani
 * NPM : 1506721831
 * Class : OS172
 * Comment : No comment.
 */

#define LOOP 4
#include <stdio.h>

void main() {
	int input = 5;
	int i;
	int the_product = input;

	for(i=1; i<LOOP; i++){
		the_product *= input;
	}
	printf(("%d to the power of %d equals %d\n"),input, LOOP,the_product);
}
