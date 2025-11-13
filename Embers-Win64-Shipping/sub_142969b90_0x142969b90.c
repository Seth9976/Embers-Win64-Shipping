// 函数: sub_142969b90
// 地址: 0x142969b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg2 == 0)
    return i

if (*arg2 != 0)
    while (i u< 0x80000000)
        arg2 = &arg2[1]
        i += 1
        
        if (*arg2 == 0)
            break

return i & 0x7fffffff
