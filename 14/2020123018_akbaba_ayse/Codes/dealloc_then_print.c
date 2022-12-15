#include <stdio.h>
#include <stdlib.h>

int main(void){

	int* numbers;	//data isminde dinamik bellek yapısına uygun ptr tanımladım.
	numbers = (int *)malloc(5* sizeof(int));	//malloc kullanarak bellekte 20 byte'lık yer ayırdım.

	free(numbers);	//bellekte dizi için ayırdığım yerleri tekrardan serbest bıraktım.
	
	printf("%d\n",numbers[0]);	//diziden bir veriyi yazdırmaya çalıştım.
	return 0;
}