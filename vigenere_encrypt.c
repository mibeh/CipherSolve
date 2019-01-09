#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "CipherSolve.h"

void vigenere_encrypt(void){

	char buffer[1024], key[1024], plaintext[1024], hold, *cipher;
	int message_len, keylen, i = 0;
		
	// Processing the key
	printf("What is the key?\n");
		scanf("%s", buffer);

	strcpy(key, buffer);
	
	keylen = strlen(key);
	
	// Process Plain Text
	printf("What is the message you would like encrypted?\n");
		scanf("%s", buffer);
	strcpy(plaintext, buffer);
	
	message_len = strlen(plaintext);

	printf("\nCiphertext:\n\n");
	
	for(i = 0;i < message_len; i++)

		plaintext[i] = tolower(plaintext[i]);
		plaintext[i] =  ( ( ( (plaintext[i] - 'a') + (key[i % keylen] - 'a') ) % 26) + 'a');

	for(i = 0; i < message_len; i++){
		
		printf("%c", plaintext[i]);

		if( ((i + 1) % 80) == 0 )
			printf("\n");
	}
	printf("\n");
}