#include <vector>
#include <list>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	vector<int> ivec;
	ivec.push_back(10);
	ivec.push_back(11);
	for (vector<int>::iterator ix = ivec.begin(); ix != ivec.end(); ix++)
	{
		cout << *ix << " ";
	}
	cout << endl;
	
//	vector<int> ivec2(ivec);
	vector<int> ivec2(ivec.begin(), ivec.end());
	for (vector<int>::iterator ix2 = ivec2.begin(); ix2 != ivec2.end(); ix2++)
	{
		cout << *ix2 << " ";
	}
	cout << endl;

    list<string> svec(10, "I Love China!");
	for (list<string>::iterator iy = svec.begin(); iy != svec.end(); iy++)
	{
		cout << *iy << " ";
	}
	cout << endl;

	list<string> slist(svec.begin(), svec.end());

    for (list<string>::iterator iz = slist.begin(); iz != slist.end(); iz++)
	{
		cout << *iz << " ";
	}

	// �����������p266û�гɹ�����֪��Ϊʲô��������û����size_t������

	char *China[] = { "I Love China", "China Love me", "yes,he does" };
	unsigned int words_size = sizeof(China) / sizeof(char*);
	list<string> SYJ;
//	list<string> SYJ(China, China + words_size);
    for (list<string>::iterator p = SYJ.begin(); p != SYJ.end(); p++)
	{
		cout << *p << " ";
	}
	return 0;
}