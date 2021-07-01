#include <stdio.h>   //#相当于java的import ,std是standard input output
int main() //主函数-程序的入口 main函数有且仅有一个,注意：一个工程下只允许有一个main函数
{
	printf("hello!!");
	printf("world !!"); //printf是库文件的函数，所以需要使用#include来引入库文件
	return 0;
}