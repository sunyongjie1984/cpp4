#include <iostream>     // standard library
#include "bookexcept.h" // user difine header
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    // use hypothetical bookstore exceptions
    Sales_item item1;
    Sales_item item2;
    Sales_item sum;

    // read two transactions
    while (cin >> item1 >> item2)
    {
        try
        {
            sum = item1 + item2;
            cout << sum << endl;
        }
        //catch (const isbn_mismatch& e)
        //{
        //    cerr << e.what() << ": left isbn(" << e.left
        //        << ") right isbn(" << e.right << ")" << endl;
        //}

        // c++ primer 4 page 584������ƥ��Ĵ�����룺
        // ����ӷ�const��const��ת��
        // ����������ൽ�����ת�����ǲ�����Ϊ��������һ�����ڻ����Ա��
        // ������ת��Ϊָ���������͵�ָ�룬������ת��Ϊָ�������͵�ָ��
        catch (std::logic_error const & e)
        {
            cerr << e.what() << endl;
        }
    }
    return 0;
}
