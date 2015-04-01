#include<iostream>
#include"Steganography.h"

using namespace std;

int main(int argc, char **argv)
{
	Steganography Steg;
	char input;
	do {
		cout << "0. Exit" << endl;
		cout << "1. Encrypt Message" << endl;
		cout << "2. Decrypt Message" << endl;
		cin >> input;

		switch (input)
		{
			case '1':
			{

				Steg.Encrypter(argc, argv);

			};
			case '2':
			{

				Steg.Encrypter(argc, argv);

			};
		}
	} while (input != '0');

	return 0;
}