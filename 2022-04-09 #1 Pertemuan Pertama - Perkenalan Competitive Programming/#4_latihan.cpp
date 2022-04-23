/*
Nama String
Umur Int
tinggi badan float 
Ukuran Pakaian [S,M,L,XL,XXL) char 

tampilkan variabel pada baris yang terpisah

*/
#include <iostream>
#include <cstdio>
#include <string>
#include <stdio.h>

using namespace std;
int main()
{
    string nama;
    int umur;
    float tb;
    char uk;

    cout<<"Masukkan Nama = ";getline (cin, nama);
    printf("Masukkan Umur = ");scanf("%d",&umur);
    printf("Masukkan Ukuran Baju = ");scanf("%c",&uk);

    cout<<"Nama Anda = "<<nama<<"\n";
    printf("Umur Anda = %i\n",umur);
    printf("Ukuran Baju = %c\n",uk);



    
    return 0;
}
