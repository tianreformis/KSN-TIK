#include <iostream>
#include <math.h>

using namespace std;
int main(){

    int pilihan;
    cout<<"-----Pilihan----"<<endl;
    cout<<"1. Hitung cos"<<endl;
    cout<<"2. Hitung sin"<<endl;
    cout<<"3. Hitung tan"<<endl;
    cout<<"Masukkan pilihan = ";cin>>pilihan;
    if (pilihan == 1){
        float angka;
        cout<<"Masukkan Angka = ";cin>>angka;
        double hasilcos = cos(angka);
        cout<<hasilcos;
    }
    else if (pilihan == 6){
        float angka1,angka2;
        cout<<"Masukkan Angka 1 = ";cin>>angka1;
        cout<<"Masukkan Angka 2 = ";cin>>angka2;
        float hasilpow = pow(angka1, angka2);
        
        int bulatkan;
        cout<<"Apakah hasilnya mau dibulatkan? [1] Ya, [2] Tidak";cin>>bulatkan;
        if (bulatkan == 1){
            float hasilpembulatan= round(hasilpow);
            cout<<hasilpembulatan;
        }
        else if (bulatkan ==2){
            cout<<hasilpow;
        }
        else {
            cout<<"Pilihan tidak ada";
        }
    }
    return 0; 
}