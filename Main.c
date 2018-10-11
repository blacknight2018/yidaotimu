#include <stdio.h>
 

/*
规律
x-1

y+1

x+1
x+1

y-1
y-1

x-1
x-1
x-1

y+1
y+1
y+1

*/
int main()
{
	int x=0, y=0;//坐标
	int nloop = 1;
	int i = 1;
	int step=0; //纪录步数
	int a, b;
	bool flag=false; //标记 false时x左边减1
	printf("输入坐标:");
	scanf("%d,%d", &a, &b);

	while (true)
	{
		for (int j = 1; j <= i; j++)
		{
			if (false == flag)
			{
				x -= 1;
				step++;
				if (x == a && y == b)
					printf("共%d步骤", step);
			}
			if (true == flag)
			{
				x += 1;
				step++;
				if (x == a && y == b)
					printf("共%d步骤", step);
			}
		}
		for (int k = 1; k <= i; k++)
		{
			if (false == flag)
			{
				y += 1;
				step++;
				if (x == a && y == b)
					printf("共%d步骤", step);
			}
			if (true == flag)
			{
				y -= 1;
				step++;
				if (x == a && y == b)
					printf("共%d步骤", step);
			}
		}


		i++;
		flag = !flag;
	}
    return 0;
}

