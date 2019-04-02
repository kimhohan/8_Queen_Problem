#include <stdio.h>
#include "func.h"

int main()
{
	int i;
	int n, num, num1;
	int col[20]; // 열의 정보를 저장하는 배열 
	char c; // 잘못된 입력시 Y/N 의 입력을 받기위해 쓰는 변수

	while (1)
	{
		printf("\n\n\n\n\n\n\n\n\t\t\t8 queen problem 해구하기\n\n"); // 기본메뉴제공
		printf("\t\t\t       -프로그램-\n\n");
		printf("\t\t\t     1  해구하기\n\n");
		printf("\t\t\t     2  종료\n\n");
		printf("\t\t       원하시는 번호를 입력하세요:");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			while (1)
			{
				int count = 0;
				system("cls");
				printf("\n\n\n\n\n\n\n\n\t\t\t\t* 말 선택 *\n\n"); // 말선택 메뉴 제공
				printf("\t\t\t     1. 퀸\n\n");
				printf("\t\t\t     2. 룩\n\n");
				printf("\t\t\t     3. 비숍\n\n");
				printf("\t\t\t     4. 되돌아가기\n\n");
				printf("\t\t       원하시는 번호를 선택해주세요:");
				scanf("%d", &num1);

				switch (num1)
				{
				case 1:
					while (1)
					{
						system("cls");
						printf("\n\n\n\n\n\n\n\t\t\t\t   퀸 모드\n\n");
						printf("\n\n\n\n\t\t판 크기(4x4 ~ 8x8 에맞게 4~8 사이 자연수 입력)? "); // 제한사항 
						scanf("%d", &n);
						if ( n>=4 && n <= 8) //제한사항에 맞게 입력을 해야한다.
						{
							

							system("cls");

							queens(0,n, col); // 퀸의 안정성 확인후 배치하고 출력까지해주는 함수 두가지 함수가 들어가있다.

							printf(" \n모든해 출력이 완료되었습니다. 메뉴로 다시돌아가시겠습니까?(Y/N)\n"); // 모든해 출력시 사용자의 입력을 다시받는다.
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      프로그램을 종료합니다. ");
								printf("\n\n\t\t\t\t   감사합니다.\n\n");
								system("pause>null");
								exit(0);
							}
						}
						else //제한사항에 벗어난경우
						{
							system("cls");
							printf("\n\n\n\n\n\n\n\n\t     잘못된 입력입니다. 메뉴로 다시돌아가시겠습니까?(Y/N)");  // 잘못 된입력에 대한 사용자입력
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      프로그램을 종료합니다. ");
								printf("\n\n\t\t\t\t   감사합니다.\n\n");
								system("pause>null");
								exit(0);
							}
						}
					}
					break;
				case 2:  // 퀸과 동일한구조
					while (1)
					{
						system("cls");
						printf("\n\n\n\n\n\n\n\t\t\t\t   룩 모드\n\n");
						printf("\n\n\n\n\t\t판 크기(4x4 ~ 8x8 에맞게 4~8 사이 자연수 입력)? ");
						scanf("%d", &n);
						if (n >= 4 && n <= 8)
						{
							system("cls");

							looks(0, n, col);

							printf("\n모든해 출력이 완료되었습니다. 메뉴로 다시돌아가시겠습니까?(Y/N)\n");
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\t\t\t\t\t프로그램을 종료합니다. \n\n");
								printf("\n\n\n\n\n\n\n\t\t\t\t   감사합니다.\n\n");
								exit(0);
							}
						}
						else
						{
							system("cls");
							printf("\n\n\n\n\n\n\n\n\t     잘못된 입력입니다. 메뉴로 다시돌아가시겠습니까?(Y/N)");
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      프로그램을 종료합니다. ");
								printf("\n\n\t\t\t\t   감사합니다.\n\n");
								system("pause>null");
								exit(0);
							}
						}
					}
					break;
				case 3:  // 퀸과 동일한 구조
					while (1)
					{
						system("cls");
						printf("\n\n\n\n\n\n\n\t\t\t\t  비숍 모드\n\n");
						printf("\n\n\n\n\t\t판 크기(4x4 ~ 8x8 에맞게 4~8 사이 자연수 입력)? ");
						scanf("%d", &n);
						if (n >= 4 && n <= 8)
						{
							system("cls");

							bishops(0, n, col);

							printf("\n모든해 출력이 완료되었습니다. 메뉴로 다시돌아가시겠습니까?(Y/N)\n");
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      프로그램을 종료합니다. ");
								printf("\n\n\t\t\t\t   감사합니다.\n\n");
								system("pause>null");
								exit(0);
							}
						}
						else
						{
							system("cls");
							printf("\n\n\n\n\n\n\n\n\t     잘못된 입력입니다. 메뉴로 다시돌아가시겠습니까?(Y/N)");
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      프로그램을 종료합니다. ");
								printf("\n\n\t\t\t\t   감사합니다.\n\n");
								system("pause>null");
								exit(0);
							}
						}
					}
					break;
				case 4: // 기본메뉴 로 되돌아가주기위한 기능
					system("cls");
					count++;
					break;
				default: // 선택에서 잘못입력한경우 
					system("cls");
					printf("\n\n\n\n\n\n\n\n\t     잘못된 입력입니다. 메뉴로 다시돌아가시겠습니까?(Y/N)");
					scanf("%s", &c);
					if (c == 'Y' || c == 'y')
					{
						system("cls");
						break;
					}
					else if (c == 'N' || c == 'n')
					{
						system("cls");
						printf("\n\n\n\n\n\n\n\t\t\t      프로그램을 종료합니다. ");
						printf("\n\n\t\t\t\t   감사합니다.\n\n");
						system("pause>null");
						exit(0);
					}
				}
				if (count == 1)
					break;
			}
			break;
		case 2:
			system("cls");
			printf("\n\n\n\n\n\n\n\t\t\t      프로그램을 종료합니다. ");
			printf("\n\n\t\t\t\t   감사합니다.\n\n");
			system("pause>null"); // 화면에서 
			exit(0);
		default:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\t     잘못된 입력입니다. 메뉴로 다시돌아가시겠습니까?(Y/N)");
			scanf("%s", &c);
			if (c == 'Y' || c == 'y')
			{
				system("cls");
				break;
			}
			else if (c == 'N' || c == 'n')
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\t\t\t      프로그램을 종료합니다. ");
				printf("\n\n\t\t\t\t   감사합니다.\n\n");
				system("pause>null"); // 마지막에 계속하려면 아무키나 누르시요 를 사라지게해준다.
				exit(0);
			}
		}
	}
	return 0;
}