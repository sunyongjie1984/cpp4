#include <iostream>
#include <string>
#include <vector>
using namespace std;


string sa[10];
int ia[10];

int main(){
	unsigned const buf_size = 1024;  //ά��������ֵ���ڵ���1�ĳ������ʽ����������ֵ������ö�ٳ����������ʽ��ʼ��������const����
	int const b = 1024;
	int ib[b];
	int ia[buf_size];
	//int iaa[get_size()];
	int iaaa[4*7 - 14];
	//char st[11] = "fundamental";  //error  �ַ�������ֵ����Ϊ11���������������12��Ԫ�أ���һ�����ڴ�ſ��ַ�null

	
	string sa2[10];
	int ia2[10];
	cout << sa[0] << endl;
	cout << sa2[0] << endl;
	/*cout << ia[0] << endl;              //error  being used without initialized
	cout << ia2[0] << endl;*/

	//vector<int> ivec = {0,1,2};         //error
	
	const size_t array_size = 10;
	int arr[array_size];
	for (size_t ix = 0; ix != array_size; ++ ix)
	{
		arr[ix] = ix;
		cout << arr[ix] << endl;
	}
	int* p = arr;
	cout << *p << endl;
	return 0;

}