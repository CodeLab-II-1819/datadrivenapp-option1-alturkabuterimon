#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int option; 
	int offset;
	int numOfTweets = 0;
	string data, searchTerm;
	string option2Word = "Money";
	string option3Word = "Politics";
	string option4Word = "Paris";
	string option5Word = "DreamWorks";
	string option6Word = "Uber";
	string line; //Get the line from the file
	ifstream inFile;
	inFile.open("sampleTweets.csv");

	cout << "Welcome to this Data Driven Application." << endl;
	cout << "Please select an option:" << endl;
	cout << "" << endl;
	cout << "1: Count all tweets." << endl;
	cout << "2: Count all tweets containing the word 'Money'" << endl;
	cout << "3: Count all tweets containing the word 'Politics'" << endl;
	cout << "4: Print out all tweets mentioning the word 'Paris'" << endl;
	cout << "5: Print out all tweets mentioning the word 'DreamWorks'" << endl;
	cout << "6: Print out all tweets mentioning the word 'Uber'" << endl;


	cin >> option;

	if (option == 1)
	{
		if (inFile.good())
		{
			cout << "Reading from file." << endl;
			while (!inFile.eof())
			{
				numOfTweets++;
			}
			cout << "The total number of tweets is: " << numOfTweets << endl;
		}
	}
	else if (option == 2)
	{
		if (inFile.good())
		{
			cout << "Reading from file." << endl;
			while (!inFile.eof())
			{
				while (getline(inFile, line))
				{
					if ((offset = line.find(option2Word, 0)) != string::npos)
					{
						numOfTweets++;
					}
					
				}
				cout << "The total number of tweets containing the word 'Money' is: " << numOfTweets << endl;
			}
		}
	}
	else if (option == 3)
	{
		if (inFile.good())
		{
			cout << "Reading from file." << endl;
			while (!inFile.eof())
			{
				while (getline(inFile, line))
				{
					if ((offset = line.find(option3Word, 0)) != string::npos)
					{
						numOfTweets++;
					}
				}
				cout << "The total number of tweets containing the word 'Politics' is: " << numOfTweets << endl;
			}
		}
	}
	else if (option == 4)
	{
		if (inFile.good())
		{
			cout << "Reading from file." << endl;
			while (!inFile.eof())
			{
				while (getline(inFile, line))
				{
					if ((offset = line.find(option4Word, 0)) != string::npos)
					{
						numOfTweets++;
						cout << line << endl;
					}
				}
				cout << "The total number of tweets containing the word 'Paris' is: " << numOfTweets << endl;
			}
		}
	}
	else if (option == 5)
	{
		if (inFile.good())
		{
			cout << "Reading from file." << endl;
			while (!inFile.eof())
			{
				while (getline(inFile, line))
				{
					if ((offset = line.find(option5Word, 0)) != string::npos)
					{
						numOfTweets++;
						cout << line << endl;
					}
				}
				cout << "The total number of tweets containing the word 'DreamWorks' is: " << numOfTweets << endl;
			}
		}
	}
	else if (option == 6)
	{
		if (inFile.good())
		{
			cout << "Reading from file." << endl;
			while (!inFile.eof())
			{
				while (getline(inFile, line))
				{
					if ((offset = line.find(option6Word, 0)) != string::npos)
					{
						numOfTweets++;
						cout << line << endl;
					}
				}
				cout << "The total number of tweets containing the word 'Uber' is: " << numOfTweets << endl;
			}
		}
	}

	system("Pause");
	return 0;
}