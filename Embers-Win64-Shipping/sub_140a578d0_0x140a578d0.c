// 函数: sub_140a578d0
// 地址: 0x140a578d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e605e0
DeleteCriticalSection(&arg1[0x111])
sub_140b0bbe0(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

free(arg1)
return arg1
