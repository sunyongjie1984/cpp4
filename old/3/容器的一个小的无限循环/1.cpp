// ��Ȼ��һ��СС�ĳ��򣬿���ȴ��ӳ��һ����ʵ���������Զ�̬�Ķ����С����
// ����������ǲ��ܹ�ʵ�������Ĳ����ġ�

#include <iostream>
#include <string> // �����õ�string�Ĺ��캯�����������㲻�����ͷ�ļ��ǲ��еġ�
#include <vector>
using namespace std;
int main()
{
	vector<string> ivec(2,"I Love China!");
	// ��׼����ѭ��
	for (vector<string>::size_type ix = 0; ix != ivec.size(); ix++)
	{
		ivec.push_back("syj"); // �ǲ��������һ���㷨
		cout << ivec[ix];
	}
	return 0;
}