#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    string nama;
	int umur;

    //Entry

    cout<< "--------------------------"<<endl;
    cout<< "Kategori Umur Pada Manusia"<< endl;
    cout<< "--------------------------"<<endl;



    cout<<"Masukkan Nama anda	= ";
    getline(cin,nama);

    mulai:
	cout<<"Masukkan Umur anda	= ";
	cin>>umur;



	if(umur>=60 && umur<=100){
		cout<<"\nAnda Termasuk Kategori Lansia";

	}else if(umur>=30 && umur<=59){
		cout<<"Anda Termasuk Kategori Dewasa";

	}else if(umur>=18 && umur<=29){
		cout<<"Anda Termasuk Kategori Pemuda";

	}else if(umur>=12 && umur<=17){
		cout<<"Anda Termasuk Kategori Remaja";

	}else if(umur>=6 && umur<=11){
		cout<<"Anda Termasuk Kategori Anak-anak";

    }else if(umur>=3 && umur<=5){
		cout<<"Anda Termasuk Kategori Balita";

    }else if(umur>=1 && umur<=2){
		cout<<"Anda Termasuk Kategori Batita";

    }else if(umur>=0 && umur<=0){
		cout<<"Anda Termasuk Kategori Bayi";


	}else {
		cout<<"Umur yang anda masukan salah"<<endl;
		goto mulai;
	}

    return 0;
getch();
}