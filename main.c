/* [���׸� 1] : ���� ����

  ��ǻ�����α׷��� ������� (���� : 25��)
  �а� : ��ǻ�Ͱ��к�
  �й� : 202200258
  �̸� : ������

  ���� ���� : �츮���� 6�� ����� ���� �ڷγ� Ȯ���ڼ� ��Ȳ

 */

#define _CRT_SECURE_NO_WARNINGS
 // main.c
#include <stdio.h>
#include <stdlib.h>
#include "power.h"

struct information {      // [���׸� 5] : ����ü ���
    char country[10];
    char city[10];
    int month;
};

void print_stars()        // [���׸� 2] : �Լ� ���
{
    for (int i = 0; i < 40; i++)
        printf("*");
}
int main(void)
{
    print_stars();
    printf("\n���� �ڷγ� Ȯ���� �� ��Ȳ\n");
    print_stars();
    printf("\n");


    struct information s;

    strcpy(s.country, "���ѹα�");
    strcpy(s.city, "����");
    s.month = 6;

    printf("���� : %s\n", s.country);
    printf("���� : %s\n", s.city);
    printf("�� : %d\n", s.month);
    printf("(2022.06.12.00�� ����)\n");


    int scores[12] = { 2925, 1822, 2442, 2250, 1718, 738, 952, 2627, 2009, 1537, 1382, 1160 };     // [���׸� 3] : �迭���
    int i;

    for (i = 0; i < 12; i++)
        printf("6�� %d�� Ȯ���� �� = %d\n", i + 1, scores[i]);

    int x = 3638248, y = 4853;
    int* p;                // [���׸� 4] : ������ ���

    p = &x;
    printf("����Ȯ���ڼ� = %d\n", *p);
    p = &y;
    printf("��������ڼ� = %d\n", *p);

    int** q = &p;          // [���׸� 6] : ������ Ȱ��

    **q = 1;
    printf("���ϻ���ڼ�= %d\n", y);

    return 0;

}
