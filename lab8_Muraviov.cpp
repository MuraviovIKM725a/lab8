
#include <iostream>
using namespace std;
const int n = 15;

int main()

{
	setlocale(LC_CTYPE, "ukr");
	double a[n];
	int i;
		
		bool increasing = true;
		for (i = 0; i < n; i++)
	{
		cout << "Уведіть" << i << "елемент масиву";
		cin >> a[i];
	}
		cout << '\n';
		for (i = 0; i < n; i++)
			cout << a[i] << '\n';
		
		

		for ( i = 0; i < n - 1; i++) {
			if (a[i] >= a[i + 1]) {
				increasing = false;
				break;
			}
		}

		if(increasing)
			cout << "Елементи масиву утворюють зростаючу послідовність." << endl;
		else
			cout << "Елементи масиву НЕ утворюють зростаючу послідовність." << endl;	
		
		return 0;
}
