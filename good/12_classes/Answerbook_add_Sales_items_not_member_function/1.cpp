#include "Sales_item.h"
using std::cout;
using std::cin;
using std::endl;
// Sales_item add(const Sales_item &a, const Sales_item &b); // Ӧ������Ϊ�Ѿ������������������ԾͲ���������������
int main()
{
	Sales_item item1(cin);
	Sales_item item2(cin);
	cout << add(item1, item2) << endl;
	return 0;
}
  // ��������Ұ���������������ԭ�����ǿ��Եġ�
Sales_item add(const Sales_item &a, const Sales_item &b)
{
	Sales_item temp;
	temp.isbn = a.isbn;
	temp.revenue = a.revenue + b.revenue;
	temp.units_sold = a.units_sold + b.units_sold;
	return temp;
}