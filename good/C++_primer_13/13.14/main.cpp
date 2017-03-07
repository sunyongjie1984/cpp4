#include <vector>
#include <iostream>
using namespace std;

struct Exmpl
{
	//Ĭ�Ϲ��캯��
	Exmpl()
	{
		cout << "Exmpl()" << endl;
	}
	//���ƹ��캯��
	Exmpl(const Exmpl&)
	{
		cout << "Exmpl(const Exmpl&)" << endl;
	}
	//��ֵ���캯��
	Exmpl& operator = (const Exmpl&)
	{
		cout << "operator = (const Exmpl&)" << endl;
		return *this;
	}
	//��������
	~Exmpl()
	{
		cout << "~Exmpl()" << endl;
	}
};

void func1(Exmpl obj)      //�β�ΪExmpl����
{

}

void func2(Exmpl& obj)     //�β�ΪExmpl���������
{

}

Exmpl func3()
{
	Exmpl obj;
	return obj;           //����Exmpl����
}



int main()
{
	Exmpl eobj;         //����Ĭ�Ϲ��캯������Exmpl����
	func1(eobj);        //���ø��ƹ��캯��
						//���β�Exmpl���󴴽�Ϊʵ��Exmpl����ĸ���
						//����ִ����Ϻ�����������������β�Exmpl����

	func2(eobj);        //�β�ΪExmpl��������ã�������ø��ƹ��캯������ʵ��
	eobj = func3();     //����Ĭ�Ϲ��캯�������ֲ�Exmpl����
						//��������ʱ���ø��ƹ��캯��������Ϊ����ֵ������Exmpl����
						//Ȼ������������������ֲ�Exmpl����
						//Ȼ����ø��Ʋ�����
						//ִ���긳ֵ������
						//������������������Ϊ����ֵ������Exmpl����

	Exmpl* p = new Exmpl;    //����Ĭ�Ϲ��캯����̬����Exmpl����
	vector<Exmpl> evec(3);   //����Ĭ�Ϲ��캯��
							 //����һ����ʱֵ����
						     //Ȼ��3��ʹ�ø��ƹ��캯��
							 //����ʱֵExmpl���Ƶ�vector����evec��ÿ��Ԫ��
							 //Ȼ�������������������ʱֵExmpl����
	delete p;                //������������������̬������P����
	
	return 0;                //evec��eobj�����ڽ������Զ�����������������
							 //����evec�������������3�Σ���Ϊevec��3��Ԫ�أ�
	     

}