// 函数: sub_141eaddf0
// 地址: 0x141eaddf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1422b7d80(arg2, &arg1[0x4c])

if (result == 0)
    bool cond:0_1 = (*(arg1 + 0x25c) & 1) == 0
    *(arg1 + 0x260) = *arg2
    *(arg1 + 0x270) = arg2[1]
    
    if (not(cond:0_1))
        return sub_141eaf840(arg1, (&arg1[0x4c]).b)

return result
