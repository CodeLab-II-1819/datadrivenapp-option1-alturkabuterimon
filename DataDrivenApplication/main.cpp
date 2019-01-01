#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int option; 
	int offset;
	int numOfTweets = 0;
	string searchTerm;
	string line; //Get the line from the file
	ifstream inFile;
	inFile.open("sampleTweets.csv"); //Open the csv file

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


	cin >> option;

	if (option == 1)
	{
		if (inFile.good()) //If the file is found
		{
			cout << "Reading from file." << endl;
			while (!inFile.eof()) //If before the end of the file
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
					if ((offset = line.find("money", 0)) != string::npos)
						//This line finds the word is on the line and saves that line to the variable line.
					{
						numOfTweets++;
					}
					else if ((offset = line.find("Money", 0)) != string::npos)
						//Else if for case sensitivity. 
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
					if ((offset = line.find("politics", 0)) != string::npos)
					{
						numOfTweets++;
					}
					else if ((offset = line.find("Politics", 0)) != string::npos)
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
					if ((offset = line.find("Paris", 0)) != string::npos)
					{
						numOfTweets++;
						cout << line << endl; //Print the tweet.
					}
					else if ((offset = line.find("paris", 0)) != string::npos)
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
					if ((offset = line.find("DreamWorks", 0)) != string::npos)
					{
						numOfTweets++;
						cout << line << endl;
					}
					else if ((offset = line.find("dreamworks", 0)) != string::npos)
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
					if ((offset = line.find("Uber", 0)) != string::npos)
					{
						numOfTweets++;
						cout << line << endl;
					}
					else if ((offset = line.find("uber", 0)) != string::npos)
					{
						numOfTweets++;
						cout << line << endl;
					}
				}
				cout << "The total number of tweets containing the word 'Uber' is: " << numOfTweets << endl;
			}
		}
	}
	else if (option == 7)
	{
	if (inFile.good())
	{
		cout << "Reading from file." << endl;
		while (!inFile.eof())
		{
			while (getline(inFile, line))
			{
				if ((offset = line.find("Cats", 0)) != string::npos)
				{
					numOfTweets++;
					cout << line << endl;
				}
				else if ((offset = line.find("cats", 0)) != string::npos)
				{
					numOfTweets++;
					cout << line << endl;
				}
			}
			cout << "The total number of tweets containing the word 'Cat' is: " << numOfTweets << endl;
		}
	}
	}


	system("Pause");
	return 0;
}