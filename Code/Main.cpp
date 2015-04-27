#include<iostream>
#include<string>
#include"Steganography.h"

using namespace std;

int main(int argc, char **argv)
{
	cout << "Steganography - Fraser Macfarlane & Daniel Brady" << endl;
	cout << "EE273 Group Project 2015" << endl << endl;
	Steganography Steg;
	char input;
	do {
		cout << "0. Exit" << endl;
		cout << "1. Encrypt Message" << endl;
		cout << "2. Decrypt Message" << endl << endl;
		cin >> input;

		switch (input)
		{
		case '1':
		{

			Steg.Encrypter(argc, argv);

		};
		break;
		case '2':
		{

			Steg.Decrypter(argc, argv);

		};
		break;
		}
	} while (input != '0');
	return 0;
}