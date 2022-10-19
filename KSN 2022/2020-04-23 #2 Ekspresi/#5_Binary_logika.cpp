//Operator logika, disebut juga operator relasional.
// >, <, ==, <=, >=, =!

#include <stdio.h>
int main() {
    int a = 1;
    int b = 0;

    int c = a =! b;
    printf("%d\n",c);
    c = a <= b;
    printf("%d\n",c);
    c = a > b;
    printf("%d\n",c);

    //hasil = 1 = true
    //hasil = 0 = false
    //tambahkan semua operator logika


    return 0;
}

