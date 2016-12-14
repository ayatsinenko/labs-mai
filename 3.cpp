#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(0,"");
	char ans;do {
		char buff[50];
		ifstream fin("example.txt");
		if (!fin.is_open())
        cout << "Ошибка открытия файла!\n";
    else
    {
		fin >> buff;
		cout << buff << endl;
		fin.getline(buff, 50); 
		fin.close();
		cout << buff << endl;
		 }
		cout << "Повторить? Y / N "; cin >> ans;
	} while (toupper(ans) == 'Y');
    return 0;
}

