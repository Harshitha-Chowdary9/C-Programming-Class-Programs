#include<stdio.h>
#include<string.h>
union data
{
	int i;
	float f;
	char str[20];
};
int main()
{
	union data data;
	printf("memory size occupied by data:%d\n", sizeof(data));
	return 0;
}