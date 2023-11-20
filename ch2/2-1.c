#include <stdio.h>	//전처리기, 5장
#define SIZE 3	//전처리기, 5장
typedef struct {	//구조체,12강
	char name[10];
	double w;
}WEIGHT;
void swap(WEIGHT*, WEIGHT*);
int main(void)
{
	WEIGHT man[SIZE] = { {"한개발",57.5},
						{"엄청군",125.6},
						{"갈비양",35.7} };
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = i + 1; j < 3; j++) {
			if (man[i].w < man[j].w) {
				swap(&man[i], &man[j]);
			}
		}
	}
	printf(" 이름 \t체중\n");
	for (i = 0; i < 3; i++) {
		printf(" %s %5.1f\n", man[i].name, man[i].w);
		}
	return 0;
}

/*--swap 함수 정의--*/
void swap(WEIGHT* mani, WEIGHT* manj)
{
	WEIGHT temp;
	temp=*mani;
	*mani=*manj;
	*manj=temp;
}
