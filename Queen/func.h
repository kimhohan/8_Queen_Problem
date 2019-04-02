#include <stdio.h>

void queens(int i, int n, int col[]);	// 퀸의 백트레킹 함수

void queen_print(int n, int col[],int count);     // 퀸의 배치를 출력해주는 함수

int queen_safe(int i, int col[]);		// 퀸의 안전성 검사함수   

void looks(int i, int n, int col[]);	// 룩의 백트레킹 함수

void look_print(int n, int col[],int count);		// 룩의 배치를 출력해주는 함수

int look_safe(int i, int col[]);		// 룩의 안전성 검사함수

void bishops(int i, int n, int col[]);	// 비숍의 백트레킹 함수

void bishop_print(int n, int col[],int count);	// 비숍의 배치를 출력해주는 함수

int bishop_safe(int i, int col[]);		// 비숍의 안전성 검사함수
