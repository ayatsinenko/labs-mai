#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	char ans;do {
    int *arr;
    int size;
    cout << "Сколько будет элементов в массиве?\n";
    cin >> size;
    if (size <= 0) {
        cerr << "Неверное количество" << endl;
        return 1;
    }
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Значение [" << i << "] = ";
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Максимальный элемент = " << max << endl;
    delete [] arr;
    cout << "Повторить? Y / N "; cin >> ans;
	} while (toupper(ans) == 'Y');
    return 0;
}
