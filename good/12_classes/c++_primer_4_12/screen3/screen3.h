#include <string>
#include <iostream>

class Screen {
public:
    // interface member functions
    typedef std::string::size_type index;
    char get() const
    {
        return m_contents[cursor];
    }
    inline char get(index const & ht, index const & wd) const; // �����������������ҹ�������

    Screen(index const & ht = 0, index const & wd = 0):
        m_contents(ht * wd, 'a'), cursor(0), height(ht), width(wd)
    {

    }

    Screen & move(index const & r, index const & c);
    Screen & set(char const &);
    Screen & set(index const &, index const &, char const &);

    // display overloaded on whether the object is const or not
    Screen & display(std::ostream & os) // ��const�������displayʱ���������������ֵ��һ����const��Screen���󣬾Ϳ�����
    {                                 // a.display().set()������ʹ������ˡ�
        do_display(os);
        return *this;
    }
    // ����ֵ����const���󣬲���ȥ����const������Ա
    Screen const & display(std::ostream & os) const
    {
        do_display(os);
        return *this;
    }
private:
    // single function to do the work of displaying a Screen,
    // will be called by the display operations
    void do_display(std::ostream & os) const { os << m_contents; }
    // as before
private:
    std::string m_contents;
    index cursor;
    index height;
    index width;
    // other members as before
};

Screen & Screen::set(char const & c)
{
    m_contents[cursor] = c;
    return *this;
}

Screen & Screen::move(index const & r, index const &c)
{
    index row = r * width; // row location
    cursor = row + c;
    return *this;
}

Screen & Screen::set(index const & r, index const & c, char const & ch)
{
    index row = r * width; // row location
    m_contents[row + c] = ch;
    return *this;
}

char Screen::get(index const & r, index const & c) const
{
    index row = r * width; // row location
    return m_contents[row + c];
}
