#include <stdio.h>
int main(void)
{
	
	printf("Hello world! \n");

	int num = 0;

	while (1)
	{
		printf("�����ϳ� �Է� �ϼ��� : ");
		scanf_s("%d", &num);
		printf("�Էµ� ���ڴ� %d�Դϴ�.\n ", (int)num);
		if (num == 0) return 0;
	}
	return 1;
}