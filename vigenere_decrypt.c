#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "CipherSolve.h"

void vigenere_decrypt(void){

	char buffer[1024], key[1024], plaintext[1024],ciphertext[1024];
	int message_len, keylen, i, j;

	printf("What is the key?\n");
		scanf("%s", buffer);
	strcpy(key, buffer);
	
	keylen = strlen(key);
	for(i = 0; i < keylen; i++){
		key[i] = tolower(key[i]);
		key[i] -= 'a';
	}

	printf("What is the message you would like decrypted?\n");
		scanf("%s", buffer);
	strcpy(ciphertext, buffer);

	message_len = strlen(ciphertext);

	for(i = 0, j = 0; i < message_len; i++, j++){

		j %= keylen;

		plaintext[i] = tolower(ciphertext[i]);
		plaintext[i] -= 'a';
		plaintext[i] -= key[j];
		if(plaintext[i] < 0)
			plaintext[i] += 26;
		plaintext[i] %= 26;
		plaintext[i] += 'a';

	}
	plaintext[i] = '\0';

	printf("The decrypted string is: %s\n", plaintext);
}