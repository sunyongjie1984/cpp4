#include <iostream>
#include "Bulk_item.h"
using std::ostream;
using std::cout;
using std::endl;
// ��������������������ﶼ�ǿ��Եģ�����ȫ�ֵĶԲ���
void print_total(ostream& os, const Item_base& Item, size_t n)
{
	os << "ISBN: " << Item.book() 
	   << "\tnumber sold: " << n << "\ttotal price: "
	   << Item.net_price(n) << endl;
}
int main()
{
	Item_base a("I Love China", 100);
	print_total(cout, a, 5);

	Item_base b;
	print_total(cout, b, 5);

	return 0;
}