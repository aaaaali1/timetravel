#include<iostream>
using namespace std;
int main()
{
	double a, c;
	char b;//���������
	cout << "�������һ������" << endl;//������������
	cin >> a;
	cout << "�����������" << endl;
	cin >> b;
	cout << "������ڶ�������" << endl;
	cin >> c;
	switch(b) {//ʶ�����������ѡ����ȷ��Ӧ�����㷽ʽ���������
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
		cout << "��������" << endl;//ע�������Ϊ0�ĳ���ԭ��
		break;
default:
	cout << "û�д˷���" << endl;//��������������������
	break;
	}


	return 0;

}