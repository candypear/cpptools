#include"candyLinkList.h"

/*************************************************
Function: CandyLinkList  --链表构造函数                
Description: 初始化一个链表，分配头结点内存空间            
Input: 无                      
Output: 无                 
Return: 无                 
Others: 无                
*************************************************/
template<typename T>
CandyLinkList<T>::CandyLinkList()
{
	header = new CandyNode<T>;
	header->next = nullptr;
	len = 0;
}

/*************************************************
Function: ~CandyLinkList  --链表析构函数                
Description: 释放所有节点内存            
Input: 无                      
Output: 无                 
Return: 无                 
Others: 无                
*************************************************/
template<typename T>
CandyLinkList<T>::~CandyLinkList()
{
	CandyNode<T>* temp = nullptr;
	while (header != nullptr)
	{
		temp = header->next;
		delete header;
		header = temp;
	}
	len = 0;
	header = nullptr;
}

/*************************************************
Function: clear  --链表重置函数                
Description: 重置链表为初始状态            
Input: 无                      
Output: 无                 
Return: 无                 
Others: 无                
*************************************************/
template<typename T>
int CandyLinkList<T>::clear()
{
	CandyNode<T>* temp = nullptr;
	while (header != nullptr)
	{
		temp = header->next;
		delete header;
		header = temp;
	}
	header = nullptr;
	header = new CandyNode<T>;
	header->next = nullptr;
	len = 0;
	return 0;
}

/*************************************************
Function: length  --链表长度函数                
Description: 返回当前链表长度            
Input: 无                      
Output: 无                 
Return: 无                 
Others: 无                
*************************************************/
template<typename T>
int CandyLinkList<T>::length()
{
	return len;

}

/*************************************************
Function: insert  --插入函数                
Description: 插入一个节点            
Input: 无                      
Output: 无                 
Return: 无                 
Others: 采用头插法                
*************************************************/
template<typename T>
int CandyLinkList<T>::insert(T& insertnode, int postion)
{
	CandyNode<T>* current = nullptr;
	current = header;
	for (size_t i = 0; i < postion; i++)
	{
		current = current->next;
	}
	CandyNode<T>* node = new CandyNode<T>;
	if (node == nullptr)
	{
		return -1;
	}
	node->t = insertnode;
	node->next = nullptr;

	node->next = current->next;
	current->next = node;
	len++;


	return 0;
}

/*************************************************
Function: insert  --取值函数                
Description: 取出该节点            
Input: 无                      
Output: 无                 
Return: 无                 
Others: 无                
*************************************************/
template<typename T>
int CandyLinkList<T>::get(T& getnode, int postion)
{
	CandyNode<T>* current = nullptr;
	current = header;
	for (size_t i = 0; i < postion; i++)
	{
		current = current->next;
	}

	getnode = current->next->t;
	return 0;
}

/*************************************************
Function: del  --删除函数                
Description: 删除指定节点            
Input: 无                      
Output: 无                 
Return: 无                 
Others: 无                
*************************************************/
template<typename T>
int CandyLinkList<T>::del(T& deletenode, int postion)
{
	CandyNode<T>* current = nullptr;
	CandyNode<T>* node = nullptr;
	current = header;
	for (size_t i = 0; i < postion; i++)
	{
		current = current->next;
	}

	node = current->next;
	deletenode = node->t;

	current->next = node->next;

	len--;
	return 0;
}