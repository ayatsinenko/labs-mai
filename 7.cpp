#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	char ans;do {
    int *arr;
    int size;
    cout << "������� ����� ��������� � �������?\n";
    cin >> size;
    if (size <= 0) {
        cerr << "�������� ����������" << endl;
        return 1;
    }
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "�������� [" << i << "] = ";
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "������������ ������� = " << max << endl;
    delete [] arr;
    cout << "���������? Y / N "; cin >> ans;
	} while (toupper(ans) == 'Y');
    return 0;
}
