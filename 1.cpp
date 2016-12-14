#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	char ans;do {
		cout << "Введите натуральное число" << endl;	
		unsigned int x = 0;
		cin >> x;
		cout << ((x & (x - 1)) ? "NO" : "YES") << endl;
	cout << "Повторить? Y / N "; cin >> ans;
} while (toupper(ans) == 'Y');
    return 0;
}

