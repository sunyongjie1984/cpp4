#include <iostream>
#include <string>
void GetMemory(char** p, int num) 
{  
	*p = (char* )malloc(num);
}
int main()
{
	char *str = NULL; // ����str��һ�������˵ı������Ǳ�����Ҫ�����ڴ�ռ�
	GetMemory(&str, 100); // &str������1000������GetMeory��p����&str,
	// Ҳ����˵��p����str�ĵ�ַ����ô*p������ָ��str,*pָ�������˵�
	// �ڴ棬Ҳ����˵strָ���˷�����˵��ڴ档���ˣ�һ���б����ⷽ��
	strcpy(str, "I Love China!"); 
//	strcpy(str, "I Love \0China!"); // ����ܹ��ضϰ���
	printf(str); // ��ν������ڴ�й¶�����أ�����str == NULL?
	std::cout << std::endl;
	return 0;
}
