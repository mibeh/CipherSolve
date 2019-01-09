#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "CipherSolve.h"

void shift_encrypt(void){

	int i,len,shft_amt;
	char buffer[1024];
	char ciphertext[1024];
	char plaintext[1024];
	char curr;

	printf("What is the string you would like to encrypt?\n");
		scanf("%s", buffer);

	printf("How much of a shift would you like?\n");
		scanf("%d", &shft_amt);

	strcpy(plaintext, buffer);

	len = strlen(plaintext);

	printf("Encrypted String:\n");

	for(i = 0; i < len; i++){

		curr = tolower(plaintext[i]);
		curr -= 'a';
		curr += shft_amt;
		curr %= 26;
		curr += 'a';
		ciphertext[i] = curr;
	}

	printf("%s\n", ciphertext);
}