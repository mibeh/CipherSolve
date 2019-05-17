//	Author - Michael Ibeh
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "CipherSolve.h"

int main(void){

	int choice = 0;

	while(choice != 7){

		printf("\nWhat would you like to do?\n");
		printf("1. Decrypt a shift cipher (Brute Force)\n");
		printf("2. Encrypt a shift cipher\n");
		printf("3. Decrypt a message encrypted with the affine cipher (Brute Force)\n");
		printf("4. Encrypt a message encrypted with the affine cipher\n");
		printf("5. Decrypt a message encrypted with the Vigenere cipher (with key)\n");
		printf("6. Encrypt a message using the Vigenere cipher\n");
		printf("7. Quit\n");
		scanf("%d", &choice);

		switch(choice){

			case 1:
				shift_decrypt();
				break;
			case 2:
				shift_encrypt();
				break;
			case 3:
				affine_decrypt();
				break;
			case 4:
				affine_encrypt();
				break;
			case 5:
				vigenere_decrypt();
				break;
			case 6:
				vigenere_encrypt();
				break;
		}
	}
	return 0;
}