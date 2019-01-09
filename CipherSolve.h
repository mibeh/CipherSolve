#ifndef __CIPHERSOLVE_H
#define __CIPHERSOLVE_H

// Function Prototypes
void shift_decrypt(void);
void shift_encrypt(void);
void affine_decrypt(void);
void affine_encrypt(void);
void vigenere_decrypt(void);
void vigenere_encrypt(void);
int mod_inverse(int a, int m);

#endif