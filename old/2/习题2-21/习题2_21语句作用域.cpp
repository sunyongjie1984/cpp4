#include <iostream>
#include <string>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	cout << "Sum from 0 to " << i  // ����˵���Ϸ�����Ϊi�������򣬵���ȴ�����ã�������iû�б�д����ԭ�ʰ�
		 << " is " << sum << endl; // ��ϰ��2_20�ҵõ����ջ�
	return 0;
}