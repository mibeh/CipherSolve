//	Author - Michael Ibeh
//  License - Apache Version 2.0

#include <string.h>
#include <stdio.h>
#include "CipherSolve.h"


void shift_decrypt(void){
	
	int i, j, len;
	char buffer[1024];
	char ciphertext[1024];
	char plaintext[1024];

	printf("What is the encrypted string?\n");
		scanf("%s", buffer);

	strcpy(ciphertext, buffer);

	len = strlen(ciphertext);

	printf("Possible Decryptions:\n");

	// Try all possible shifts
	for(j = 1; j < 26; j++){
		
		for(i = 0; i < len; i++){
			
			// Fix ASCII values
			if((ciphertext[i] + j) > 122)
				plaintext[i] = (ciphertext[i] + j) - 26;
			else
				plaintext[i] = (ciphertext[i] + j);
		}

		plaintext[i] = '\0';
		printf("Key = %d: %s\n", j, plaintext);

	}

}