#include <stdio.h>
#include"func.h"
#include <math.h> //abs �� ����ϱ����ؼ� ����

void queens(int i, int n, int col[]) // ���� ��Ʈ��ŷ �Լ�
{
	int j;
	static int count = 1;// count ���� ���° �������� �˷���������� �Լ����������� �װ��� �����ǰ� static ���

	if (i == n && queen_safe(i, col) == 1)// i ���� ����ڰ� �Է��� ��ũ���� n�� ���� ���������� �������˻縦 ����Ҷ��� ����Ѵ�.
	{

		queen_print(n, col, count); // �� ����Լ�
		if (n == 4 && count == 2) // static �� ����߱⶧���� ������ ��쿡 ���� ������ �ľ����� �׸�ŭ count�� �� �����ϸ� count���� �ʱ�ȭ
			count = 1;
		else if(n == 5 && count == 10)
			count = 1;
		else if (n == 6 && count == 4)
			count = 1;
		else if (n == 7 && count == 40)
			count = 1;
		else if (n == 8 && count == 92)
			count = 1;
		else
			count++;
	}
		else
		{
			for (j = 1; j <= n; j++)
			{
				col[i + 1] = j; // j���� ���� i+1 ���� ���° ���� ���� ���������� ���ϰ� �˻��Ѵ�.
				if (queen_safe(i, col) == 1)
					queens(i + 1, n, col); // �˻縦 ���ؼ� ����Ұ�� �ٽ� �Լ���ȣ�����ش�.
			}
		}


}
void queen_print(int n, int col[] ,int count)  //�� ����Լ�
{
	int i, j;

	getchar();

	printf("\n%d x %d �� %d��° ��:\n\n", n, n, count);

	printf("    %d", 1);  // ù�ٿ� ����ȣ�� ���� ���
	for (i = 2; i <= n; i++)
		printf("   %d", i);

	for (i = 1; i <= n; i++)
	{
		printf("\n\n%d", i); // ����ȣ�� �ϳ������
		for (j = 1; j <= n; j++)
		{
			if (col[i] == j)  //col[i]�� ���� j�� �������� Q�� ���
				printf("   Q");
			else // �ƴϸ� - ���
				printf("   -");
		}
	}
}
int queen_safe(int i, int col[]) 
{
	int k;
	int p;

	k = 0;
	p = 1;  // true, false ���� ǥ���Ѵ�.
	while (k < i) //���̵��� i �� k�� ���ϸ鼭 �ݺ�
	{
		if (col[i] == col[k] || abs(col[i] - col[k]) == i - k) // ���� ������� �ִٴ� ���� ���� �迭������� ���� ���Ƽ��ȵǰ� 
			p = 0;											   // �밢���� �ִٴ� ���� ������ �迭�� ���� ���� ���밪�� i��k�� ���� ���� ������ �ȵȴ�. 
		k++;
	}
	return p; // 0�̸� false 1�̸� true
}
 // ������ ��� ����� ������ �˻翡�� ���� ���̸� ���δ� �������� ������ �������� �˰����� ������.
void looks(int i, int n, int col[])
{
	int j;

	static int count = 1;

	if (i == n && look_safe(i, col) == 1)
	{

		look_print(n, col, count); // �� ����Լ�
		if (n == 4 && count == 24)
			count = 1;
		else if (n == 5 && count == 120)
			count = 1;
		else if (n == 6 && count == 720)
			count = 1;
		else if (n == 7 && count == 5040)
			count = 1;
		else if (n == 8 && count == 40320)
			count = 1;
		else
			count++;
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			col[i + 1] = j;
			if (look_safe(i, col) == 1)
				looks(i + 1, n, col);

		}
	}
}

void look_print(int n, int col[], int count)
{

	int i, j;

	getchar();

	printf("\n%d x %d �� %d��° ��:\n\n", n, n, count);

	printf("    %d", 1);
	for (i = 2; i <= n; i++)
		printf("   %d", i);

	for (i = 1; i <= n; i++)
	{
		printf("\n\n%d", i);
		for (j = 1; j <= n; j++)
		{
			if (col[i] == j)
				printf("   L");
			else
				printf("   -");
		}
	}
}



int look_safe(int i, int col[])
{
	int k;
	int p;

	k = 0;
	p = 1;
	while (k < i)
	{
		if (col[i] == col[k]) //���� ���� �� ���� ������ ������ �ȴ�.
			p = 0;
		k++;
	}
	return p;
}

void bishops(int i, int n, int col[])
{
	int j;
	static int count = 1;

	if (i == n && bishop_safe(i, col) == 1)
	{

		bishop_print(n, col, count); // �� ����Լ�
		if (n == 4 && count == 24)
			count = 1;
		else if (n == 5 && count == 126)
			count = 1;
		else if (n == 6 && count == 797)
			count = 1;
		else if (n == 7 && count == 5636)
			count = 1;
		else if (n == 8 && count == 48043)
			count = 1;
		else
			count++;
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			col[i + 1] = j;
			if (bishop_safe(i, col) == 1)
				bishops(i + 1, n, col);

		}
	}
}
void bishop_print(int n, int col[], int count)
{

	int i, j;

	getchar();

	printf("\n%d x %d �� %d��° ��:\n\n", n, n, count);

	printf("    %d", 1);
	for (i = 2; i <= n; i++)
		printf("   %d", i);

	for (i = 1; i <= n; i++)
	{
		printf("\n\n%d", i);
		for (j = 1; j <= n; j++)
		{
			if (col[i] == j)
				printf("   B");
			else
				printf("   -");
		}
	}
}
int bishop_safe(int i, int col[])
{
	int k;
	int p;

	k = 0;
	p = 1;
	while (k < i)
	{
		if (abs(col[i] - col[k]) == i - k) // ����� ���� �밢�� �󿡸� ���� ���ָ� �ȴ�.
			p = 0;
		k++;
	}
	return p;
}