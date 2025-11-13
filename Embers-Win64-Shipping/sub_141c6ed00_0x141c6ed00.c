// 函数: sub_141c6ed00
// 地址: 0x141c6ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[8])
*(arg1 + 0x68) = *arg2
*(arg1 + 0x78) = arg2[1]
*(arg1 + 0x88) = arg2[2]
arg1[0x13] = arg2[3].q
int64_t result = sub_1423786e0(arg1)

if (arg1 == -0x40)
    return result

return LeaveCriticalSection(&arg1[8])
