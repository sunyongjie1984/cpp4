#include "Account.h"
using std::cin;
using std::cout; 
int main() 
{
	              // ��������һ����ˣ�ͻȻ���֣�һû��ֻ�������ֵĹ��캯����
//	Account test; // ��û��������λ�������������Sales_item�õ���ʾ
//	cin >> test;  // �������һ����Sales_itemѧϰ���õĹ��캯��
	Account test;   
	cin >> test;
	cout << test << endl;

	Account test2(cin);
	cout << test2 << endl;

	Account myAccount("syj", 10000);
	Account myAccount2("syj2", 10000);
//	myAccount = myAccount2; // ������Խ��У�˵����������������Ĭ�Ͽ������캯����˵��������=��
	                        // ������Ӧ���������˲��������Ǻǡ�
	
//	double rate = myAccount.rate(); 
	double rate = Account::rate(); // ��̬������Ȼ��������ֱ�ӷ��ʣ����ö���Ҳ���ԡ�
	myAccount.applyint(); // applyint = "ִ����Ϣ",֮���ҵ�Ǯ�ͱ���ˣ��Ǻ�

	cout << "owner" << "\t\t\t" << "amount" << "\n\n";
	write(cout, myAccount); // �ܹ��������ز����������ı�����
	cout << myAccount << "\n\n";
	cout << "the interestRate is: " << rate << "\n\n\n";
	
	
	// �����µ�interestRate
//	Account::rate(5.0); // ���ַ��������Է���static�ģ�1������ֱ�ӣ�2�ɶ���ֱ�ӡ�
	myAccount.rate(5.0);
	rate = Account::rate(); // ����interestRate
	myAccount2.applyint(); //����������Ϣ֮���amount
	

	cout << "owner" << "\t\t\t" << "amount" << "\n\n";
	write(cout, myAccount2);
	cout << myAccount2 << "\n\n";
	cout << "the interestRate is: " << rate << "\n\n";
	
	
	// ���
	myAccount.deposit(5000);
	cout << "���5000֮��myAccount�����" << endl;
	cout << myAccount << "\n\n";
	
	
	// ȡ��
	cout << "ȡ��10000֮��myAccount�����" << endl; 
	bool i = myAccount.withdraw(10000);
	if (i)
	{
		cout << myAccount << endl;
	}
	else
	{
		cout << "not enough amount!" << endl;
	}

	return 0;
}