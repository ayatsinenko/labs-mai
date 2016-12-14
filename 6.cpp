#include <iostream>
using namespace std;
unsigned long int factorial(unsigned long int);
int i = 1;
unsigned long int result;
int main(int argc, char* argv[])
{
	setlocale(0, "");
	char ans;do {
	int n;
	cout << "Введите n!: ";
	cin >> n;
	for (int k = 1; k <= n; k++)
	{
		cout << k << "!" << "=" << factorial(k) << endl;
	}
	cout << "Повторить? Y / N "; cin >> ans;
	} while (toupper(ans) == 'Y');
	return 0;
}
unsigned long int factorial(unsigned long int f)
{
	if (f == 1 || f == 0)
		return 1;
	i++;
	result = f*factorial(f - 1);
	return result;
}