#include <stdio.h>
int main(void)
{
	
	printf("Hello world! \n");

	int num = 0;

	while (1)
	{
		printf("숫자하나 입력 하세요 : ");
		scanf_s("%d", &num);
		printf("입력된 숫자는 %d입니다.\n ", (int)num);
		if (num == 0) return 0;
	}
	return 1;
}