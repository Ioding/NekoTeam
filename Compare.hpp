#pragma once
// 2021-11-5
// 刘俊豪
// 回文串比较，头文件only
#include"Stack.hpp"

/// <summary>
/// 比较回文字符串
/// </summary>
/// <param name="data">字符串</param>
/// <returns>是否为回文串</returns>
bool compare(char* data)
{
    char* secData = data;
    Stack_link Stack;
    for (;*secData != '\0';)
    {//寻找字符串中间位置
        Stack.stack_push(*data);
        data = data + 1;
        secData = secData + 2;
    }
    
    if (*data != *data - 1)
    {//若为奇数将中间字符丢弃
        Stack.stack_pop();
    }

    for (; *data != '\0';)
    {// 比较
        if (*data != Stack.stack_pop())
            return 0;
        data++;
    }
    
    return 1;
}