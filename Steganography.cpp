#include "Steganography.h"
#include "CImg.h"
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;
using namespace cimg_library;


vector<unsigned char> Steganography::Encrypt(const unsigned char &red, const unsigned char &green, const unsigned char &blue, const unsigned char &steg)
{
	//hides data in ASCII form in target image's RGB pixel values
	vector<unsigned char> a;
	return a;
}

unsigned char Steganography::Decrypt(const unsigned char &red, const unsigned char &green, const unsigned char &blue)
{
	//retrieves data in ASCII form from target image's RGB pixel values
	
	return (red);
}

void Steganography::Encrypter(int argc, char **argv)
{
	//Takes the users file inputs, message and target outputs
}

void Steganography::Decrypter(int argc, char **argv)
{
	//Takes the users encrypted file inputs and retrieves message
}