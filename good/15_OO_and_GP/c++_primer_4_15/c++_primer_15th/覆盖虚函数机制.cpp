#include "Bulk_item.h"
int main()
{
    Bulk_item a("sunyongjie", 20, 10, 0.9); // isbn sunyongjie, price 20, min_qty 10
    // , discount 0.9
    Item_base* p = &a; // ָ��������ָ�뱻��ֵΪ�������ĵ�ַ

    a.display_datamember();  // û��ʲô˵�ģ����������Լ��Ķ���
    p->display_datamember(); // ��̬�󶨷�������������ĺ���
    p->Item_base::display_datamember(); // ��ν�����麯�����û���
    getchar();
    return 0;
}
