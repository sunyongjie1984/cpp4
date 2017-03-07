#include <iostream> 
//using std::cout; using std::endl;
#include <string>  // ��Щ������ô�࣬��Ҫ����size_t��size_type����
#include <list>    // char*��Ӧsize_t��string��Ӧsize_type
#include <vector>
#include <cstddef>
using namespace std;
int main()
{
	// ̫�����ˣ����ڵ��Ĳ���ˣ���Щ�����Ӷ��úÿ����ɣ��ֵ�
    string words[] = { "stately", "plump", "buck", "mulligan" };
	// �󳤶�

    // ����sizeof(char*)���
//  list<string>::size_type words_size = sizeof(words) / sizeof(char*); 
	// ����sizeof(string)�೤
	list<string>::size_type words_size = sizeof(words) / sizeof(string);  

	cout << words_size << endl;
	// ����
	// ʹ��sizeof(string)�ķ����ܹ��������������Ԫ�صĸ�����
    list<string> words2(words, words + words_size);
	// ���
	
	for (list<string>::size_type j = 0; j != words_size; ++j)
	{
//		cout << words2[j] << endl; // Ϊʲô��˵�ҵ����������[]û�ж�����
	}
	
	for (list<string>::iterator m = words2.begin(); m != words2.end(); m++)
	{
		cout << *m << " ";
	}
    cout << endl;

	// ������һ��ʵ�飬�������ʲô���Ϳɲ�����
	int a[] = { 1, 3, 5, 7 };
	vector<int> b(a, a + 4);
	for (vector<int>::iterator p2 = b.begin(); p2 != b.end(); p2++)
	{
		cout << *p2 << " ";
	}
	cout << endl;
	
	// ����һ��ʵ�� ���Ҫǿ�ҵ����һ�����ӶԱȣ���������
	char *a2[] = { "ILoveChina", "YesI do" };
    size_t length = sizeof(a2) / sizeof(char*);
	vector<char*> b2(a2, a2 + length);

	for (vector<char*>::iterator p3 = b2.begin(); p3 != b2.begin() + length; p3++)
	{
		cout << *p3 << " ";
	}

    return 0;
}
