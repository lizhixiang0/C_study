#include <stdio.h>
//字符数据类型   char   占1个字节   8bit   00000000   -128 ~ +127
//整形     int          占4个字节   32bit  00000000 ...
//短整型   short        占2个字节
//长整型   long         占4个字节
//更长的整型 long long  占8个字节
//单精度浮点数 float    占4个字节
//双精度浮点数 double   占8个字节

//
//c语言中有没有字符串？

int off = 11;//定义一个全局变量,作用域是全局的,生命周期是整个程序的生命周期

int main2() {
	{
		int num = 1; 
		printf("%d",num);// 局部代码块的作用域就在这个{}之内
	}
	float a;   //创建了一个局部变量a ,向内存申请了几个字节的空间？可以用sizeof（）查看
	printf("%d\n", sizeof(a));
	char b = '1';
	// printf字面意思是print format ,按格式输出 
	// 除了传递字符串不需要输出控制符，就是"%X"
	// 其他的基本数据类型都需要传递输出控制符，这个就没java好，屁事多
	// 每个数据类型对应一个控制符，具体看 http://c.biancheng.net/view/159.html
	printf("我是字符串"); 
	return 0;
}

//计算两个数的和
int  main() {
	//C语言规定当前变量必须定义在当前代码块的最前面
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//scanf()是C语言中的一个输入函数。被声明在头文件stdio.h里，相当于java的scanner
	scanf_s("%d%d",&num1,&num2); //取地址符号'&'  //scanf不够安全呗，所以vs就弄了个scanf_s出来，不过貌似这个代码只能在vs上编译
	sum = num1 + num2; 
	printf("sum=%d", sum);  //我这里不小心写成pringf了，结果这破ide居然没帮我检测出来，操
	return 0;
}