// Author Zach Hirst 
// 4/26/18
// One Dimensional Array

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void displayArray(double dollars[], int numElements)
{
	double total = 0;
	cout << fixed << setprecision(2) << endl << endl;
	for (int sub = 0; sub < numElements; sub++)
	{
		cout << " Sales for Reigon " << sub + 1 << ": $";
		cout << dollars[sub] << endl;
		total = total + dollars[sub];
	}
	cout << "Your total is  $" << total << endl;
}

int main()
{
	double sales[4] = { 0.0 };
	double total = 0;
	string userentry;

	do {
		for (int sub = 0; sub < 4; sub++)
		{
			cout << " Enter Sales for Reigon ";
			cout << sub + 1 << ": " << endl;
			cin >> sales[sub];
		}
		displayArray(sales, 4);
		
		cout << " Would you like to total something else? " << endl;
		cin >> userentry;
	} while (userentry != "no");

	system("Pause");
	return 0;
}

