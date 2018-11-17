// Author Zach Hirst 
// 4/26/18
// One Dimensional Array

#include<iostream>
using namespace std;

int main()
{
	int foo[] = { 12, 4, 23, 15, 5677 };
	int n, result = 0;

	for  (n = 0; n < 5; n++)
	{
		result = result + foo[n];
	}
	cout << result << endl;
	system("Pause");
	return 0;
}