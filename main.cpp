//--------------------------------------------------
//AppName: FizzBuzz
//Creator: Damian de Ugarte
//Date Creation: 05/28/18
//--------------------------------------------------

//FOR GAME USE STRINGS!!

#include <iostream>
using namespace std;

void displayMenu();

int main()
{
	int count = 1, choice = 0;
	int start = 1, stop = 100;
	int points = 0;
	char correct = 'a';
	char userChoice;
	int numcorrect = 0;
	int numuserChoice;

	do 		//while choice =! 9
	{
		count = 1;	//reset
		choice = 0;
		start = 1;
		stop = 100;
		points = 0;
		
		cout << "Please choose an course of action. " << endl;
		displayMenu();
		cin >> choice;

		while (choice =! 1 && choice =! 2 && choice =! 9)
		{
			cout << "Invalid Choice. Please try again. " << endl;
			displayMenu();
			cin >> choice;
		}

		cout << "Please choose a place to start. This must be numeric and positive. " << endl;
		cin >> start;
		while (start < 0)
		{
			cout << "Invalid Choice. Please try again. " << endl;
			cin >> start;
		}

		cout << "Please choose a place to stop. This must be numeric, positive, and greater than your start value. " << endl;
		cin >> stop;
		while (stop < 0 || start <= stop)
		{
			cout << "Invalid Choice. Please try again. " << endl;
			cin >> stop;
		}
			
		if (choice == 1)
		{
			for(count = start; count <= stop; count++) 
			{
				if (count%3 == 0 && count%5 == 0)
					cout << "fizzbuzz" << endl;
				else if (count%3 == 0)
					cout << "fizz" << endl;
				else if (count%5 == 0)
					cout << "buzz" << endl;
				else
					cout << count << endl;
			}
		}
		else if (choice == 2)
		{
			cout << "Type f for fizz, b for buzz, z for fizzbuzz, and n to input the number. Please use lowercase or you will lose... " << endl;

			points = 0;
			do 		//while (count >= start && count < stop && Points < 0)
			{
				count = start;
				if (count%3 == 0 && count%5 == 0)	//-----------
					correct =  'z';
				else if (count%3 == 0)
					correct = 'f';
				else if (count%5 == 0)			//Finds correct choices
					correct = 'b';
				else
				{
					numcorrect = count;
					correct = 'n';
				}					//------------
				
				cout << "What is the next input? (f/b/z/n)" << endl;
				cin >> userChoice;

				if (correct == 'n' && userChoice == 'n')
				{
					cout << "What is the number? " << endl;
					cin >> numuserChoice;
					if (numuserChoice == numcorrect)
						points++;
					else
					{
						cout << "You got " << points << " points. " << endl;
						points = -10;
					}
				}
				else if (correct == userChoice)
				{
					points++;
					cout << "The number was " << count << ". You have " << points << " points. " << endl;
				}
				else
				{
					cout << "You got " << points << " points. " << endl;
					points = -10;
				}

				count++;
			} while (count >= start && count < stop && points < 0)
			

		}
		else if (choice == 9)
			cout << "Bye!" << endl;
		else 
			cout << "You should not have come here... Please report a bug..." << endl;
		
	} while (choice =! 9)
	return 0;
}

//--------------------------------------------------
//Displays the Menu to choose to play or view a list
//--------------------------------------------------

void displayMenu()
{
	cout << "1)View the list from specified points. " << endl;
	cout << "2)Play a game of fizzbuzz. " << endl;
	cout << "9)Quit. " << endl;
}
