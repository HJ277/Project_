/* [평가항목 1] : 과제 설명

  컴퓨터프로그래밍 평과과제 (배점 : 25점)
  학과 : 컴퓨터공학부
  학번 : 202200258
  이름 : 강현주

  과제 주제 : 우리나라 6월 서울시 일일 코로나 확진자수 현황

 */

#define _CRT_SECURE_NO_WARNINGS
 // main.c
#include <stdio.h>
#include <stdlib.h>
#include "power.h"

struct information {      // [평가항목 5] : 구조체 사용
    char country[10];
    char city[10];
    int month;
};

void print_stars()        // [평가항목 2] : 함수 사용
{
    for (int i = 0; i < 40; i++)
        printf("*");
}
int main(void)
{
    print_stars();
    printf("\n일일 코로나 확진자 수 현황\n");
    print_stars();
    printf("\n");


    struct information s;

    strcpy(s.country, "대한민국");
    strcpy(s.city, "서울");
    s.month = 6;

    printf("나라 : %s\n", s.country);
    printf("도시 : %s\n", s.city);
    printf("월 : %d\n", s.month);
    printf("(2022.06.12.00시 기준)\n");


    int scores[12] = { 2925, 1822, 2442, 2250, 1718, 738, 952, 2627, 2009, 1537, 1382, 1160 };     // [평가항목 3] : 배열사용
    int i;

    for (i = 0; i < 12; i++)
        printf("6월 %d일 확진자 수 = %d\n", i + 1, scores[i]);

    int x = 3638248, y = 4853;
    int* p;                // [평가항목 4] : 포인터 사용

    p = &x;
    printf("누적확진자수 = %d\n", *p);
    p = &y;
    printf("누적사망자수 = %d\n", *p);

    int** q = &p;          // [평가항목 6] : 포인터 활용

    **q = 1;
    printf("당일사망자수= %d\n", y);

    return 0;

}
