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

        catch (std::runtime_error const & e) // ���������ڲ����ܲ��񣬵��±�׼�����terminate����
        {                                    // terminate����abort������ǿ����������������˳�
            std::cout << e.what() << std::endl;
        }
        //catch (std::exception const & e)   // ��ջչ�������У������������׳��쳣�������Լ�������
        //{
        //    std::cout << e.what() << std::endl;
        //}
    }
private:
    int i;
};

void func()
{
    c_book const a;                        // ջչ�������a����������
    try
    {
        throw std::exception("exception"); // �׳��쳣
    }
    catch (std::runtime_error const & e)   // û�в�����ʹջչ��
    {
        std::cout << e.what() << std::endl;
    }
}                                          // ����ö���a����������

int main()
{
    try
    {
        func(); // �������c++ primer 4th page 583����������Ӧ�ôӲ��׳��쳣
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
