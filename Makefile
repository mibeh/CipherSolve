CipherSolve : CipherSolve.o affine_decrypt.o \
affine_encrypt.o shift_decrypt.o shift_encrypt.o \
vigenere_decrypt.o vigenere_encrypt.o
			gcc -o CipherSolve CipherSolve.o \
			affine_decrypt.o affine_encrypt.o \
			shift_decrypt.o shift_encrypt.o \
			vigenere_decrypt.o vigenere_encrypt.o
			rm *.o 

CipherSolve.o : CipherSolve.c CipherSolve.h
				gcc -c CipherSolve.c
affine_decrypt.o : affine_decrypt.c CipherSolve.h
				gcc -c affine_decrypt.c
affine_encrypt.o : affine_encrypt.c CipherSolve.h
				gcc -c affine_encrypt.c
shift_decrypt.o : shift_decrypt.c CipherSolve.h
				gcc -c shift_decrypt.c
shift_encrypt.o : shift_encrypt.c CipherSolve.h
				gcc -c shift_encrypt.c
vigenere_decrypt.o : vigenere_decrypt.c CipherSolve.h
				gcc -c vigenere_decrypt.c
vigenere_encrypt.o : vigenere_encrypt.c CipherSolve.h
				gcc -c vigenere_encrypt.c

clean :
		rm CipherSolve
