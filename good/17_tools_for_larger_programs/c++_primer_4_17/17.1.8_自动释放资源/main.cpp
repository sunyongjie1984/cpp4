#include <iostream>
#include <string>

class my_exception : public std::exception {
public:
    my_exception() { }

private:
    std::string m_priority;
};

class c_book {
public:
    c_book(): i(10), j(20) { }
    ~c_book()
    {
        std::cout << "c_book::~c_book()" << std::endl;
    }
private:
    int i;
    int j;
};

void func()
{   // ����ڴ���һ�����ᱻ�����ˣ���˵���ҵ���c_book�����쳣��ȫ�ģ�����Ҫ��ô�������أ����ϵ�������
    c_book const * const p = new c_book;
    try
    {
        throw my_exception();
    }
    catch(std::runtime_error const & e)
    {
        std::cout << e.what() << std::endl;
    }

    delete p;
}

void func2()
{
    c_book const * const p = new c_book;
    try
    {
        throw my_exception();
    }
    catch(std::runtime_error const & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(...)
    {
        delete p; // �������������ˣ��������ǲ���������ǲ���һ���ǳ��õ���ȫ�İ취
        std::cout << "exception unknown" << std::endl;
        throw;
    }
    delete p;
}
int main()
{
    try
    {
        //func();
        func2();
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
