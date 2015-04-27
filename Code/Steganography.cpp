#include "Steganography.h"
#include "CImg.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>

using namespace std;
using namespace cimg_library;
Steganography Steg;



void Steganography::Encrypter(int argc, char **argv)
{
	//Takes the users image file inputs 
	//takes the users message, taking the text inputs ascii values
	//This is then implanted onto a chosen image file's RGB values using the "Encrypt Function"
	//and a target output is chosen as a destination to save the file to.
	cout << "Encrypter Link Works" << endl << endl;

	char inputImg[100], outputImg[100];
	string Message_Buffer, Message_str;
	string password;
	int str_len;
	

	cout << "Enter the name of the file you wish to open in .bmp format (StarWars.bmp): \n";
	cin >> inputImg;
	cout << endl;
	
	cout << "Enter the message to be hidden within this Image: \n";
	cout << endl;
	cin.ignore();
	
	getline(cin, Message_Buffer);
	cout << "Message is: "<< Message_Buffer << endl;
	str_len = Message_Buffer.length();
	cout << "Length is: " << str_len << endl;
	
	cout << endl;

	Message_str = Message_Buffer;
	
	
	cout << "Enter the filename you wish to save this altered image as: " << endl;
	cin >> outputImg;
	cout << endl;
	cout << "Enter a password for security: (No Spaces)" << endl;
	cin >> password;
	cout << endl;

	const char *file_i1 = cimg_option("-i1", inputImg, "Input Image ");
	const char *file_o = cimg_option("-o", outputImg, "Encrypted Output Image");
	const bool open = cimg_option("-visu", true, "Visualization mode");

	cimg_library::CImg<unsigned char> img1(file_i1);
	cimg_library::CImg<unsigned char> dest(img1);

	int n = password.length(), RightPass = 1;
	dest(0, 0, 0) = (unsigned char)n; 

	// Password is stored in first line of Image

	for (int x = 1, y = 0; x <= n; x++)
	{
		dest(x, y, 0) = password[x - 1];
	}


	int m = Message_str.length();
	dest(0, 1, 0) = (unsigned char)m;

	for (int x = 1, y = 1; x <= m; x++)
	{
		dest(x, y, 0) = Message_str[x - 1];
	}

	if (file_o) dest.save(file_o);
	if (open) dest.display("Encrypted Image");
	cout << endl << endl;
}

void Steganography::Decrypter(int argc, char **argv)
{
	//Takes the users encrypted file inputs and retrieves message
	cout << "Decrypter Link Works" << endl;

	char inputImg[100];
	string password;

	cout << "Enter the name of the file you wish to open in .bmp format (StarWarsE.bmp): " << endl;
	cin >> inputImg;
	cout << endl;
	cout << "Enter the password: " << endl;
	cin >> password;
	cout << endl;

	vector<unsigned char> temp;
	const char *file_i1 = cimg_option("-i1", inputImg, "Source Image ");
	cimg_library::CImg<unsigned char> img1(file_i1);

	int n, m, ctr = 1, RightPass = 1;
	n = img1(0, 0, 0);		//n stores the correct password's length.
	m = img1(0, 1, 0);		// m stores the length of the message

	//we first ensure that lengths of correct and input passwords are equal.
	if (n != password.length()){
		cout << "Error: wrong password \n";
		return;
	}
	//Password Letter check before decryption.
		while (ctr <= password.length()){
		if (img1(ctr, 0, 0) != password[ctr - 1]){
			cout << "Error: wrong password \n";
			return;
		}
		ctr++;
	}
		cimg_library::CImg<unsigned char> dest(img1);
		for (int x = 1, y = 2; x <= m; x++)
		{
			int ascii_pixels;
			ascii_pixels = img1(x, 1, 0); // We find the decimal value at a given pixel
			char Ascii = static_cast<char>(ascii_pixels); // convert this to an ascii character
			cout << Ascii ; // display ASCII
		}
		cout << endl << endl << endl;
	}	
	
	