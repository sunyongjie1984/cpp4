#include "Account.h"
//using namespace std;
using std::cout;
using std::endl;
int main()
{
	Account myAccount("SunYJ", 10000);

	cout << "name\t\t" << "amount" << endl;
	cout << myAccount << endl;

	return 0;
}
/*
ostream& operator<<(ostream& os, const Account& object)
{
	os << object.owner << "\t\t" << object.amount;
	return os;
}*/ // �����������д�����������ȫ�ֵģ����Ҷ�����ģ����������ﶨ��
    // ���Ĺ���using namespace �����߰�����¾ͺ�����ͷ�ļ���һ���ġ�
