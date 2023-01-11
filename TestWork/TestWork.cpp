#include <iostream>
#include <string>
#include <ctype.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	
	string StartWord;
	cin >> StartWord;
	string NewWord = StartWord;
	
	for (int i = 0; i < StartWord.length(); i++)
	{
		char symbol;
		symbol = StartWord.at(i);
		symbol = tolower(symbol);
		NewWord[i] = symbol;
	}
	
	string CompareWord = NewWord;

	for (int i = 0; i < NewWord.length(); i++)
	{
		char ch = NewWord[i];
		int count = 0;
		int index = 0;
		for (int j = 0; j < NewWord.length(); j++)
		{
			if (ch == CompareWord[j])
			{
				count++;

				if (count > 1)
				{
					NewWord[j] = ')';
					NewWord[index] = ')';
				}
				else if (count == 1)
				{
					index = j;
					NewWord[j] = '(';
				}
			}
		}
	}
	cout << "Исходная строка: " << StartWord << endl;
	cout << "Конвертируемая строка: " << NewWord <<endl;

	
}

