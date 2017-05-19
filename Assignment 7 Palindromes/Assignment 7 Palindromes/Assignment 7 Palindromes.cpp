//Reis Mahnic
//Assignment 7 Palindromes
//This program will check to see if a string is a palindrome

#include <iostream>
#include <string>
#include <locale>
#include <cctype>
using namespace std;

bool palindromeCheck(string inputString);

int main()
{
	//define variables
	string inputString;
	//ask for user input
	cout << "Please enter a possible palindrome: ";
	//receive input
	getline(cin, inputString);
	//output results
	if (palindromeCheck(inputString) == 1)
	{
		cout << "This was a palindrome!" << endl;
	}
	else
	{
		cout << "This was not a palindrome!" << endl;
	}
	//exit program
	getchar();
	getchar();
	return 0;
}

bool palindromeCheck(string inputString)
{
	//declare variable
	bool isPalindrome = false;
	string lowerCaseString = "";
	//filter characters
	for (int i = 0; i < inputString.length(); i++)
	{
		if (isalpha(inputString[i]))
		{
			//make all capitols lowercase
			lowerCaseString = lowerCaseString + (char)tolower(inputString[i]);
		}
	}

	//declare limits of the index
	int maxIndex = lowerCaseString.length() - 1;
	//check to see if characters are odd
	if (lowerCaseString.length() % 2 != 0)
	{
		//the number of characters is odd
		for (int i = 0; i < (lowerCaseString.length() - 1) / 2; i++)
		{
			if (lowerCaseString[maxIndex - i] != lowerCaseString[i])
			{	
				return false;
			}		
		}
	}
	else
		//check to see if characters are even
	{
		//the number of characters is even
		for (int i = 0; i < lowerCaseString.length() / 2; i++)
		{
			if (lowerCaseString[maxIndex - i] != lowerCaseString[i])
			{
				return false;
			}
		}
	}
	return true;
}