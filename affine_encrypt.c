#include <stdio.h>
#include <string.h>
#include "CipherSolve.h"

void affine_encrypt(void){

	int i, temp, len, a, b;
	char buffer[1024];
	char plaintext[1024];
	char ciphertext[1024];

	printf("What is the plaintext you want to encrypt?\n");
		scanf("%s", buffer);
	printf("What is the value of a?\n");
		scanf("%d", &a);
	printf("What is the value of b?\n");
		scanf("%d", &b);

	strcpy(plaintext, buffer);

	len = strlen(plaintext);
	
	// Encryption formula is y = ax + b
	for(i = 0; i < len; i++){
		
		ciphertext[i] = plaintext[i];
		// Convert ASCII to 0-26
		ciphertext[i] -= 'a';

		temp = (int)ciphertext[i] * a;
		temp += b;
		temp = temp % 26;

		ciphertext[i] = 'a' + temp;

	}

	ciphertext[i] = '\0';

	printf("The encrypted text is: %s\n", ciphertext);
}