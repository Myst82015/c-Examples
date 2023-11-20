// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream> // std::cout, std::cin 

void xyz()
{
	// DO something
	int x = 5;
}

int addition(int x, int y)
{
	return x + y;
}

int backValue()
{
	return -15;
}
int main()
{
	std::cout << "Programm zur Berechnung der Summe zweier Zahlen\n";
	std::cout << "Bitte gib die erste Zahl ein: \n"; int summand0; std::cin >> summand0;
	std::cout << "Bitte gib die zweite Zahl ein: \n"; int summand1; std::cin >> summand1;
	std::cout << "Salve Caesar\n\n\nErgebnis lautet: " << addition(summand0, summand1) << "\n\n\n\n";
}

