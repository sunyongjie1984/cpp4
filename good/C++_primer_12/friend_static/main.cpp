#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Screen {
	friend class Window_Mgr;
public:
	typedef string::size_type index;
	char get() const {
		return contents[cursor];
	}
	inline char get(index ht, index wd) const;
	index get_cursor() const;
	Screen(index hght, index wdth, const string &cntnts);

	Screen& move(index r, index c);
	Screen& set(char);
	Screen& display(ostream &os);

private:
	string contents;
	index cursor;
	index height, width;
};
Screen::Screen(index hght, index wdth, const string &cntnts):
contents(cntnts), cursor(0), height(hght), width(wdth) { }

char Screen::get(index r, index c) const
{
	index row = r * width;
	return contents[row + c];
}

inline Screen::index Screen::get_cursor() const
{
	return cursor;
}
// �����Ǹ���ĸ
Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
// ȷ���Ǹ�λ��Ҫ����ֵ
Screen& Screen::move(index r, index c)
{
	index row = r * width;
	cursor = row + c;
	return *this;
}
// ��ʾ�����ַ���
Screen& Screen::display(ostream &os)
{
	// cout << "12345678901234567890" << endl;
	// os����cout�ı�������ϵһ�����͵ȳ������͡�
	os << contents;
	return *this;
}


class Window_Mgr
{
public:
	Window_Mgr& relocate(Screen::index,Screen::index,Screen&);
};


Window_Mgr& Window_Mgr::relocate(Screen::index r,Screen::index c,Screen& s)
{
	s.height += r;
	s.width  += c;
	return *this;
}

class X
{
	int j;  //only static const integral data members canbe initialized within a class
public:
	int func(int){return j;}
};

int main()
{

	return 0;
}
