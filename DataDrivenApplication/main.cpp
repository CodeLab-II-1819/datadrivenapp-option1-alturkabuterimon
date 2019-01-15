#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> //For toUpper/toLower
using namespace std;



//Functions

//Function to count tweets
int countTweets(ifstream &inFile, int numOfTweets, int offset, string toUpper, string toLower, string line)
{
	inFile.open("sampleTweets.csv");
	if (inFile.good())
	{
		cout << "Reading from file." << endl;
		while (!inFile.eof())
		{
			while (getline(inFile, line))
			{
				if (((offset = line.find(" " + toLower + " ", 0)) != string::npos) || ((offset = line.find(" " + toUpper + " ", 0)) != string::npos))  //Place a space before and after the word to stop any potential words within words
					//This line finds the word is on the line and saves that line to the variable line, it finds both upper and lowercase values.
				{
					numOfTweets++;
				}
				
			}
		}
	}
	return numOfTweets;
	inFile.close();
}

//Function to print tweets
void printTweets(ifstream &inFile, int numOfTweets, int offset, string toUpper, string toLower, string line)
{
	inFile.open("sampleTweets.csv");
	if (inFile.good())
	{
		cout << "Reading from file." << endl;
		while (!inFile.eof())
		{
			while (getline(inFile, line))
			{
				if (((offset = line.find(" " + toLower + " ", 0)) != string::npos) || ((offset = line.find(" " + toUpper + " ", 0)) != string::npos))  
				{
					numOfTweets++;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; //makes it look neater 
					cout << line << endl; //Print the tweet

				}
				
			}
			cout << "The total number of tweets containing the word 'Paris' is: " << numOfTweets << endl; //Print out the number of tweets
		}
	}
	inFile.close();
}

//Function to search by date
void searchByDate(ifstream &inFile, int numOfTweets, int offset, string date, string line)
{
	inFile.open("sampleTweets.csv");
	if (inFile.good())
	{
		cout << "Reading from file." << endl;
		while (!inFile.eof())
		{
			while (getline(inFile, line))
			{
				if (offset = line.find(date, 0) != string::npos)
				{
					numOfTweets++;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << line << endl;
				}
			}
			cout << "The total number of tweets from " << date << " are: " << numOfTweets << endl;
		}
	}
	inFile.close();
}

int main()
{
	int option;
	int offset = 0;
	int numOfTweets = 0;

	char restartOption;

	string searchTerm, date;
	string line; //Get the line from the file

	bool restart = false;

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
		cout << "10: Count all tweets mentionng the word 'Rabbit'" << endl;


		cin >> option;

		//Option 1
		if (option == 1)
		{
			if (inFile.good()) //If the file is found
			{
				cout << "Reading from file." << endl;
				while (!inFile.eof()) //If before the end of the file
				{
					numOfTweets++;
				}
				numOfTweets--;
				cout << "The total number of tweets is: " << numOfTweets << endl;
				system("Pause");
				cout << endl;
				cout << "Would you like to restart the program? (Y/N)" << endl;
				cin >> restartOption;

			}
		}

		//Option 2
		else if (option == 2)
		{
			cout << "The total number of tweets containing the word 'Money' is: " << countTweets(inFile, numOfTweets, offset, "Money", "money", line) << endl;
			system("Pause");

		}

		//Option 3
		else if (option == 3)
		{
			cout << "The total number of tweets containing the word 'Politics' is: " << countTweets(inFile, numOfTweets, offset, " Politics ", " politics ", line) << endl;
			system("Pause");
		}

		//Option 4
		else if (option == 4)
		{
			printTweets(inFile, numOfTweets, offset, " Paris ", " paris ", line);
			system("Pause");
		}

		//Option 5
		else if (option == 5)
		{
			printTweets(inFile, numOfTweets, offset, " Dreamworks ", " dreamworks ", line);
			system("Pause");
		}

		//Option 6
		else if (option == 6)
		{
			printTweets(inFile, numOfTweets, offset, " Uber ", " uber ", line);
			system("Pause");
		}

		//Option 7
		else if (option == 7)
		{
			printTweets(inFile, numOfTweets, offset, " Cat ", " cat ", line);
			system("Pause");
		}

		//Option 8
		else if (option == 8)
		{
			cout << "Please enter the date you want to search for (DD/MM/YYYY)" << endl;
			cin >> date;
			searchByDate(inFile, numOfTweets, offset, date, line);
			system("Pause");

		}
		else if (option == 9)
		{
			if (inFile.good())
			{
				cout << "Please insert the word you want to search." << endl;
				cin >> searchTerm;
				transform(searchTerm.begin(), searchTerm.end(), searchTerm.begin(), ::tolower); //Converts the inputted string to lowercase 
				cout << "Reading from file." << endl;
				while (getline(inFile, line))
				{
					if ((offset = line.find(searchTerm, 0)) != string::npos)
					{
						numOfTweets++;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						cout << line << endl;
					}
				}
				cout << "The total number of tweets containing " << searchTerm << " is: " << numOfTweets << endl;
				system("Pause");
			}
		}
		else if (option == 10)
		{
			printTweets(inFile, numOfTweets, offset, " Rabbit ", " rabbit ", line);
			system("Pause");

		}
	}
}while (restart = true)