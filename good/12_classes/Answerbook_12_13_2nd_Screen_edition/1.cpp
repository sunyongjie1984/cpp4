#include "Screen.h"
int main()
{
    // ����������do_display����������δ���const�������const�������ʾ
    cout << "��һ�������Ĭ�ϵ�contentsҲ�����ɿո�����" << endl;
    Screen myScreen(5, 6);
    myScreen.move(4, 0).set('#').display(cout);

    cout << "\n\n";
    cout << "�ڶ����������Դ�ļ��и���ֵ" << endl;
    Screen myScreen2(5, 6, "123456123456123456123456123456123456");
    myScreen2.move(4, 0).set('#').display(cout);

    cout << "\n\n";
    cout << "��������õ���const��display��������const�Ķ������" << endl;
    const Screen myScreen3(5, 6, "123456123456123456123456123456123456");
    myScreen3.display(cout); // ��Ϊ�����.move .set���Ƿ�const�ĺ���

    return 0;
}
