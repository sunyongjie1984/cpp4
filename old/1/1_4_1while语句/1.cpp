#include <iostream>
using namespace std;
int main()
{

	// ��չ1
	char i; // ��������൱������˼���������Ҳ�����
	int j = 'a';
	cout << j << endl;
// 	while (cin >> i && i != 'a') 
	while (cin >> i && i != 97) // �����仰��һ���ģ���Ϊ�Ҷ���i���ַ��ͣ��԰ɣ�
		cout << "I Love China" << endl;
	
    /*
	// ��չ2
//	char i; 
	char *p = "I Love China";
	int i;
	while (cin >> i && p != "42") 
		cout << "I Love China" << endl; */
	return 0;
}