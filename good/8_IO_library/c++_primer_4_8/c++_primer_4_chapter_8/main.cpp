#include <iostream>
#include <stdexcept>
#include <limits> // Ϊ��ʹ��numeric_limits

using namespace std;
int main()
{
	int ival;
	while (cin >> ival, !cin.eof())
	{
		if (cin.bad())
		{
			throw runtime_error("IO stream corrupted");
			return 1;
		}
		if (cin.fail()) // ���ַ�����widows�¿��Գɹ�����linuxʱ���ܳɹ������ܲ������һ����������һ�ַ�����
		{				// �������е���������ô��յĲ��
			cerr << "bad data, try again\n";
			cin.clear();
			cin.sync();
			//cin.clear(istream::failbit); // ���У���֪����ô����
			continue;
		}

		//if (cin.fail()) // no
		//{				
		//	cerr << "bad data, try again\n";
		//	//cin.clear();
		//	cin.clear(istream::failbit); 
		//	cin.clear(istream::badbit);		

		//	continue;
		//}

		//if (cin.fail()) // no
		//{				
		//	cerr << "bad data, try again\n";
		//	//cin.clear();
		//	cin.setstate(istream::badbit | istream::failbit);
		//	cin.ignore( std::numeric_limits<std::streamsize>::max( ), '\n' );
		//	continue;
		//}
	}
	return 0;
}	