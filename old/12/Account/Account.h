#include <string>
#include <iostream>
using std::string;
using std::istream;
using std::ostream;
using std::endl;
class Account 
{
public:
	// ���캯��1
	Account(string own, double amnt): owner(own), amount(amnt) 
	{
	} 
	
	// ���캯��2
	Account() 
	{ 
	} 
	             
	// ���캯��3
    /*	
    Account(): amount(10000) // ��Ҳ�ǺϷ��ġ�	// ���캯��4
	{
	} 
	
	Account(): owner("syj"), amount(10000) 
	{
	}
	*/
	// ���캯��5
	Account(istream& is) // ��Sales_items��ѧϰ�ġ�
	{
		is >> *this;
	} 

	void applyint() 
	{ 
		amount += amount * interestRate;
	}

	static double rate() 
	{
		return interestRate;
	}
	static void rate(double newRate)
	{
		interestRate = newRate; 
	}

	void deposit(double amnt) 
	{
		amount += amnt; 
	}                                             // ���и��������ӷ�����amount��ֵ����û����ô
	                                              // ������ΪֻҪ����������ǿ��Կ�����ô������
	                                              // �����ǶԵģ�����amount�������ô�����Ҫ��һ
	                                              // �롣
	bool withdraw(double amnt); // ���������֪����ʲô�ã�����˵����һ��bool�͵�ֵ������������
	                            // ���ǲ���Ҫ�����û�ȡǮ�����룬����if�С�
	double getBalance() // ��ѯ���
	{
		return amount;
	} 

	friend ostream& write(ostream&, const Account&); // ���Լ���������
	friend istream& operator>>(istream&, Account&);
	friend ostream& operator<<(ostream&, const Account&); // �������������

private:
	string owner;
	double amount;
	static double interestRate;
};


