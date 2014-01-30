// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;


int main()
{
	const int length = 128;

	char choice;

	bool disSaticefied = true;

	char Message[length];

	cout << "Enter A 128 Character Message: ";
	cin >> Message;
	cout << "Your Message Is: " << Message << "\n";
	

	cout << "Choose a cypher: \n 1. Ceasar Cypher \n 2. Vernumn Cypher \n 3. Columnar Transposition \n \n CHOOSE: ";
	
	while (disSaticefied){

	cin >> choice;
		switch (choice)
		{
		case '1':
			disSaticefied = false;
			//new method
			break;
		case '2':
			disSaticefied = false;
			//new method
			break;
		case '3':
			disSaticefied = false;
			//new method
		default:
			cout << "\n Try Again. \n";
		}
	}

	system("pause");

}

void ceasar(/*char* message*/) {
	extern char Message;
	cout << "Ok, Set your key: ";
	char key;
	cin >> key;
	for (int n = 0; n < sizeof(Message); n++) {
		Message(n) = Message[n]+
	}

}