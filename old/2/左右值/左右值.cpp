#include <iostream>
using namespace std;
int main()
{
	int i, j, ival;
	const int ci = i; // �����ӿ���,���ǲ��ã��Ǻ�
//	1024 = ival; // error: literals are rvalues
//	i + j = ival; // error: arithmetic expressions are rvalues
//	ci = ival; // error: can't write to ci // ��Ϊֻ������ô?
	cout << ci << endl;
	return 0;
}