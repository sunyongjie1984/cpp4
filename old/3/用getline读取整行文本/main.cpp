#include <iostream> // Щ����Ͷ���δ֪��Ŀ��string����һ��ѧϰ
#include <string>
using namespace std;
int main()
{
	string line; // �����Ͽ���������ܹ�һ��һ�е����������һ������
	while (getline(cin, line)) // ��һ����һ���ʵ���������кö��֪ʶ
	{                          // Ҫѧϰ��
		cout << line << endl;
	}

//	getline(cin, line);
//	cout << line << endl;
	return 0;
}