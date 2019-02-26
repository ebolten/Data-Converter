
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string user_country;
	int user_choice;

	cout << "Enter the name of a country: \n";
	getline(cin, user_country);


	cout << ". . ." << endl;
	cout << "Converter Toolkit" << endl;
	cout << "-----------------" << endl;
	cout << "1. Temperature Converter" << endl << "2. Distance Converter" << endl;
	cout << "3. Weight Converter" << endl << "4. Quit" << endl;


	cout << "Enter your choice (1-4): \n";
	cin >> user_choice;
	if (user_choice == 1)
	{
	
		int Fahrenheit;
		int TempC;
		cout << "Enter a temperature in Celsius: \n";
		cin >> TempC;
		Fahrenheit = TempC * 1.8 + 32;
		cout << "It is " << Fahrenheit << " degrees in Fahrenheit." << endl;

	}
	else if (user_choice == 2)
	{
	
		double user_distance;
		double miles;
		cout << "Enter a distance in Kilometer (such as 18.54): \n";
		cin >> user_distance;
		if (user_distance >= 0)
		{
			miles = user_distance * 0.6;
			cout << user_distance << " Kilometers is " << miles << " miles." << endl;
		}
		else
		{
			cout << "!!! Cannot convert negative distance !!!" << endl;
		}
	}
	else if (user_choice == 3)
	{
	
		double user_weight;
		double pounds;
		cout << "Enter a weight in Kilogram: \n";
		cin >> user_weight;
		if (user_weight >= 0)
		{
			pounds = user_weight * 2.2;
			cout << user_weight << " Kilograms is " << pounds << " pounds." << endl;
		}
		else
		{
			cout << "!!! Cannot convert negative weight !!!" << endl;
		}
	}
	else if (user_choice == 4)
	{
	
		cout << "Ok! You will now quit the program. . ." << endl;
	}
	else
	{
	
		cout << user_choice << " isn't a number 1-4!" << endl;
	}
	cout << endl << user_country << " sounds like a cool country!" << endl;
	
	system("pause");
	return 0;
}
