#include <iostream>
#include <string>
using namespace std;

extern int test;  //����
int p;            //����  ��������ȫ�ֱ��������ж����ں�������ı�������ȫ�ֱ������������˴洢�ռ䡣

                      // in linux extern in this way will generate a warning
extern int kkk = 30;  //�����Ƕ��壬��Ȼ����extern�����Ƿ����˴洢�ռ䣬���Բ���˵�������������÷����ԡ�

int main()
{
    // �ֲ���������Ӧ���Զ������ں��������ھ���������������Ǵ�����
    // ����ڶ���ʱ�ṩ�˳�ʼ��ʽ����ôÿ�δ�������ʱ�����󶼻ᱻ����ָ���Ĵ��á�
    // ����δ��ʼ���������������;ֲ��������ֵ��ȷ����
    int a = 10;  // ����
    int b;       // ����δ��ʼ��
    cout << a << endl;
    cout << b << endl;
    cout << p << endl;


    return 0;
}
