// 函数: sub_142a86ad0
// 地址: 0x142a86ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 == arg2)
    result.b = 1
    return result

if (arg1 == 0 || arg2 == 0)
    result.b = 0
    return result

char i = *arg1

if (i != 0)
    while (i == *arg2)
        i = arg1[1]
        arg1 = &arg1[1]
        arg2 = &arg2[1]
        
        if (i == 0)
            break

return *arg1 == *arg2
