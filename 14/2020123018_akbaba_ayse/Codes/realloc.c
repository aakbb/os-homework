#include <stdio.h>
#include <stdlib.h>

int main(){
	int size=0,capacity=0,*elements;
	int cevap, initialSize=3;
	elements = (int*)malloc(initialSize * sizeof(int));
	
	if(elements == NULL){
		printf("Bellekte malloc ile yer tahsisi yapılamadı.");
	}else{
		printf("malloc kullanarak bellekte yer tahsis etme başarılı. \n");
        printf("\n element = %p c adreste\n",elements);
        do {
            printf("\n Bir deger giriniz: ");
            scanf("%d", &elements[size]);
            printf("Eklemek ister misiniz? (evet=1 / hayır=0): ");
            scanf("%d", &cevap);
            printf("---------------------------------------------------------\n");
 		if(size == initialSize){
 			if (cevap == 1){
 				initialSize *= 2;
				elements = (int*)realloc(elements, initialSize * sizeof(int));
			if (elements == NULL) {
				printf("Bellekte realloc ile yer tahsisi yapılamadı.");
			}
			else {
				printf("realloc kullanarak bellekte yer tahsis etme başarılı. \n");
				printf("\n element = %pc adreste\n",elements);
			}
 		    }
 		}
 		if(size != initialSize){
			if (cevap == 1) {
				size++;
   			}
 		}
		
		}while (cevap == 1);
		for (int i = 0; i <= size; i++) {
			printf("Vektorun %d . elemanı: %d\n ", i+1 ,elements[i]);
		}
		free(elements);
    }
    return 0;
}