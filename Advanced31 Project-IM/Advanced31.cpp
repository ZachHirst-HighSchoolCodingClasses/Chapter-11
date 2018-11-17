<<<<<<< HEAD
//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <Zach Hirst> on <5/2/18>
=======
//Advanced31.cpp -
//displays a grade based on the total points entered by the user
//Created/revised by <Zach Hirst> on <5/1/18>
>>>>>>> 5ee8c2d4346668d780e7efa76028cdf394f2a87e

#include <iostream>

using namespace std;

int main()
{
<<<<<<< HEAD
	int sub    = 0;
	int points = 0;  
	int grades[5] = { 'F', 'D', 'C', 'B', 'A' };
	int pointsMin[5] = { 0, 650, 750, 850, 950 };
	int pointsMax[5] = { 600, 700, 800, 900, 1000 };
	
	cout << "Enter points earned out of 100 (negative number to stop program): ";
	cin >> points;
	for (int i = 0; i < 6; i++)
	{
		if (points <= pointsMax[i] && points >= pointsMin[i])
		{
			cout << " The grade you recieved is " << grades[i] << endl;
		}
	}
	
	
	

=======
	//declare variables
	int sub = 0;    //keeps track of subscripts
	int points = 0;

	//declare arrays and fill with data
	int minimumPoints[5] = { 0, 60, 70, 80, 90 };
	int maximumPoints[5] = { 59, 69, 79, 89, 100 };
	char grades[5] = { 'F', 'D', 'C', 'B', 'A' };
	//get total points
	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;



>>>>>>> 5ee8c2d4346668d780e7efa76028cdf394f2a87e
	system("pause");
	return 0;
}