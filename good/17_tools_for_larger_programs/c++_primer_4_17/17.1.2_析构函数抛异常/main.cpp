#include <iostream>
#include <exception>

class c_book {
public:
    c_book() { }
    ~c_book()
    {
        try
        {
            throw std::exception("exception in deconstructor");
        }
        catch (std::runtime_error const & e) // ���׳����쳣�����ǻ������͵ģ�catch˵����������Ϊ���࣬���ܲ���
        {
            std::cout << e.what() << std::endl;
        }
    }
private:
    int i;
};

void func()
{
    c_book const a;
}

int main()
{
    try
    {
        func();
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
