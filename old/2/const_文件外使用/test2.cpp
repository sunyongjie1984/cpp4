#include <iostream>
using namespace std;
int counter; // ����test����ļ��е�ȫ�ֱ���counter�������ڴ˹��̵�  
void fun()   // �������ļ���ʹ�õķ�����һ�־������֣�һ���������
{
//	extern int counter; // �ڶ��ַ���
	extern const int counter2; 
	++counter;
	cout << counter << endl;
	cout << counter2 << endl;
//	return 0;
}