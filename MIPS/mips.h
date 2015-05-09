#ifndef MIPS_H
#define MIPS_H

#include <string>
using namespace std;
#define MAX_VM 10000
#define REGISTER_NUM 32
#define MAX_LABEL 1000

typedef unsigned long word; //����word����,��Ŷ����ƻ�����

extern const string regName[]; //�Ĵ���
extern int regValue[]; //�Ĵ���ֵ
extern word vm[]; //�����ڴ�
extern int PC; //�������д��ĵ�ַ

word hb(string);	//��һ�����ָ��ת��Ϊ������
int getRegNum(string); //��ȡĳ���Ĵ��������
int getAddress(string); //��ȡĳ��label�ĵ�ַ
void printVm(); //��������ڴ�
void fhb(word); //�������뷴��࣬ʵ����Ӧ����
string removeSpace(string); //���ַ����еĿո����

#endif