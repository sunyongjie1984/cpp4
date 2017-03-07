#include <iostream>
#include <string>
using namespace std;

class Sales_item
{
public:
	explicit Sales_item(const std::string &book = ""):isbn(book),units_sold(0),revenue(0.0){}
	//Sales_item(std::istream& is){is >> *this;}
	//operations on Sales_item objects
	double ave_price() const;
	bool same_isbn(const Sales_item &rhs) const
	{
		//const��Ա�����������޸ĸö�������ݳ�Ա
		return isbn == rhs.isbn; 
	}

	//default constructor needed to initalize members of built-in type
	//Sales_item():units_sold(0),revenue(0.0){}
	double salary;
private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
} gg;  //�������ʱ����Ҫ�ֺţ�����Ϊ��֧�ֶ������
	//��һ�仰����⣬Ϊʲô˵������struct�ؼ��ֶ���ģ����ڵ�һ�����ʱ��֮ǰ�ĳ�Ա�ǹ��еģ�
	//�����������class�ؼ��ֶ���ģ�����Щ��Ա��˽�еġ�

double Sales_item::ave_price() const
{
	if(units_sold)
	{
		return revenue/units_sold;
	}else
	{
		return 0;
	} 
}


class Screen
{
public:

	typedef std::string::size_type index;
	//interface member functioins
	Screen& setContents(string ix);   //const��������ʲô��˼��
	
private:
	string contents;
	index cursor;
	index height;
	index width;
};


Screen& Screen::setContents(string ix)
{
		contents = ix;
		return *this;
}

int main(){
	int i = 3;
	int j = 5;
   	cout << i << "+" << j
		<< "=" << i+j << endl;
	Sales_item si;
	cout << si.salary << endl;
	cout << " May be !" << endl;
	string null_book = "xxxx";
	si.same_isbn(Sales_item(null_book));

	Screen screen;
	string id = "this book is sold well.";
	screen.setContents(id);

    std::cin.get();
	return 0;
}
