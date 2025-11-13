// 函数: sub_140886550
// 地址: 0x140886550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x40)

if (rdi != 0 && ((*(rdi + 0x4c)).b & 6) == 6 && *(rdi + 0x48) == 0)
    *arg2 = sub_1419cec70(*(rdi + 0x28), &data_143ce5ae8, 0)
    arg2[1] = rdi
    return arg2

*arg2 = 0
arg2[1] = 0
return arg2
