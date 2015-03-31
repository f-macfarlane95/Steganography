#include <Windows.h>
#include "CImg.h"
#include "Steganography.h"
#include <iostream>
#include <String>

using namespace cimg_library;
using namespace std;

int main()
{
	
	string Message;
	string in;
	string out;

	char input;
    do {
        cout << "0. Exit" << endl;
        cout << "1. Open/Load an Image" << endl; // goes to input2
        cin >> input;

	


        
        switch (input)
        {
		case '1':
				{
				//Code to Enter FIle Location//
				char input2;
				do {
					cout << "0. Exit" << endl;
					cout << "1. Enter Your Message" << endl; // goes to input3
					cout << "2. Recieve A Message" << endl; //goes to input4
					cin >> input2;
					switch (input2)
						
					case '1':
						{
							//Code to Enter Message//
							char input3;
							do {
							 cout << "0. Exit" << endl;
							cout << "1. Enter Message" << endl;
							cout << "2. Choose Level of Security" << endl;
							cout << "3. Save Image" <<endl;
							cin >> input3;
							switch (input3)



							case '1':
								{
							
								}
								break;

							case '2':
								{
								
								}
								break;

							case '3':
								{
								
								}
								break;

							}while(input3!='0');
						}
					break;
					case '2':
						{
							//Code to Recieve a message//
							char input4;
							do {
							cout << "0. Exit" << endl;
							cout << "1. Display Message" << endl; 
							cin >> input4;
							switch(input4)


							case '1':
							{
								//code to Pull message from image
							}break;



							}while(input4!='0');
						}
						break;


				}while(input2!='0');
				
				
				}
				break;
        
    } while(input!='0');








}while(input!='0');
return 0;
}
