#include <iostream>
#include <string>

class Sales_item {
private: // �Ƚ�������private�ĺ���
    friend bool compare(Sales_item const &, Sales_item const &);
    friend bool operator==(Sales_item const &, Sales_item const &); // ��Ԫ��ʽ�����ز���������ȫ�ֺ���

public:
    friend std::istream& operator>>(std::istream &, Sales_item &); // ��Ԫ��ʽ�����ز���������ȫ�ֺ���
    friend std::ostream& operator<<(std::ostream &, Sales_item const &);

    Sales_item(std::string const & book): isbn(book), units_sold(0), revenue(0.0) { }
    Sales_item(std::istream & is) // �����ص�������������嵥��������������Ϊ�����Ĺ��캯��
    {
        is >> *this;
    }

    // default constructor needed to initialize members of built-in type
    Sales_item(): units_sold(0), revenue(0.0) { }

public:
    // operations on Sales_item objects
    Sales_item& operator+=(Sales_item const &); // ��Ա������ʽ�����ز�����

    double avg_price() const;
    bool same_isbn(Sales_item const & rhs) const
    {
        return isbn == rhs.isbn;
    }
    std::string book() const
    {
        return isbn;
    }

private:
    std::string isbn;
    unsigned units_sold;
    double revenue;
};

// ȫ�ֵĲ��������ر���Ϊÿ������������һ������
// nonmember binary operator: must declare a parameter for each operand
Sales_item operator+(Sales_item const &, Sales_item const &);

inline bool operator==(Sales_item const & lhs, Sales_item const & rhs)
{
    // must be made a friend of Sales_item
    return lhs.units_sold == rhs.units_sold &&
        lhs.revenue == rhs.revenue &&
        lhs.same_isbn(rhs);
}

inline bool operator!=(Sales_item const & lhs, Sales_item const & rhs)
{
    return !(lhs == rhs); // != defined in terms of operator==
}

inline bool compare(Sales_item const & lhs, Sales_item const & rhs)
{
    return lhs.book() < rhs.book();
}
