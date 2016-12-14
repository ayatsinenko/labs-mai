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
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete [] arr;
    cout << "Повторить? Y / N "; cin >> ans;
	} while (toupper(ans) == 'Y');
    return 0;
}
