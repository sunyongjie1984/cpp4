bool (*pf)(const int&, const int&); // ������һ������ָ��
bool* ppf(const int&, const int&);   // ������һ������

// �ö����ʾcmpFcnΪһ��ָ������ָ���������֡�
// cmpFcnΪһ�������������������������ġ�
// ������Ϊ��ָ�򷵻�ֵΪbool���Ͳ���������const int�����βεĺ�����ָ�롣
typedef bool (*cmpFcn)(int const &, int const &);

bool aaa(int const & a, int const & b)
{
	return 1;
}

int main()
{
	// ָ������ָ��ĳ�ʼ���븳ֵ
	// �����ú�������û�е��øú���ʱ�����������Զ�����Ϊָ������ָ�롣
	// bool lengthCompare(string const &, string const &); ������Ϊ
	// bool (*)(string const &, string const &);
	// ����ʹ�ú������Ժ���ָ���ʼ��
	
	return 0;
}