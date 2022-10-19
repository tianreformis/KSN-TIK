#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    /*
    abs(a)= memutlakan nilai a contoh: 
    abs(-2) = 2 
    trunc(a) = menghilangkan koma pada bilangan decimal a contoh: trunc(1.3) = 1 
    floor(a) = pembulatan kebawah contoh: floor(5.7)= 5 
    ceil(a) = pembulatan keatas contoh: ceil(5.7)= 6 
    */
    
    //Ekspresi adalah gabungan operator dan operand
    int hasil = 3 * 2; //value/angka adalah operand sedang kali itu operator

    //operator unary
    int c = 10;
    c++; //increment = adalah menambah 1 kedalam variabel
    int d = 10;
    d--; //decrement = mengurangi 1 nilai
    printf("Variabel c = %d\n", c);
    printf("Variabel d = %d\n", d);

    
    printf("%f\n",sqrt(16)); //sqrt untuk menghitung akar kuadrat;
    printf("%f\n",round(16.09)); //round untuk membulatkan.
    printf("%f",pow(2,3));// untuk menghitung pangkat
    return 0;
}
