//	Author - Michael Ibeh
//  License - Apache Version 2.0

#include <stdio.h>
#include <string.h>
#include "CipherSolve.h"

int mod_inverse(int a, int m){

	int i;

	a = a % m;

	for(i = 1; i < m; i++)
		if( (a * i) % m == 1)
			return i;
}

void affine_decrypt(void){

	int i, j, k, temp, len, a, b, a_inverse;
	int avals[] = {3,5,7,9,11,15,17,19,21,23,25};
	char buffer[1024];
	char plaintext[1024];
	char ciphertext[1024];

	printf("What is the ciphertext you want to decrypt?\n");
		scanf("%s", buffer);

	strcpy(ciphertext, buffer);

	len = strlen(ciphertext);

	printf("Possible Decryptions: \n");

	// Loops for each of the possible values coprime with 26
	for(i = 0; i < 11; i++){

		for(j = 0; j < 26; j++){

			a = avals[i];
			a_inverse = mod_inverse(a, 26);
			b = j;

			for(k = 0; k < len; k++){
				
				// Create a new string for manipulation
				plaintext[k] = ciphertext[k];
				// Convert ASCII values to 0-25
				plaintext[k] -= 'a';
				// Perform encryption algorithm in reverse
				temp = (int)plaintext[k];
				temp -= b;
				temp *= a_inverse;
					
				while(temp < 0){
					temp += 26;
				}
							
				temp = temp % 26;

				plaintext[k] = 'a' + temp;
			}
			
			// Clean up output
			plaintext[k] = '\0';
			printf("Keys a = %d b = %d  \tMessage:  %s\n", a, b, plaintext);

		}
	}
}