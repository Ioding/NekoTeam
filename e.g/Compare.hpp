#pragma once
// 2021-11-5
// ������
// ���Ĵ��Ƚϣ�ͷ�ļ�only
#include"Stack.hpp"

/// <summary>
/// �Ƚϻ����ַ���
/// </summary>
/// <param name="data">�ַ���</param>
/// <returns>�Ƿ�Ϊ���Ĵ�</returns>
bool compare(char* data)
{
    char* secData = data;
    Stack_link Stack;
    for (;*secData != '\0';)
    {//Ѱ���ַ����м�λ��
        Stack.stack_push(*data);
        data = data + 1;
        secData = secData + 2;
    }
    
    if (*data != *data - 1)
    {//��Ϊ�������м��ַ�����
        Stack.stack_pop();
    }

    for (; *data != '\0';)
    {// �Ƚ�
        if (*data != Stack.stack_pop())
            return 0;
        data++;
    }
    
    return 1;
}