#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int move_count = 0;
int n;

void iput() {
	while (true)
	{
		cout << "masukan panjang element array";
		cin >> n;
		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;

	}
	cout << "\n----------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n---------------------" << endl;

	
}