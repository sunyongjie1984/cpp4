#include <exception>
#include <string>
#include <iostream>

class my_base_exception : public std::exception {
public:
    my_base_exception(std::string const & str = "sunyongjie" ) : m_name(str), m_age(28) { }
    virtual void print() const { std::cout << m_name << " " << m_age; }
    virtual ~my_base_exception() throw() { }
private:
    std::string m_name;
    int m_age;
};



class my_derive_exception : public my_base_exception {
public:
    //my_derive_exception(std::string const & str) : m_b_funny(true) { }
    //my_derive_exception(std::string const & str) : my_base_exception(), m_b_funny(true) { }
    // �����������������my_derive_exception�Ķ���m_nameΪ���ַ�����
    my_derive_exception(std::string const & str) : my_base_exception(str), m_b_funny(true) { }
    void print() const { my_base_exception::print(); std::cout << " " << m_b_funny; }
private:
    bool m_b_funny;
};



int main()
{
    my_base_exception const a;
    my_derive_exception const b("yongjisu");
    a.print();
    std::cout << std::endl;
    b.print();
    std::cout << std::endl;
    try
    {
        throw b;
    }
    //catch(my_derive_exception const & e) // ���catch��������׽
    //{
    //    e.print();
    //    std::cout << std::endl;
    //}
    catch(my_base_exception const & e)   // ���catch�Ƕ�̬��
    {
        e.print();
        std::cout << std::endl;
    }
//     catch(my_base_exception const e)       // �ضϷ�������ʵ���CBase base = child;һ����
//     {
//         e.print();
//         std::cout << std::endl;
//     }  
    const my_base_exception* const pBase = &b;
    pBase->print();
    std::cout << std::endl;
    try
    {   // c++ primer 4 page 582�����׳��ж�ָ����н����ã������ò����Ķ�����ָ��������ƥ�䣬
        throw *pBase; // ��̬�󶨲�������throw����һ���׳����ʽ������������������ʽ�����쳣����
    }             
    //catch(my_derive_exception const & e) // ��������ܲ�����Ϊ���಻�ܲ�������쳣����
    //{
    //    e.print();
    //    std::cout << std::endl;
    //}
    //catch(my_base_exception const & e)   // ������Ϊ������쳣����ƥ��
    //{
    //    e.print();
    //    std::cout << std::endl;
    //}
    catch(...)
    {
        std::cout << "exception unknown" << std::endl;
    }

    std::cin.get();
    return 0;
}
