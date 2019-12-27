#include<iostream>
#include<string>
#include"../candyLinkList.h"
#include"../candyLinkList.cpp"

struct Student
{
	int age;
	std::string name;
};


int main() 
{
	CandyLinkList<Student> list;
	Student st1,st2,st3;
	st1.name = "张三";
	st2.name = "李四";
	st3.name = "王五";
	st1.age = 1;
	st2.age = 2;
	st3.age = 3;

	
	list.insert(st1, 0);
	list.insert(st2, 0);
	list.insert(st3, 0);

	Student temp;
	for (int i = 0; i < list.length(); i++)
	{
		list.get(temp, i);
		std::cout << temp.name << "  " << temp.age << std::endl;
	}
	system("pause");
	return 0;
}