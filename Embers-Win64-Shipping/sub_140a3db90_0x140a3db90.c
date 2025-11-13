// 函数: sub_140a3db90
// 地址: 0x140a3db90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5d298
DeleteCriticalSection(&arg1[1])
sub_140b0bbe0(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

free(arg1)
return arg1
