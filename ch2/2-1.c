#include <stdio.h>  // 전처리기 : 컴파일하기 전에 실행하는 문장
#define SIZE 3	// 전처리기(5장)
typedef struct{	// 구조체(12장) : 하나 이상의 변수를 묶어서 새로운 자료형을 정의
	char name[10];
	double w;
}WEIGHT;
void swap(WEIGHT *, WEIGHT *);	// 함수 선언(8장) : main()함수 다음에 정의되어있는 함수의 사용법을 컴파일러에게 미리 알려줌

int main() {
	WEIGHT man[SIZE]={{"한개발",57.5}, {"엄청군",125.6}, {"갈비양",35.7} };	
	// 배열(10장) : 같은 데이터형의 요소들이 동일한 크기로 순서를 갖고 나열되어 있는 집합
	int i,j;    	
	// 변수(3장) : 계속 변하는 값이면서, 그 값을 저장하는 공간
	// 기억 부류(9장) : 변수를 컴퓨터의 어떤 메모리에 언제 할당하는지 지정하는 방법
	for(i=0;i<2;i++){ 	// 제어문(7장) :프로그램의 흐름을 지시하는데 사용되는 문장
		for(j=i+1;j<3;j++){	// 연산자(6장) : 프로그램을 짤 때 변수나 값의 연산을 위해 사용되는 부호
			if(man[i].w<man[j].w) {
				swap(&man[i],&man[j]); // call by address(11장) : 매개변수를 전달하는 기법의 하나. 실매개변수의 주소를 형식매개변수로 전달
			}
		}
	}
	printf(" 이름 \t체중\n"); // 입출력 라이브러리 함수(4장) : 프로그래머를 위해 c표준에서 제공하는 함수
	for(i=0;i<3;i++){ 
		printf(" %s %5.1f\n",man[i].name,man[i].w);
	}
	return 0;
} //main함수 끝

/*--------------swap함수 정의------------------*/
void swap(WEIGHT *mani, WEIGHT *manj) // 포인터(11장) : 주소를 저장하는 변수
{		//함수 정의. 함수의 기능, 함수를 만든다.
	WEIGHT temp;
	temp=*mani;
	*mani=*manj;
	*manj=temp; 
}
