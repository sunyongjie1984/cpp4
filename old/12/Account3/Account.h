#include <string>
#include <iostream>
using namespace std;     // ���е�ԭ��ɷ����Ϊ��os��һ���������
//using std::ostream;    // ����������std���������ֻ��һ�������ܶ���
//using std::string;     // �����������������õģ�����string������
class Account            // �ɱ������Դ��ı�׼���ࡣ
{                        // ��֪��Ϊʲô�����������ֿ����ˣ����ˣ�
public:
	Account(string own, double amnt) : owner(own), amount(amnt) {}
	friend ostream& operator<<(ostream&, const Account&);
private:
	string owner;
	double amount;
}; 
ostream& operator<<(ostream& os, const Account &object)
{
	os << object.owner << "\t\t" << object.amount;
	return os;
}