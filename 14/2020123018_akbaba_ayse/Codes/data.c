#include <stdio.h>
#include <stdlib.h>

int main(void){

	int* data;	//data isminde dinamik bellek yapısına uygun ptr tanımladım.
	data = (int *)malloc(25 * sizeof(int));	//malloc kullanarak bellekte yer ayırdım.

	data[100] = 0;	//bellekte yeri olmayan 100.indexe 0 değerini atadım.
	printf("Deger: %d\n",data[100]);	//data [100] değerini ekrana yazdırmaya çalıştım.
	
	free(data);	//bellekte dizi için ayırdığım yerleri tekrardan serbest bıraktım.
	return 0;
}