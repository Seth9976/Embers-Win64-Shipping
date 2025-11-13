// 函数: sub_141927390
// 地址: 0x141927390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
uint32_t count = arg2[1].d
int64_t rbp = *arg2
arg1[1].d = count

if (count != 0)
    sub_1405da9e0(arg1, count, 0)
    memcpy(*arg1, rbp, count)
else
    *(arg1 + 0xc) = 0

*(arg1 + 0x10) = *(arg2 + 0x10)
arg1[4].d = arg2[4].d
return arg1
