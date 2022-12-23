/**
 * It's checking if there's a number in the file.
 *
 * @return The sum, all, and average of the numbers in the file.
 */
#include <iostream>
#include <fstream>
#include<iomanip>


using namespace std;

double sum, all, avg, num;

int main()
{
	ifstream list;
	list.open("random.txt");
	
// Check if the file is open
	if (list.good())
	{
// It's checking if there's a number in the file. 
		while (list >> num)
		{
			sum = sum + num;
			all++;
// Inform the user the end of the file has been reached
			if (list.eof())
			{
				cout << "Congratulations the file has been processed! \n" << endl;
			}
		}
// Get average outside of while loop to avoid reiteration of the calculation
		avg = sum / all;
	}
	
	else
	{
// If the file is not open display error
		cout << "Please open the file first." << endl;
	}
	
// Prints math results
	cout << "The total amount of numbers is: "<< all << endl;
	cout << "The total sum of the numbers is: " << sum << endl;
	cout << "The average of the numbers is: " << avg << endl;

	list.close();

	return 0;
}

