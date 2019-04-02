#include <stdio.h>
#include"func.h"
#include <math.h> //abs 를 사용하기위해서 선언

void queens(int i, int n, int col[]) // 퀸의 백트레킹 함수
{
	int j;
	static int count = 1;// count 값은 몇번째 해인지를 알려쥐야함으로 함수가끝나더라도 그값이 유지되게 static 사용

	if (i == n && queen_safe(i, col) == 1)// i 값과 사용자가 입력한 판크기의 n의 값이 동일해지고 안전성검사를 통과할때만 출력한다.
	{

		queen_print(n, col, count); // 퀸 출력함수
		if (n == 4 && count == 2) // static 을 사용했기때문에 각각의 경우에 해의 갯수를 파악한후 그만큼 count값 이 증가하면 count값을 초기화
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
				col[i + 1] = j; // j값을 통해 i+1 행의 몇번째 열에 값을 넣을것인지 정하고 검사한다.
				if (queen_safe(i, col) == 1)
					queens(i + 1, n, col); // 검사를 통해서 통과할경우 다시 함수를호출해준다.
			}
		}


}
void queen_print(int n, int col[] ,int count)  //퀸 출력함수
{
	int i, j;

	getchar();

	printf("\n%d x %d 의 %d번째 해:\n\n", n, n, count);

	printf("    %d", 1);  // 첫줄에 열번호를 각각 출력
	for (i = 2; i <= n; i++)
		printf("   %d", i);

	for (i = 1; i <= n; i++)
	{
		printf("\n\n%d", i); // 열번호를 하나씩출력
		for (j = 1; j <= n; j++)
		{
			if (col[i] == j)  //col[i]의 값이 j와 같아지면 Q을 출력
				printf("   Q");
			else // 아니면 - 출력
				printf("   -");
		}
	}
}
int queen_safe(int i, int col[]) 
{
	int k;
	int p;

	k = 0;
	p = 1;  // true, false 값을 표현한다.
	while (k < i) //값이들어온 i 와 k를 비교하면서 반복
	{
		if (col[i] == col[k] || abs(col[i] - col[k]) == i - k) // 같은 행과열에 있다는 말은 각각 배열에저장된 값이 같아서안되고 
			p = 0;											   // 대각선상에 있다는 것은 각각의 배열의 값의 차의 절대값과 i와k의 차의 값이 같으면 안된다. 
		k++;
	}
	return p; // 0이면 false 1이면 true
}
 // 나미지 룩과 비숍은 안전성 검사에서 퀸과 차이를 보인다 나머지는 동일한 조건으로 알고리즘을 돌린다.
void looks(int i, int n, int col[])
{
	int j;

	static int count = 1;

	if (i == n && look_safe(i, col) == 1)
	{

		look_print(n, col, count); // 퀸 출력함수
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

	printf("\n%d x %d 의 %d번째 해:\n\n", n, n, count);

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
		if (col[i] == col[k]) //룩은 같은 행 같은 열에만 없으면 된다.
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

		bishop_print(n, col, count); // 퀸 출력함수
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

	printf("\n%d x %d 의 %d번째 해:\n\n", n, n, count);

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
		if (abs(col[i] - col[k]) == i - k) // 비숌은 같은 대각선 상에만 없게 해주면 된다.
			p = 0;
		k++;
	}
	return p;
}