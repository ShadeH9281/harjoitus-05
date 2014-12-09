//Made by Toni Pajukanta,Ryhmä IIO14S1

#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;

	cout << "Laita kaksi numeroa" << endl;
	cin >> num1 >> ws >> num2;

	if (num1 == num2)
	{
		cout << "BINGO" << endl;
	}
	else
		cout << "BONGO" << endl;

}