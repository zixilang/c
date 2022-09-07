#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct MyStruct
{
	char name[20];
	short b;

};
int main(){
	struct MyStruct b1={"¼±¼±¼±",23};

	printf("%s\n", b1.name);
	printf("%d\n", b1.b);
	return 0;
}