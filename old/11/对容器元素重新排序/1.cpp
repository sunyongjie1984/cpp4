#include <iostream>
#include <string> // ������: the quick red fox jumps over the slow red turtle
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<string> words(10);
	// �����±꣬ʵ��ѭ������
	for (vector<string>::size_type i = 0; i != words.size(); i++)
	{
		cin >> words[i];
	}
	sort(words.begin(), words.end());
	// ���õ�������ʵ��ѭ�����
	for (vector<string>::iterator iter = words.begin(); iter != words.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	
	vector<string>::iterator end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

    for (vector<string>::iterator iter2 = words.begin(); iter2 != words.end(); iter2++)
	{
		cout << *iter2 << " ";
	}
	return 0;
}