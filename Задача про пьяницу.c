/*------------------------------------------------------------------------------*
|������ 3. ���������� ����������� ����, ��� ������� �� ������ � �����.			|
|  �������� ������� ������ ��� ���������� Data Science							|
|																				|
|  ��� ���������� ������� ����� ���� ����� ����� ��������, �������				|
|  ����������� � ������� �����������, ������� ��� ������� ���������� ����� (N)	|
|  ����������� ��������� ����������� (���������� ������������ ����������)		|
*-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>



double prob(int N);
unsigned long fact(unsigned long number);

int main(void) {
	printf("%f\n", prob(6));
	return 0;
}

double prob(int N) {
	N -= N % 2;
	double prob = 0.0;
	int k = 1;
	for (int i = 0; i < N; i += 2) {
		k = fact(2 * (i / 2 + 1)) / (fact(i / 2 + 1)*fact(i / 2 + 2)); //���������� ��������� ��������� ����� ����� (����� ��������)
		prob = prob + ((pow(2, i / 2)*k) / pow(3, i + 2));
	}
	return 1 - prob;
}

unsigned long fact(unsigned long number)
{
	if (number <= 1)
		return 1;
	else
		return number*fact(number - 1);
}