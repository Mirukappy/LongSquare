#include "include\LongSquare.hpp"
#include <iostream>
#include <vector>

using namespace std;

void start(){
    cout<<"Nama  : M Raidan Arsyal YK";
    cout<<"NRP   : 5024211053";
    cout<<"Kelas : Pemrograman Lanjut B";
    cout<<"\n\nTekan Enter untuk memulai program";
    cin.ignore();
    system("cls||clear");
}

int main (){

    start();
    vector < PersegiPanjang > Var;

    float panjangx, panjangy, tengahx, tengahy;
    for (int i = 1; i <= 2; i++)
    {
    cout<<"Masukkan data untuk persegi panjang "<<i<<": \n";
    cout<<"Panjang persegi  : "; cin>>panjangx;
    cout<<"Lebar persegi    : "; cin>>panjangy;
    cout<<"Titik tengah x   : "; cin>>tengahx;
    cout<<"Titik tengah y   : "; cin>>tengahy; 
    cout<<endl;
    PersegiPanjang Per(panjangx, panjangy, tengahx, tengahy);
    Var.push_back(Per);
    }

    system("cls||clear");
    PersegiPanjang Hasil(0,0,0,0);

    cout << "Nilai awal Persegi Panjang 1 : \n";
    Var[0].print();
    cout << "Nilai awal Persegi Panjang 2 : \n";
    Var[1].print();

    cout<<"Contoh Penggunaan Operator (+)\n";
    Hasil = Var[0] + Var[1];
    if (Var[0]==Var[1])
    { 
    cout << "Hasil Penjumlahan antara Persegi Panjang : \n";
     Hasil.print();
    }    

    cout<<"Contoh Penggunaan Operator (-)\n";
    Hasil = Var[0] - Var[1];
    if (Var[0]==Var[1])
    { 
    cout << "Hasil Pengurangan antara Persegi Panjang : \n";
     Hasil.print();
    } 

    cout<<"Contoh Penggunaan Operator (++)\n";
    ++Var[0];
    cout << "Persegi Panjang 1 (++) : \n";
    Var[0].print();
    --Var[0];

    ++Var[1];
    cout << "Persegi Panjang 2 (++) : \n";
    Var[1].print();
    --Var[1];

    cout<<"Contoh Penggunaan Operator (--)\n";
    --Var[0];
    cout << "Persegi Panjang 1 (--) : \n";
    Var[0].print();
    ++Var[0];

    --Var[1];
    cout << "Persegi Panjang 2 (--) : \n";
    Var[1].print();
    ++Var[1];
    
    cout<<"Contoh Penggunaan Operator ([])\n\n";
    cout<<"Persegi Panjang 1\n";
    cout<<"Nilai Xmin : "<<Var[0][1]<<endl;
    cout<<"Nilai Xmax : "<<Var[0][2]<<endl;
    cout<<"Nilai Ymin : "<<Var[0][3]<<endl;
    cout<<"Nilai Ymax : "<<Var[0][4]<<endl;

    cout<<"\n\nContoh Penggunaan Operator (==)\n";
    if (Var[0]==Var[1]) cout << "Kedua Persegi Panjang beririsan\n\n";
    else cout << "Kedua Persegi Panjang tidak beririsan\n\n";

    cin.ignore();
    cin.ignore();
    system("cls||clear");


    return 0;        



    


}