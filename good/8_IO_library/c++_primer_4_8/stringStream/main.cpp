#include <vector>
#include <string>
#include <iostream>
#include <sstream>
using namespace std; 

int main()
{
	string str("123 456");
	istringstream iss(str);   //�ڴ����е�������str�ĸ�������������
	// ����>>���������Զ�ת��Ϊint,string�����ͣ��ܷ���
	// int itmp;
	// while (iss >> itmp)   //������Ȼ���Զ�ת��Ϊint��
	//      cout << itmp + 1 << endl;
	//cout << "................................................\n";

	string strtmp;
	while(iss >> strtmp)  //������Ȼ���Զ�ת��Ϊstring��
		cout << strtmp << endl;

}