#include <iostream>     // standard library
#include "bookexcept.h" // user difine header
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

void process(double) { } // ��������Ǹ�ʲô�ģ�

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
            sum = item1 + item2; // calculate their sum
            cout << sum << endl; // use sum
        }
        catch (isbn_mismatch const &e) // runtime_error��logical_error����what�����Ա
        {
            cerr << e.what() << ": left isbn(" << e.left
                << ") right isbn(" << e.right << ")" << endl;
        }
        catch (...)
        {
            cerr << "exception unknown" << endl;
        }
    }
    return 0;
}