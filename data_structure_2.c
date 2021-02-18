#define _CRT_SECURE_NO_WARNINGS 1 //必须放在第一行
#include <stdio.h>
#include <string.h>   

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
int  main3() {
	//C语言规定当前变量必须定义在当前代码块的最前面
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//scanf()是C语言中的一个输入函数。被声明在头文件stdio.h里，相当于java的scanner
	//scanf是c语言库文件提供的，vs觉得不安全，就弄了个scanf_s出来，但是它只能在vs上编译，破坏跨平台性，所以不推荐使用
	//如果要去掉警告，就在开头第一行加上 #define _CRT_SECURE_NO_WARNINGS，如果不想每次都在新的源文件加这句可以改vs的newc++file.cpp文件
	int statuscode = scanf("%d%d",&num1,&num2); //取地址符号'&'  ,这个函数有个返回值，如果不接收vs会报警告
	sum = num1 + num2; 
	printf("sum=%d", sum);  //我这里不小心写成pringf了，结果这破ide居然没帮我检测出来，操
	return 0;
}

//c语言中如何定义常量 ？
int main4() {
	// 1、常变量 const ->constant  永恒不变  相当于java的final关键词
	const int num = 1;
	// 2、#define 定义的标识符常量，一般不会这样定义在函数内部，我这是为了好看
    #define Max 10
	printf("%d\n",Max);
	// 3、枚举常量   
	enum Color{YELLOW,RED,BLUE};
	enum Color color = RED;
	printf("%d\n%d\n", color,RED);//2 ,这个用法和java差不多
	return 0;
}
//  数据结构
int main5() {
	int array[10];  // 定义一个可以存放10个整型数字的数组
	char arr[3] = { 'a','b','c'};   // 定义一个可以存放3个字符数据类型的数组,然后赋值
	printf('%d', arr[2]); // 访问arr数组下标为2的元素
	return 0;
}
// 学习C语言的字符串类型
int main6() {
	char arr1[] = "abc";  //"abc" == 'a' 'b' 'c' '\0'  ---》 "\0"是字符串的结束标志，值是0
	char arr2[] = { 'a','b','c'}; // 这个形式的数组没有结束标志！如果不加0，即找不到结束标志就会随机打印一些随机值,手动添加0:{ 'a','b','c',0}}

	printf("%s\n", arr1);
	printf("%s\n",arr2);

	//计算字符串的长度
	printf("%d\n", strlen(arr1));  // strlen需要引入 #include <string.h> 
	printf("%d\n", strlen(arr2));  //找结束标志'\0'，找不到就在随机值里面找，直到找到0
	return 0;
}

//转义字符 ‘\’
int main7() {
	printf("C:\test\n");//打印结果是这个"C:      est",因为\t是一个水平制表符
	printf("C:\\test\n");// '\\'用于表示反斜杠自身的意思，以防被解释为转义字符
	printf("%c\n",'\'');// 打印一个单引号
	printf("%d\n",strlen("\32")); // "\32 表示一个八进制数字对应的ASCII字符   八进制32转化为十进制是26
	printf("%d\n", strlen("\32x")); // "\32x"表示一个十六进制数字对应的ASCII字符 十六进制32转化为十进制是50
	return 0;
}
// 操作符
int main8() {
   //算术操作符   + - * / %
   //移位操作符   << 、>>
   //
}

