#pragma once

template<typename T>
struct CandyNode
{
	T t;
	CandyNode<T>* next;
};

template<typename T>
class CandyLinkList{
public:
	CandyLinkList();
	~CandyLinkList();

	int clear();
	int length();
	int insert(T& insertnode,int postion);
	int get(T& getnode, int postion);
	int del(T& deletenode, int postion);

private:
	CandyNode<T>* header;	//头指针
	int len;		//长度
};


