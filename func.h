#include <stdio.h>

void queens(int i, int n, int col[]);	// ���� ��Ʈ��ŷ �Լ�

void queen_print(int n, int col[],int count);     // ���� ��ġ�� ������ִ� �Լ�

int queen_safe(int i, int col[]);		// ���� ������ �˻��Լ�   

void looks(int i, int n, int col[]);	// ���� ��Ʈ��ŷ �Լ�

void look_print(int n, int col[],int count);		// ���� ��ġ�� ������ִ� �Լ�

int look_safe(int i, int col[]);		// ���� ������ �˻��Լ�

void bishops(int i, int n, int col[]);	// ����� ��Ʈ��ŷ �Լ�

void bishop_print(int n, int col[],int count);	// ����� ��ġ�� ������ִ� �Լ�

int bishop_safe(int i, int col[]);		// ����� ������ �˻��Լ�
