/* 15.3.1 �����ൽ�����ת��
�����һ�����������
1.�����ʹ�����ĵ�ַ�Ի�������ָ����и�ֵ���ʼ����
2.Ҳ����ʹ���������������ó�ʼ���������͵����á�
3.�ϸ�˵�����Զ���û�����Ƶ�ת�������������Ὣ���������Ͷ���ת��Ϊ�������Ͷ���
4.����һ�����ʹ���������Ͷ���Ի��������и�ֵ���ʼ����
 */
#include <iostream>
#include "Bulk_item.h"
using namespace std;

void print_total(ostream & os, const Item_base & item, size_t n)
{
    os << "ISBN " << item.book() << "\tnumber sold: " << n << "\ttotal price: " 
        << item.net_price(n) << endl;
}

int main()
{
    Bulk_item a("sunyongjie", 20, 10, 0.1); // isbn sunyongjie, price 20, min_qty 10
                                            // , discount 0.9
    Bulk_item b("wangjie", 20, 10, 0.2);
    Item_base * p = &a; // ��ʼ��
    p->display_datamember();

    p = &b;             // ��ֵ
    p->display_datamember();

    std::cout << "............................\n" << std::endl;

    Item_base c("sunyongjie2", 20);
    Item_base & q = c;  // ��ʼ��ʱû�и���������һ������Ķ�������ã��ں���ͨ����ֵ����
                        // ������������������������ǲ��ܹ�������̬�󶨵�
                        // huge mistake, the following statement means reassign c with a, not
                        // reference q binds to another object, reference for its whole life binds to one object!!!!
    q.display_datamember();
    q = a;              // q is another name of object c, this assignment assign a to c
    q.display_datamember();

    q = b;
    q.display_datamember();
    std::cout << "............................\n" << std::endl;

    Item_base & m = a;
    m.display_datamember(); // ��̬�󶨴���

    Bulk_item & d = b;
    Item_base & e = d;
    e.display_datamember(); // ��̬�󶨴���
    std::cout << "............................\n" << std::endl;

    Item_base f = a;        // ��֪������Ϊʲô��������һ������Ҳ������
    f.display_datamember(); // ������������ʼ�����������ô������(this page line 6)������F11���Ծ�Ȼû����ʾ
                            // ��û�й��캯�������Խ���ȥ��ԭ���ǲ�����Ϊ��Ȼ��һ�����壬���ǲ�û���߹��캯��������
                            // ֱ��ͨ���ض������������ಿ�֣�Ȼ��ȥ��ʼ���˻���Ķ���f����΢��
    print_total(cout, a, 10);
    print_total(cout, f, 10);
    return 0;
}
