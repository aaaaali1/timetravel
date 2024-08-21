#include<iostream>
using namespace std;
int main()
{
	double a, c;
	char b;//定义运算符
	cout << "请输入第一个数字" << endl;//输入运算数字
	cin >> a;
	cout << "请输入运算符" << endl;
	cin >> b;
	cout << "请输入第二个数字" << endl;
	cin >> c;
	switch(b) {//识别运算符。以选择正确对应的运算方式和输出内容
case '+':
	cout << a << '+' << c << '=' << (a + c) << endl;
	break;
case '-':
	cout << a << '-' << c << '=' << (a - c) << endl;
	break;
case '*':
	cout << a << '*' << c << '=' << (a * c) << endl;
	break;
case '/':
	if (c != 0)
		cout << a << '/' << c << '=' << (a / c) << endl;
	else
		cout << "输入有误" << endl;//注意除数不为0的除法原则
		break;
default:
	cout << "没有此符号" << endl;//表明运算符输入错误的情况
	break;
	}


	return 0;

}