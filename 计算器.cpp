#include<iostream>
using namespace std;
int main()
{
	double a, c;
	char b;
	cout << "请输入第一个数字" << endl;
	cin >> a;
	cout << "请输入运算符" << endl;
	cin >> b;
	cout << "请输入第二个数字" << endl;
	cin >> c;
	switch(b) {
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
		cout << "输入有误" << endl;
		break;
default:
	cout << "没有此符号" << endl;
	break;
	}


	return 0;

}