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

int main() {
	float a;   //创建了一个变量a ,向内存申请了几个字节的空间？可以用sizeof（）查看
	printf("%d\n", sizeof(a));
	char b = '1';
	// printf字面意思是print format ,按格式输出 
	// 除了传递字符串不需要输出控制符，就是"%X"
	// 其他的基本数据类型都需要传递输出控制符，这个就没java好，屁事多
	// 每个数据类型对应一个控制符，具体看 http://c.biancheng.net/view/159.html
	printf("我是字符串"); 
	            
}