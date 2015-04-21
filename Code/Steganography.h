#ifndef STEGANOGRAPHY_H
#define STEGANOGRAPHY_H

#include <vector>

using namespace std;

class Steganography
{

public:


	void Encrypter(int argc, char **argv);				//function to encrypt data onto target image
	void Decrypter(int argc, char **argv);				//function to decrypt data from target image


};

#endif