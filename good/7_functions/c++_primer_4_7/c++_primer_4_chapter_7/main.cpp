#include <iostream>

//int add(int i) 
//{
//	return 10;
//}

// �ɻ��ں����������β���ָ��const������ָ���const����ʵ�ֺ�������
int add(int const & i) // ���������ԣ���������ľͲ����ˡ�ǿ�����á�
{
	return 12;
}

int add(int& i)
{
	return 13;
}

int main()
{
	int a = 10;
	int const b = 20;
	std::cout << add(a) << std::endl;
	std::cout << add(b) << std::endl;
	return 0;
}