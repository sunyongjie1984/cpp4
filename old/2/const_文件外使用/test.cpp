#include <iostream>
using namespace std;
void fun();
int counter = 100; // ��constȫ�ֱ��������ڹ����������ļ�����externֱ�ӷ��ʲ�ʹ��
extern const int counter2 = 200; // �����Ҫ�������ļ���ʹ��const������
int main()                       // �������ʽ���������Ǹ��ļ�ҲҪ������
{                  // ��Ϊconst����Ĭ��Ϊ�ļ��ľֲ�������_CP_page50
	int counter = 10;
	fun();
	cout << counter << endl;
	return 0;
}