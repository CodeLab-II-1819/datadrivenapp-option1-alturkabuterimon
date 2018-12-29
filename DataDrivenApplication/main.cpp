#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int option; 
	int numOfTweets = 0;
	string data;
	ifstream inFile;
	inFile.open("sampleTweets.csv");

	cout << "Welcome to this Data Driven Application." << endl;
	cout << "Please select an option:" << endl;
	cout << "" << endl;
	cout << "1: Count all tweets." << endl;
	cout << "2: Count all tweets containing the word 'Politics.'" << endl;


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

			}
		}
	}

	system("Pause");
	return 0;
}