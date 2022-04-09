#include <iostream>
#include <stdio.h>
#include <cstdio>
using namespace std;

// variabel global


int main() // fungsi utama
{
    // variabel lokal
    int angka2 = 20;
    int angka1 = 10;

    //var angka1 ubah nilai menjadi 30
    // cara 1 = angka1=30;
    // cara 2 = angka1 += 20;
    // cara 3 = int angka4 = 30; angka1 = angka4;
   
    float angka3 = 30.20;
    double angka5 = 20.30;
    printf("Angka 1 = %i, angka 2= %d, Angka 3 = %f\n", angka1,angka2,angka3);
    printf("Angka 5 = %lf",angka5);

    char karakter = '*';
    printf("Karakter dari variabel tsb = %c",karakter);

    
    return 0;
}