// array processing
// programmer: alex
// date: oct 19 2016
// purpose: processing array values to find odd numbers

# define prog 2

# if prog == 1

#include <iostream>
#include <ctime>
using namespace std;

int number_of_odds_in_a_range(int[], int size, int lo_idx, int hi_idx);

int main() {

	cout << "COMP130 Mid-Term Test Question 1 \n";

	// for loop populate array size 15 with random numbers between 50 and 100
	int const ARR_SIZE = 15;
	int rand_arr[] = {0};
	int lo_idx = 0, hi_idx = 10;

	cout << "Enter an integer between 0 and 14 for the low index: ";
	cin >> lo_idx;

	cout << "Enter an integer between 0 and 14 for the high index: ";
	cin >> hi_idx;

	// random seed
	srand(time(0));

	for (int i = 0; i < ARR_SIZE; i++)
	{
		rand_arr[i] = 50 + rand() % 50;
	}

	int count = 0;
	// display the array with while loop
	while (count < 15)
	{
		cout << rand_arr[count] << " ";
		if (count == 14)
		{
			cout << endl;
		}
		count++;
	}

	// pass the array to a function 
	// return number of odd numbers found 
	// within range of indices of array
	int result = number_of_odds_in_a_range(rand_arr, ARR_SIZE, lo_idx, hi_idx);

	if (result == -1)
	{
		cout << "Error, indices are problematic." << endl;
	}
	else 
	{
		cout << "The range contains " << result << " odd numbers." << endl;
	}


	return 0;
}

int number_of_odds_in_a_range(int p_arr[], int size, int lo_idx, int hi_idx) {

	if ((lo_idx >= 0) && (hi_idx < 15) && (lo_idx < hi_idx))
	{
		int total_odds_found = 0;

		cout << "Examining these array ints between indices: ";
		for (int i = lo_idx; i < hi_idx; i++)
		{
			cout << p_arr[i] << " ";
		}
		cout << endl;

		for (int i = lo_idx; i < hi_idx; i++)
		{
			if (p_arr[i] % 2 == 1) {
				cout << p_arr[i] << " is odd." << endl;
				total_odds_found++;
			}
		}
		cout << endl;

		return total_odds_found;
	}
	else 
	{
		return -1;
	}
	
}


# elif prog == 2

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {

	cout << "COMP130 Mid-Term Test Question 2 \n";

	// random seed
	srand(time(0));

	cout << "Write Output File: \n";
	ofstream out_file;

	out_file.open("E:\\out_file.txt");

	for (int i = 0; i < 5; i++)
	{
		int randy = 130 + rand() % (235 - 130) + 1;
		cout << randy << " ";
		out_file << randy << " ";
	}

	cout << "\n";
	out_file.close();

	cout << "Read Input File: \n";
	ifstream in_file;

	in_file.open("E:\\out_file.txt");

	int const ARR_SIZE = 5;
	int arr[ARR_SIZE] = {0};

	int counter = 0;
	while (counter < ARR_SIZE)
	{
		in_file >> arr[counter];
		cout << arr[counter] << " ";
		counter++;
	}

	cout << "\n";
	in_file.close();

	return 0;
}








# elif prog == 3

int main() {

	cout << "Binary Search \n";

	int const ARR_SIZE = 10;
	int ord_arr[] = { 8, 13, 21, 38, 41, 43, 54, 69, 72, 84 };

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << ord_arr[i] << " ";
	}

	int middle = ARR_SIZE / 2;


	return 0;
}


# endif


