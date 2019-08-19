#include <stdio.h>  

int main()
{
	int MyGold = 3; //메모리의 특정 공간을 설정, 이름을 지정함.
	int AddGold = 4;
	int Sum = MyGold + AddGold;

	int Y;

	printf("%d+%d=%d", MyGold, AddGold, Sum);
	return 0;
}