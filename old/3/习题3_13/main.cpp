#include <iostream>
#include <vector>
using namespace std;
//using std::vector<int>::size_type;
int main()
{
	vector<int> ivec;
	int ival;

	cout << "Enter numbers(Ctrl+z to end):" << endl;
	while (cin >> ival)
	{
		ivec.push_back(ival);
	}
	
	if (ivec.size() == 0)
	{
		cout << "No element?!" << endl;
		return -1;
	}
	// ��������������Ҫ�������ˣ����û�������䣬��ô�����������������Ԫ�ظ���ʱ�������
	// ���⣬���ھͺ��ˡ�������������Control + z Ȼ������Enter����
//	cout << endl;
	// �ֳ��������ˣ��Ҽ���cout << endl;������֮������������ʱ���Ȼ��Control + zȻ������
	// Enter�������ǣ�����ż����ʱ��Ͳ�������Enterֱ�ӵ��ԾͰѽ������ˡ���Щ�������⣬
	// �����˷���������һ������ԭ��ġ�
	cout << "Sum of each pair of adjaent elements in the vector:"
		 << endl;

	for (vector<int>::size_type ix = 0; ix < ivec.size() - 1; ix = ix + 2)
	{
		cout << ivec[ix] + ivec[ix + 1] << "\t"; // ��֪��һ���ˣ�һ���ǵ���������ʱ�������
		if ((ix + 1) % 6 == 0)                   // ������ĳ�ִ���Ȼ�����߰����ַ���ʲô�¡�
		{
			cout << endl;
		}
	}

	if (ivec.size() % 2 != 0)
	{
		cout << endl
			 << "The last element is not been summed "
			 << "and its value is "
			 << ivec[ivec.size() - 1 ]
			 << endl;
	}
	return 0;
}
