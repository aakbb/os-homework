#include <stdio.h>
#include <stdlib.h>

int main(void){

	int* numbers;	//data isminde dinamik bellek yapısına uygun ptr tanımladım.
	numbers = (int *)malloc(5* sizeof(int));	//malloc kullanarak bellekte 20 byte'lık yer ayırdım.

	free(&numbers[10]);	//Free'ye olması gerekenden farklı bir değer atadım.

	return 0;
}