#ifndef BOOK_EXCEPT
#define BOOK_EXCEPT

#include <stdexcept>

// std::runtime_error and std::logical_error are defined in file stdexcept
// hypothetical exception classes for a bookstore application
// hypothetical ����ģ��ٶ��ģ��������
class out_of_stock: public std::runtime_error {
public:
    // I think, this constructor is like this,
    // runtime_error is a base class of out_of_stock, in the constructor
    // initialize list std::runtime_error(s) means, invoke the base
    // class constructor to initialize the base part of the out_of_stock object
    // explicit ��˼�ǵ���������캯����ʱ�򣬲��ܷ�����ʽת����ֻ�ܴ���һ��std::string
    // ���͵Ķ��󣬲���������ת��Ϊstd::string���͵Ķ��󣬱���char*֮��
    explicit out_of_stock(std::string const & s): std::runtime_error(s) { }
    // out_of_stock ��û�г�Ա���������ĺϳ��������������κο����׳��쳣�����飬��ˣ�
    // ����������֪���ϳ��������������ز��׳��쳣�ĳ�ŵ
};

class isbn_mismatch: public std::logic_error {
public:
    explicit isbn_mismatch(std::string const & s): std::logic_error(s) { }

    isbn_mismatch(std::string const & s, std::string const & lhs, std::string const & rhs):
        std::logic_error(s), left(lhs), right(rhs) { }

    // ��linex��ȷʵ��Ҫ��һ�У���/home/sunyongjie/new/c++_primer_4_17/��
    // c++ primer page 957
    // isbn_mismatch ���logic_error��̳ж�����logic_error��һ����׼�쳣�࣬�ñ�׼�쳣�����������
    // ������ throw() ˵���������ǳ�ŵ���׳��κ��쳣�����̳����������е�һ��ʱ�����ǵ���������Ҳ����
    // ��ŵ���׳��κ��쳣
    // myref(section)(exceptSpec) explains the destructor and why we need one
    virtual ~isbn_mismatch() throw() { }

    // �����ڹ��캯����ʼ���б��и�ֵ��c++ primer 4 page 388
    // û��Ĭ�Ϲ��캯���������ͳ�Ա���Լ�const���������ͳ�Ա��������ʲô����
    // �������ڹ��캯����ʼ���б��н��г�ʼ��
    const std::string left;
    const std::string right;
};

#endif
