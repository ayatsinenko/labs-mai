#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;
int main ()
{
	setlocale(0,"");
    char filename [50];
    char str [100];
    cout << "¬ведите им€ и формат создаваемого файла\n";
    cin.getline (filename, 50);
    OemToCharA(filename,filename);
    FILE* f;
	f = fopen (filename, "wt");
	cout << "¬ведите текст в файле\n";
    cin.getline (str, 100);
    OemToCharA(str,str);
    fprintf (f, "%s", str);
    fprintf (f, "\n");
    return 0;
}

