#include <vector>
#include <iostream>
using namespace std;
//using std::endl;
//using std::cout; // cout��һ������
//using std::vector;
//using std::vector<int>::size_type; // size_type��һ�����ͣ�����������Щ���������,�������ɣ�
//using std::vector<int>::iterator;
//using std::vector<int>::const_iterator;
int main()
{   // ��ģ���ǲ���Ҳ��һ���࣬��������ǰ�����õ��������Ľ��ۣ�����û���˸������ǲ��ǶԵ�@.@~
	// vector��һ����ģ�壬vector<int>��һ�����ͣ�ivec�Ƕ�����,�����ǳ�ʼ����
	vector<int> ivec(10, 1);

	cout << ivec.empty() << endl; 
	cout << ivec.size() << endl;

	// ��ֵ
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
	{
		ivec[ix] = ix;
	}
	// ���ÿ��Ԫ��
	for (ix = 0; ix != ivec.size(); ++ix)
	{
		cout << ivec[ix] << ' ';
	}
	cout << endl;

	ivec.push_back(10);
	for (ix = 0; ix != ivec.size(); ++ix)
	{
		cout << ivec[ix] << ' ';
	}
	cout << "\n";

	// ��const_iterator�����ÿ��Ԫ��
	for (vector<int>::const_iterator iter2 = ivec.begin(); iter2 != ivec.end(); ++iter2)
	{
		cout << *iter2 << ' ';
//		*iter2 = 0; // ����ָ��cosnt����ĵ�����
	}
	
	return 0;
}
