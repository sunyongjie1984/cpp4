#include "bookexcept.h"
#include "Sales_item.h"
#include <iostream>

using std::istream;
using std::ostream;

// assumes that both objects refer to the same isbn
Sales_item& Sales_item::operator+=(Sales_item const & rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// throws exception if both objects do not refer to the same isbn
Sales_item operator+(Sales_item const & lhs, Sales_item const & rhs)
{
    if (!lhs.same_isbn(rhs))
    {
        // �����쳣���Ͷ�����
        throw isbn_mismatch("isbn mismatch", lhs.book(), rhs.book());
        // throw out_of_stock("isbn mismatch");
    }

    Sales_item ret(lhs);  // copy lhs into a local object that we'll return
    ret += rhs;           // add in the contents of rhs
    return ret;           // return ret by value, Ҳ���Ƿ�����ret�ĸ�����˳��˵һ��
                          // ���ؾֲ�����ĸ����ǰ�ȫ�ģ����ؾֲ�����ĵ�ַ�ǲ����Եģ�
                          // ����һ���ֲ�����ĵ�ַ����˵��Ҫʹ�������ַ��Ӧ�ľֲ�������
                          // ������ֲ������Ѿ���������������
}

istream& operator>>(istream & in, Sales_item & s)
{
    double price;
    in >> s.isbn >> s.units_sold >> price;
    // check that the inputs succeeded
    if (in)
    {
        s.revenue = s.units_sold * price;
    }
    else
    {
        s = Sales_item();  // input failed, reset object to default state
    }
    return in;
}

ostream& operator<<(ostream & out, Sales_item const & s)
{
    out << s.isbn << "\t" << s.units_sold << "\t"
        << s.revenue << "\t" <<  s.avg_price();
    return out;
}

double Sales_item::avg_price() const
{
    if (units_sold)
    {
        return revenue / units_sold;
    }
    else
    {
        return 0;
    }
}
