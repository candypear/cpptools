#include<iostream>
#include"../candyConsole.h"

int main()
{
	//�ı����
	CandyConsole::setTitle("this is test api");
	//�������ӡ�ַ���
	CandyConsole::print(0, 0, "�ַ��������в���");
	CandyConsole::println(0, 1, "�ַ������в���");
	//�������ӡint
	CandyConsole::print(20, 0, 10);
	//�������ӡdouble
	CandyConsole::print(20, 1, 1.5);
	//�������ӡchar
	CandyConsole::print(20, 2, 'A');
	//����ɫ��ӡ�ַ���
	CandyConsole::println(0, 2, "�ַ������в���",LIGHTRED);
	//��ͣ
	CandyConsole::pause();
	return 0;
}