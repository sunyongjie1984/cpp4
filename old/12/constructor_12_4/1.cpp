#include "Sales_item.h"
using namespace std; // ���ڱȽϸ�����������ļ������캯���ˡ�
int main()
{
//	Sales_item item1("I Love China", 1, 10); // ��
	Sales_item item; // ISBN: �մ�
	Sales_item item1("I Love China"); // ISBN: I Love China
	Sales_item item2(cin); // ����ISBN�� cin�Ǻ�

	Sales_item *p = new Sales_item;
	cout << *p << endl;

	cout << item << endl;
	cout << item1 << endl;
	cout << item2 << endl;
	return 0;
}