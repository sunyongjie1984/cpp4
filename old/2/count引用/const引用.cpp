#include <iostream>
using namespace std;
int main()
{
	int ival = 1.01;         // �Ϸ�ival��1
//	int &rval1 = 1.01;       // cannot convert from 'const double' to 'int &'
	int &rval2 = ival;       // �Ϸ� ival��1, rval2Ҳ��1�����Ǳ����
	const int &rval3 = 2.1;  // �Ϸ���const���ÿ��Գ�ʼ��Ϊ��ֵ�� 


	cout << rval2 << endl;
	cout << rval3 << endl;
	return 0;
}