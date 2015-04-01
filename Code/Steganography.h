#ifndef STEGANOGRAPHY_H
#define STEGANOGRAPHY_H

#include <vector>

using namespace std;

class Steganography
{

public:

	vector<unsigned char> Encrypt(const unsigned char &red, const unsigned char &green, const unsigned char &blue, const unsigned char &steg);
	unsigned char Decrypt(const unsigned char &red, const unsigned char &green, const unsigned char &blue);

	void Encrypter(int argc, char **argv);				//function to encrypt data onto target image
	void Decrypter(int argc, char **argv);				//function to decrypt data from target image


};

#endif