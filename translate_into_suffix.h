#pragma once
#include"class.h"
#include"libraryfile_and_define.h"

//���x�����֣�����-1�����򷵻ز�������Ӧ������
int check_type(const char x);


//�������ֶ�Ӧ�Ĳ�����
char change_oper(const int oper);

//������ȼ������x�ǲ������򷵻������ȼ������򷵻�-1,���ŵ����ȼ�Ϊ0
int check_priority(const char x);

//�Ƚϲ�����x��y�����ȼ������x>y����1��x=y����0��x<y����-1
int cmp_priority(const char x, const char y);

//��expת��Ϊ��׺����ʽ,���ڶ����ﷵ��
std::queue<word> translate_into_suffix(const std::string exp, std::queue<word>suffix);