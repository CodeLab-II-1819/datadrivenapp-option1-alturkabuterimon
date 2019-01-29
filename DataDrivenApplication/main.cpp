#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> //For toUpper/toLower
using namespace std;



//Functions

//Function to count tweets
int countTweets(int numOfTweets, int offset, string toUpper, string toLower)
{
	ifstream inFile;
	string line;

	inFile.open("sampleTweets.csv");
	if (inFile.good())
	{
		cout << "Reading from file." << endl;
		while (!inFile.eof())
		{
			getline(inFile, line);
			if (((offset = line.find(toLower, 0)) != string::npos) || ((offset = line.find(toUpper, 0)) != string::npos))  //Place a space before and after the word to stop any potential words within words
				//This line finds the word is on the line and saves that line to the variable line, it finds both upper and lowercase values.
			{
				numOfTweets++;
			}
		}
		cout << "The total number of tweets is: " << numOfTweets << endl;
	}
	return numOfTweets;
	inFile.close();
}


//Function to print tweets
void printTweets(int numOfTweets, int offset, string toUpper, string toLower)
{
	ifstream inFile;
	string line;

	inFile.open("sampleTweets.csv");
	if (inFile.good())
	{
		cout << "Reading from file." << endl;
		while (!inFile.eof())
		{
			getline(inFile, line);
			if (((offset = line.find(toLower, 0)) != string::npos) || ((offset = line.find(toUpper, 0)) != string::npos))
			{
				numOfTweets++;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; //makes it look neater 
				cout << line << endl; //Print the tweet

			}
		}
		cout << "The total number of tweets containing the word: " << toUpper << " is: " << numOfTweets << endl; //Print out the number of tweets
	}
	inFile.close();
}

//Function to search by date
void searchByDate(int numOfTweets, int offset, string date)
{
	ifstream inFile;
	string line;

	inFile.open("sampleTweets.csv");
	if (inFile.good())
	{
		cout << "Reading from file." << endl;
		while (!inFile.eof())
		{
			getline(inFile, line);
			if (offset = line.find(date, 0) != string::npos)
			{
				numOfTweets++;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << line << endl;
			}
		}
		cout << "The total number of tweets from " << date << " are: " << numOfTweets << endl;
	}
	inFile.close();
}

//Function to search by user inputted word
void searchByWord(int numOfTweets, int offset, string searchTerm)
{
	ifstream inFile;
	string line;

	inFile.open("sampleTweets.csv");
	if (inFile.good())
	{
		cout << "Reading from file." << endl;
		while (!inFile.eof())
		{
			getline(inFile, line);
			if (offset = line.find(searchTerm, 0) != string::npos)
			{
				numOfTweets++;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << line << endl;
			}
		}
		cout << "The total number of tweets containing the word: " << searchTerm << "is: " << numOfTweets << endl;
	}
	inFile.close();

}


//Function to restart the program
int restartApplication(int restart)
{
	char restartOption;
	cout << "Would you like to restart the program? (Y/N)" << endl;
	cin >> restartOption;

	while (restartOption != 'y' && restartOption != 'Y' && restartOption != 'n' && restartOption != 'N')
	{
		cout << "Invalid input, please try again." << endl;
		cin >> restartOption;
	}

	if (restartOption == 'Y' || restartOption == 'y')
	{
		restart = 0;
		system("CLS");
		return restart;
	}
	else if (restartOption == 'N' || restartOption == 'n')
	{
		restart = 1;
		return restart;
		cout << "The application will now close." << endl;
		exit(0);
	}
}

int main()
{
	int option;
	int offset = 0;
	int numOfTweets = 0;
	int count = 0;

	string searchTerm, date;
	string line; //Get the line from the file

	int restart = 0;

	ifstream inFile;

	do {

		cout << "Welcome to this Data Driven Application." << endl;
		cout << "Please select an option:" << endl;
		cout << "" << endl;
		//Brief requirements
		cout << "1: Count all tweets." << endl;
		cout << "2: Count all tweets containing the word 'Money'" << endl;
		cout << "3: Count all tweets containing the word 'Politics'" << endl;
		cout << "4: Print out all tweets mentioning the word 'Paris'" << endl;
		cout << "5: Print out all tweets mentioning the word 'DreamWorks'" << endl;
		cout << "6: Print out all tweets mentioning the word 'Uber'" << endl;
		//Own queries
		cout << "7: Print out all tweets mentioning the word 'Cats'" << endl;
		cout << "8: Search by date." << endl;
		cout << "9: Search by word." << endl;
		cout << "10: Count all tweets mentioning the word 'Rabbit'" << endl;


		cin >> option;

		while (cin.fail())
		{
			cout << "Your input is invalid, please try again." << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> option;
		}

		//Option 1
		if (option == 1)
		{
			system("CLS");
			countTweets(numOfTweets, offset, "", "");
			cout << endl;
			restartApplication(restart);
		}

		//Option 2
		else if (option == 2)
		{
			system("CLS");
			countTweets(numOfTweets, offset, " Money ", " money ");
			cout << endl;
			restartApplication(restart);

		}

		//Option 3
		else if (option == 3)
		{
			system("CLS");
			countTweets(numOfTweets, offset, " Politics ", " politics ");
			cout << endl;
			restartApplication(restart);
		}

		//Option 4
		else if (option == 4)
		{
			system("CLS");
			printTweets(numOfTweets, offset, " Paris ", " paris ");
			cout << endl;
			restartApplication(restart);
		}

		//Option 5
		else if (option == 5)
		{
			system("CLS");
			printTweets(numOfTweets, offset, " DreamWorks ", " dreamworks ");
			cout << endl;
			restartApplication(restart);
		}

		//Option 6
		else if (option == 6)
		{
			system("CLS");
			printTweets(numOfTweets, offset, " Uber ", " uber ");
			cout << endl;
			restartApplication(restart);
		}

		//Option 7
		else if (option == 7)
		{
			system("CLS");
			printTweets(numOfTweets, offset, " Cat ", " cat ");
			cout << endl;
			restartApplication(restart);
		}

		//Option 8
		else if (option == 8)
		{
			system("CLS");
			cout << "Please enter the date you want to search for (DD/MM/YYYY)" << endl;
			cin >> date;

			//Validation for date length
			while (date.length() > 10 || date.length() < 10)
			{
				cout << "The date is the incorrect length, please try again. (DD/MM/YYYY)" << endl;
				cin >> date;
			}

			//Check if letters are in date string
			for (int i = 0; i < date.length(); i++)
			{
				if (isalpha(date[i]))
				{
					cout << "The date contains a letter, please try inputting it again. (DD/MM/YYYY)" << endl;
					cin >> date;
				}
			}


			searchByDate(numOfTweets, offset, date);
			cout << endl;
			restartApplication(restart);
		}

		//Option 9
		else if (option == 9)
		{
			system("CLS");
			cout << "Please insert the word you want to search." << endl;
			cin >> searchTerm;

			searchByWord(numOfTweets, offset, searchTerm);
			cout << endl;
			restartApplication(restart);
		}

		//Option 10
		else if (option == 10)
		{
			system("CLS");
			printTweets(numOfTweets, offset, " Rabbit ", " rabbit ");
			cout << endl;
			restartApplication(restart);

		}

		//Incorrect input
		else
		{
			cout << "Your input is incorrect, please try again." << endl;
			cin >> option;
		}
	} while (restart == 0);
}

