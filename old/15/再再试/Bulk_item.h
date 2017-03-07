#include "Item_base.h"
class Bulk_item : public Item_base 
{
public:
	Bulk_item(const std::string& book = "", double sales_price = 0.0,
	  size_t qty = 0, double disc_rate = 0.0)
	    : Item_base(book, sales_price), min_qty(qty), discount(disc_rate) { }
	double net_price(size_t) const;
	
	// �������������
	void Bulk_item::memfcn(const Bulk_item&, const Item_base&);
private:
	size_t min_qty;
	double discount;
};
double Bulk_item::net_price(size_t cnt) const
{
	if (cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}
/*
void Bulk_item::memfcn(const Bulk_item& d, const Item_base& b)
{
	// 1.������ֻ��ͨ�������������ʻ���protected��Ա��2.���������
	// �������Ͷ����protected��Աû���������Ȩ�ޡ�

	// 1.�ǲ��ǿ����������Ϊ������d.price�ǺϷ�������ǲ�����Ϊd��Bulk_item�Ķ���
	// d��Ȼ���Է����Լ������ݳ�Ա��,��Ȼ�����Ա�Ǵӻ���̳й�����
	// �������Լ�--d���Ѿ�ͨ�����캯��������price�����Ա���Ҹ�ֵ��
	// �������������Լ�����Bulk_item��
	// ��һ�仰Ҳ��˵��Bulk_item��ͨ��d�����˻����price��Ա����ʵҲ�Ƿ������Լ���
	// ���ݳ�Ա��ע��������ʣ�����Ҳ��˵��Bulk_item���в��ܷ��ʵ���˼�ɡ�

	// b.price���ܹ������ǲ�����Ϊ������Bulk_item�У�ע��һ����һ����
	// ������2�仰��"���������������Bulk_item��b��price��Ա��
	// û���������Ȩ�ޡ�

	// �о�b.price��������˽�еģ�ֻ�����ɻ���ĳ�Ա�������ܷ��ʣ�������ֱ�Ӱ���
	// д����һ���ǲ��еģ���ôd.priceΪʲô�ֿ����أ���Ϊ�����ж��壬
	double ret = price;
	ret = d.price; // ok.
	ret = b.price;
}*/