#include<iostream> 
#include<windows.h> 
#include<cstring> 
using namespace std; 
class Abiturient 
{ 
char Familiya[15]; 
char Imya[15]; 
char Otchestvo[15]; 
char Adres[15]; 
int Ocenki[5]; //������ ������ 
double Bal; // ������� ���������� ��� 
double ABal; // ������� ��� �������� 
public: 
//������� ������ �������� � ���������� ������: 
void set_Familiya(){cin>>Familiya;} 
void set_Imya(){cin>>Imya;} 
void set_Otchestvo(){cin>>Otchestvo;} 
void set_Adres(){cin>>Adres;} 
void set_Ocenki(){for(int i=0; i<5; i++){cin>>Ocenki;};} 
void set_Bal(){cin>>Bal;} 
//������� ��������� �������� ���������� ������: 
char get_Familiya(){return Familiya[15];} 
char get_Imya(){return Imya[15];} 
char get_Otchestvo(){return Otchestvo[15];} 
char get_Adres(){return Adres[15];} 
int get_Ocenki(){return Ocenki[5];} 
double get_Bal(){return Bal;} 
double get_ABal(){return ABal;} 
//������� ������ ���� �������� ����������: 
void show() 
{ 
cout<<"�������: "<<familiya<<endl;><<" "; 
ABal=ABal+Ocenki; 
}; 
ABal=ABal/5; 
cout<<endl;>=Bal){cout<<"��������";} 
else{cout<<"�� ��������";} 
} 
 
}; 
void main() 
{ 
SetConsoleCP(1251); 
SetConsoleOutputCP(1251); 
bool itsworks=true; 
char flag; 
int m_flag; 
while (itsworks) 
{ 
// ������� ������ ������: 
Abiturient Shk; 
// ��������� �����: 
cout<<"=================================="<<endl;>>m_flag; 
switch (m_flag) 
{ 
case 1: cout<<shk.get_familiya();>>flag; 
if (flag=='n'){itsworks=false;} 
}; 
}
