#define _CRT_SECURE_NO_WARNINGS 1 //������ڵ�һ��
#include <stdio.h>

//�ַ���������   char   ռ1���ֽ�   8bit   00000000   -128 ~ +127
//����     int          ռ4���ֽ�   32bit  00000000 ...
//������   short        ռ2���ֽ�
//������   long         ռ4���ֽ�
//���������� long long  ռ8���ֽ�
//�����ȸ����� float    ռ4���ֽ�
//˫���ȸ����� double   ռ8���ֽ�

//
//c��������û���ַ�����

int off = 11;//����һ��ȫ�ֱ���,��������ȫ�ֵ�,���������������������������

int main2() {
	{
		int num = 1; 
		printf("%d",num);// �ֲ�������������������{}֮��
	}
	float a;   //������һ���ֲ�����a ,���ڴ������˼����ֽڵĿռ䣿������sizeof�����鿴
	printf("%d\n", sizeof(a));
	char b = '1';
	// printf������˼��print format ,����ʽ��� 
	// ���˴����ַ�������Ҫ������Ʒ�������"%X"
	// �����Ļ����������Ͷ���Ҫ����������Ʒ��������ûjava�ã�ƨ�¶�
	// ÿ���������Ͷ�Ӧһ�����Ʒ������忴 http://c.biancheng.net/view/159.html
	printf("�����ַ���"); 
	return 0;
}

//�����������ĺ�
int  main3() {
	//C���Թ涨��ǰ�������붨���ڵ�ǰ��������ǰ��
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//scanf()��C�����е�һ�����뺯������������ͷ�ļ�stdio.h��൱��java��scanner
	//scanf��c���Կ��ļ��ṩ�ģ�vs���ò���ȫ����Ū�˸�scanf_s������������ֻ����vs�ϱ��룬�ƻ���ƽ̨�ԣ����Բ��Ƽ�ʹ��
	//���Ҫȥ�����棬���ڿ�ͷ��һ�м��� #define _CRT_SECURE_NO_WARNINGS���������ÿ�ζ����µ�Դ�ļ��������Ը�vs��newc++file.cpp�ļ�
	int statuscode = scanf("%d%d",&num1,&num2); //ȡ��ַ����'&'  ,��������и�����ֵ�����������vs�ᱨ����
	sum = num1 + num2; 
	printf("sum=%d", sum);  //�����ﲻС��д��pringf�ˣ��������ide��Ȼû���Ҽ���������
	return 0;
}

//c��������ζ��峣�� ��
int main4() {
	// 1�������� const ->constant  ���㲻��  �൱��java��final�ؼ���
	const int num = 1;
	// 2��#define ����ı�ʶ��������һ�㲻�����������ں����ڲ���������Ϊ�˺ÿ�
    #define Max 10
	printf("%d\n",Max);
	// 3��ö�ٳ���   
	enum Color{YELLOW,RED,BLUE};
	enum Color color = RED;
	printf("%d\n%d\n", color,RED);//2 ,����÷���java���
	return 0;
}
// ѧϰC���Ե��ַ�������
int main() {
	char arr1[] = "abc";  //"abc" == 'a' 'b' 'c' '\0'  ---�� "\0"���ַ����Ľ�����־��ֵ��0
	char arr2[] = { 'a','b','c'}; // �����ʽ������û�н�����־���������0�����Ҳ���������־�ͻ������ӡһЩ���ֵ,{ 'a','b','c',0}

	printf("%s\n", arr1);
	printf("%s\n",arr2);

	//�����ַ����ĳ���
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));  //�ҽ�����־'\0'���Ҳ����������ֵ�����ң�ֱ���ҵ�0
	return 0;
}