// Githubpj1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 
#include <cstdlib>
using namespace std;


int main()
{
	int dice1;
	int dice2;
	int numArray[11];
	int rolls;
	cout << "how many rolls\n";
	cin >> rolls;
	srand(time(0));

	for (int i = 0; i < 11; i++) {
		numArray[i] = 0;
	}

	for (int i = 0;  i < rolls;  i++)
	{
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		int dice3 = dice1 + dice2;

		numArray[dice3 - 2] = numArray[dice3 - 2] + 1;
		//array   0 1 2 3 4 5 6 7 8  9  10 
		//outcome 2 3 4 5 6 7 8 9 10 11 12
	}

	for (int i = 0; i < 11; i++) {
		cout << i + 2 << " has be rolled " << numArray[i] << " times \n";
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
