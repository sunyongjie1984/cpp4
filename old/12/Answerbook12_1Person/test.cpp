#include <iostream>
using namespace std;
#include "Person.h"
int main()
{
//	Person item1; // ��仰���Ϸ�����Ϊ�����ҵ�ƥ��Ĺ��캯��
	Person item1(string, string); // ��仰�ǺϷ��ģ�Ϊʲô?
//	Person item2(string1, string); // ��仰���Ϸ���Ϊʲô��
	Person item3("sunyongjie", "China"); 
	string s = item3.getAddress(); 
	cout << s << endl;

//	item1.address = "ddd"; // ���ܷ���
//	cout << item1 << endl; // �������Ϊû�н�������ô��Ӧ���ǰɡ�
	return 0;
}