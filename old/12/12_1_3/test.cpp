#include "Screen.h"
using std::cout;
using std::endl;
int main()
{
	Screen myscreen(5, 6, "I Love China\nI Love China\nI Love China\nI Love China\nI Love China\n");
    char cval = myscreen.get(); // call Screen::get()
//	cval = myscreen.get(0, 0); // calls sreen::get(index, index)
	cout << myscreen << endl;
	cout << cval << endl;
//	cout << myscreen.get(0.0, 0.0) << endl; // �������ֻ��������û�к�����
	return 0;
}