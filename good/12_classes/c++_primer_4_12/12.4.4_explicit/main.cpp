#include <string>
#include <iostream>

class myBook {
public:
    // ���explicit����˼�ǣ���һ���������÷���ʱ����myBook::same_book_name(const myBook&)
    // ����ڴ�һ��myBook���͵�ʵ�δ���ʱ����������ʵ�������ǿ�����ʽת��ΪmyBook����
    // ��ʵ��ʱ��Ҳ������ͨ���������˼����������˵myBook b("hehe")���������ִ�в���
    // ���캯��explicit myBook(std::string)���β���ֵ���ݵ���ʵ�εĸ�������������
    // explicit myBook(const std::string&)Ҳ�ǿ��Եģ������ô��ݵ�
    // ֻ�ж����explicit myBook(std::string&)���У���Ϊ��const����ֻ�ܰ󶨵�����Ϊ
    // myBook�Ķ����໥ת�����ǲ��еģ���ֵ�ǲ��еģ���ǰ�кܶ�ط����۹��������
    // explicit����;��myBook::same_book_name(const myBook&)�ڴ�һ��myBook�Ķ���ʱ����
    // �ܴ���std::string��ʽ�Ķ��󣬵�һ���ºͺ������ò��������޹أ�ֻҪ�Ƕ���һ������
    // ������ʱ�ͻᷢ�������������۵ĵ��ù��캯����������ת�������顣
    explicit myBook(std::string str)
    {
        name = str;
    }

    myBook(char* p)
    {
        name = p;
    }

    bool same_book_name(const myBook& book)
    {
        return name == book.name;
    }
private:
    std::string name;
};

int main()
{
    std::string s = "haha";

    myBook a(s);
    myBook b("hehe"); // �൱��std::string str = "hehe"�����ǿ��Ե�
                      // ����const std::string& str = "hehe"��Ҳ�ǿ��Ե�
                      // ֻ��std::string& str = "hehe"����

    // ������䲻��myBook�Ĺ��캯����û��explicit���ǲ��еģ����ܷ�����������ת����
    // ֻ�е�myBook�и���char*���͵Ĺ��캯�������Ǹ����캯��ǰ�滹û��explicit��ʱ��ſ���
    std::cout << a.same_book_name("haha") << std::endl; // �ɹ���ΪmyBook::myBook(char*)
    std::cout << a.same_book_name(b) << std::endl;      // �ɹ���Ϊ��ȫƥ��
    //a.same_book_name(s);                              // ʧ����Ϊexplicit

    return 0;
}
