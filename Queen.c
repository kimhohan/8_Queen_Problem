#include <stdio.h>
#include "func.h"

int main()
{
	int i;
	int n, num, num1;
	int col[20]; // ���� ������ �����ϴ� �迭 
	char c; // �߸��� �Է½� Y/N �� �Է��� �ޱ����� ���� ����

	while (1)
	{
		printf("\n\n\n\n\n\n\n\n\t\t\t8 queen problem �ر��ϱ�\n\n"); // �⺻�޴�����
		printf("\t\t\t       -���α׷�-\n\n");
		printf("\t\t\t     1  �ر��ϱ�\n\n");
		printf("\t\t\t     2  ����\n\n");
		printf("\t\t       ���Ͻô� ��ȣ�� �Է��ϼ���:");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			while (1)
			{
				int count = 0;
				system("cls");
				printf("\n\n\n\n\n\n\n\n\t\t\t\t* �� ���� *\n\n"); // ������ �޴� ����
				printf("\t\t\t     1. ��\n\n");
				printf("\t\t\t     2. ��\n\n");
				printf("\t\t\t     3. ���\n\n");
				printf("\t\t\t     4. �ǵ��ư���\n\n");
				printf("\t\t       ���Ͻô� ��ȣ�� �������ּ���:");
				scanf("%d", &num1);

				switch (num1)
				{
				case 1:
					while (1)
					{
						system("cls");
						printf("\n\n\n\n\n\n\n\t\t\t\t   �� ���\n\n");
						printf("\n\n\n\n\t\t�� ũ��(4x4 ~ 8x8 ���°� 4~8 ���� �ڿ��� �Է�)? "); // ���ѻ��� 
						scanf("%d", &n);
						if ( n>=4 && n <= 8) //���ѻ��׿� �°� �Է��� �ؾ��Ѵ�.
						{
							

							system("cls");

							queens(0,n, col); // ���� ������ Ȯ���� ��ġ�ϰ� ��±������ִ� �Լ� �ΰ��� �Լ��� ���ִ�.

							printf(" \n����� ����� �Ϸ�Ǿ����ϴ�. �޴��� �ٽõ��ư��ðڽ��ϱ�?(Y/N)\n"); // ����� ��½� ������� �Է��� �ٽù޴´�.
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      ���α׷��� �����մϴ�. ");
								printf("\n\n\t\t\t\t   �����մϴ�.\n\n");
								system("pause>null");
								exit(0);
							}
						}
						else //���ѻ��׿� ������
						{
							system("cls");
							printf("\n\n\n\n\n\n\n\n\t     �߸��� �Է��Դϴ�. �޴��� �ٽõ��ư��ðڽ��ϱ�?(Y/N)");  // �߸� ���Է¿� ���� ������Է�
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      ���α׷��� �����մϴ�. ");
								printf("\n\n\t\t\t\t   �����մϴ�.\n\n");
								system("pause>null");
								exit(0);
							}
						}
					}
					break;
				case 2:  // ���� �����ѱ���
					while (1)
					{
						system("cls");
						printf("\n\n\n\n\n\n\n\t\t\t\t   �� ���\n\n");
						printf("\n\n\n\n\t\t�� ũ��(4x4 ~ 8x8 ���°� 4~8 ���� �ڿ��� �Է�)? ");
						scanf("%d", &n);
						if (n >= 4 && n <= 8)
						{
							system("cls");

							looks(0, n, col);

							printf("\n����� ����� �Ϸ�Ǿ����ϴ�. �޴��� �ٽõ��ư��ðڽ��ϱ�?(Y/N)\n");
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\t\t\t\t\t���α׷��� �����մϴ�. \n\n");
								printf("\n\n\n\n\n\n\n\t\t\t\t   �����մϴ�.\n\n");
								exit(0);
							}
						}
						else
						{
							system("cls");
							printf("\n\n\n\n\n\n\n\n\t     �߸��� �Է��Դϴ�. �޴��� �ٽõ��ư��ðڽ��ϱ�?(Y/N)");
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      ���α׷��� �����մϴ�. ");
								printf("\n\n\t\t\t\t   �����մϴ�.\n\n");
								system("pause>null");
								exit(0);
							}
						}
					}
					break;
				case 3:  // ���� ������ ����
					while (1)
					{
						system("cls");
						printf("\n\n\n\n\n\n\n\t\t\t\t  ��� ���\n\n");
						printf("\n\n\n\n\t\t�� ũ��(4x4 ~ 8x8 ���°� 4~8 ���� �ڿ��� �Է�)? ");
						scanf("%d", &n);
						if (n >= 4 && n <= 8)
						{
							system("cls");

							bishops(0, n, col);

							printf("\n����� ����� �Ϸ�Ǿ����ϴ�. �޴��� �ٽõ��ư��ðڽ��ϱ�?(Y/N)\n");
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      ���α׷��� �����մϴ�. ");
								printf("\n\n\t\t\t\t   �����մϴ�.\n\n");
								system("pause>null");
								exit(0);
							}
						}
						else
						{
							system("cls");
							printf("\n\n\n\n\n\n\n\n\t     �߸��� �Է��Դϴ�. �޴��� �ٽõ��ư��ðڽ��ϱ�?(Y/N)");
							scanf("%s", &c);
							if (c == 'Y' || c == 'y')
							{
								system("cls");
								break;
							}
							else if (c == 'N' || c == 'n')
							{
								system("cls");
								printf("\n\n\n\n\n\n\n\t\t\t      ���α׷��� �����մϴ�. ");
								printf("\n\n\t\t\t\t   �����մϴ�.\n\n");
								system("pause>null");
								exit(0);
							}
						}
					}
					break;
				case 4: // �⺻�޴� �� �ǵ��ư��ֱ����� ���
					system("cls");
					count++;
					break;
				default: // ���ÿ��� �߸��Է��Ѱ�� 
					system("cls");
					printf("\n\n\n\n\n\n\n\n\t     �߸��� �Է��Դϴ�. �޴��� �ٽõ��ư��ðڽ��ϱ�?(Y/N)");
					scanf("%s", &c);
					if (c == 'Y' || c == 'y')
					{
						system("cls");
						break;
					}
					else if (c == 'N' || c == 'n')
					{
						system("cls");
						printf("\n\n\n\n\n\n\n\t\t\t      ���α׷��� �����մϴ�. ");
						printf("\n\n\t\t\t\t   �����մϴ�.\n\n");
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
			printf("\n\n\n\n\n\n\n\t\t\t      ���α׷��� �����մϴ�. ");
			printf("\n\n\t\t\t\t   �����մϴ�.\n\n");
			system("pause>null"); // ȭ�鿡�� 
			exit(0);
		default:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\t     �߸��� �Է��Դϴ�. �޴��� �ٽõ��ư��ðڽ��ϱ�?(Y/N)");
			scanf("%s", &c);
			if (c == 'Y' || c == 'y')
			{
				system("cls");
				break;
			}
			else if (c == 'N' || c == 'n')
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\t\t\t      ���α׷��� �����մϴ�. ");
				printf("\n\n\t\t\t\t   �����մϴ�.\n\n");
				system("pause>null"); // �������� ����Ϸ��� �ƹ�Ű�� �����ÿ� �� ����������ش�.
				exit(0);
			}
		}
	}
	return 0;
}