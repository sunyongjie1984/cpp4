#include <iostream>
#include <vector>
#include <string>
using namespace std;

// vector   
//���������˽����vector�������������ʲô��
//�ǲ��ǳ��ȿ�֪��������ָ����ŵ�����ʲô��

void main()
{
	/*string s;
	cout << ivec.max_size() << endl;
	cout << s.data() << endl;
	if(s.compare(" "))
	{
		cout << "is null" << endl;
	}*/

	/*vector<string> text;
	string word;
	while(cin >> word)
	{
		text.push_back(word);
	}
	cout << "vector's length is  " << text.size() << endl;*/

	vector<int> ivec(10,100);
	/*cout << ivec.size() << endl;*/
	//cout << ivec[0] << endl;
	int a[10];
	int b[4];
	int c[5];
	int* p[5] = {a,b};
	int(* q)[5] = &c;
}

