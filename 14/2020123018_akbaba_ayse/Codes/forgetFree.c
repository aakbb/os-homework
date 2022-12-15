#include <stdio.h>
#include <stdlib.h>

int main(void) {

int *pi,i;	//pi pointer'ı ve i değişkeni tanımlandı.
i = 5;		//i değişkenine değer atandı
pi = &i;	//i'nin adresi pointer'a aktarıldı
pi = NULL;	//pointer'daki adresi null yaparak değişkeni referanssız hale getirildi.
pi = (int*)malloc(sizeof(int));	//Pointer için bellekte ayrı bir adres tahsis edilir.

printf("i değeri = %d\n", i);	//i değeri ekrana yazdırılır.
printf("i adresi = %p\n", &i);	//i adresi ekrana yazdırılır.
printf("Pointer değeri = %d\n", *pi);	//Pointer'ın değeri ekrana yazdırılır
printf("Pointer adresi = %p\n", pi);	//Pointer adresi ekrana yazdırılır.

return 0;
}