/* C++ �汾 */
#include <iostream>
#include <limits> // Ϊ��ʹ��numeric_limits

using std::cout;
using std::endl;
using std::cin;
int main( )
{
	int value; 
	for (;;) {
		cout << "Enter an integer: ";
		cin >> value;
		/* �����Ƿ��ַ��������������ڳ���״̬��
		* Ϊ�˼�����ȡ���룬����Ҫ����clear����
		* ������������Ĵ����ǣ�Ȼ����ܵ���
		* ignore������������뻺�����е����ݡ� */
		cin.clear( );
		/* numeric_limits<streamsize>::max( ) ���ػ������Ĵ�С��
		* ignore �����ڴ˽������뻺�����е�������ա�
		* �����������ľ����÷������в�ѯ�� */
		cin.ignore( std::numeric_limits<std::streamsize>::max( ), '\n' ); 
		cout << value << '\n'; 
	}
	return 0;
}