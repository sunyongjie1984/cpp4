#include <iostream>
#include <string>
using namespace std;
/*
using std::cin;
using std::cout;
using std::string;
using std::endl;
*/
/*
int main() // �����������˽�һЩ�������顣
{          // ����hello world �س� ������hello world���Ҫ�úÿ�һ��
	string s; // Ȼ��main����2����������ӡ�
	cin >> s;
	cout << s << endl; // �о��˴���endl��û��ˢ�����е����ݣ���Ϊ��һ�ε�hello world�е�world
                       // ����д����s2���棬����Ϊʲô�أ�
	string s2, s3;
	cin >> s2 >> s3;
	cout << s2 << ' ' << s3 << endl;
	return 0;
}
*/
int main()
{
	string s; // �Ҳ�����������ķ�����һ�ǣ�1. hello �س� 3 �س� hello world �س�
	cin >> s; // ���ǣ�hello 3 hello world �س�
	cout << s << endl; // ���ǣ�hello world hello world
                       // �����ǰ���ֶ��ܹ�����������Ҿ��þ�����û�г��ִ��󣬵�����
	int a;             // �ͳ�����
	cin >> a;
	cout << a << endl;

	string s2, s3;
	cin >> s2 >> s3;
	cout << s2 << ' ' << s3 << endl;

	return 0;
}