#include <stdio.h>

int main(void) {

int *pi,i;	//pi pointer'ı ve i değişkeni tanımlandı.
i = 5;		//i değişkenine değer atandı
pi = &i;	//i'nin adresi pointer'a aktarıldı
pi = NULL;	//pointer'daki adresi null yaparak değişkeni referanssız hale getirildi.


printf("i değeri = %d\n", i);	//i değeri ekrana yazdırılır.
printf("Pointer değeri = %d\n", *pi);	//Pointer'ın değeri ekrana yazdırılır

return 0;
}