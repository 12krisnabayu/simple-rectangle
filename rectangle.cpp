#include <iostream>//header untuk cin dan cout
#include <conio.h>//header untuk getch
#include <fstream>

using namespace std;//wajib untuk iostream

int main()//fungsi utama
{
    int p,l,luas,keliling;/*deklarasi variable dengan tipe data
    integer, p untuk panjang dan l untuk lebar*/
    char judul;//judul
    
	system("cls");
 	
 	ifstream file;
 	file.open("judul.txt");
 		while(!file.eof())
 	{
     file.get(judul);
     cout<<judul;
 	}
 		file.close();
 		
    cout << "Masukkan panjang : ";//untuk ditampilkan
    cin>>p;//untuk input ke variable p
    cout << "Masukkan lebar : ";//untuk ditampilkan
    cin>>l;//untuk input ke variable l
    luas=p*l;//rumus luas segi empat
    keliling=(2*p)+(2*l);//rumus keliling segi empat
    cout << "Luas = "<<luas<< endl;//menampilkan hasil luas
    cout << "Keliling = "<<keliling;//menampilkan hasil keliling
    getch();//untuk menahan tampilan

    return 0;//mengembalikan nilai variable
}
