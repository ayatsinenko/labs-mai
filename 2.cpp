#include <iostream>
using namespace std;
const int ARR_SIZE = 5;
int main()
{
	setlocale(0,"");
	char ans;do {
		int i, X[ARR_SIZE];
		cout << "Заполните массив" << endl;
		for (i = 0; i < ARR_SIZE; i++) {
			cout << "Введите значение элемента № " << i + 1 << ": ";
			cin >> X[i];
		}
		int Xmin = -1, min = -1;
		for (i = 0; i < ARR_SIZE; i++) {
			if (X[i] > 0) {
				if (min < 0) {
					Xmin = X[i];
					min = i;
				}
				else {
					if (X[i] < Xmin) {
						Xmin = X[i];
						min = i;
					}
				}
			}
		}

		if (min < 0) {
			cout << "Наименьший положительный элемент отсутствует" << endl;
		}
		else {
			cout << "Наименьший положительный элемент: " << X[min] << endl
				<< "Номер: " << min + 1 << endl;
		}
		cout << "Повторить? Y / N ";
		cin >> ans;
	} while (toupper(ans) == 'Y');
	return 0;
}