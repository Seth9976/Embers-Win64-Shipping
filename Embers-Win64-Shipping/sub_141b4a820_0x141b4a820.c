// 函数: sub_141b4a820
// 地址: 0x141b4a820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
uint32_t count = arg5[1].d
int64_t r15 = *arg5
arg1[1].d = count

if (count != 0)
    sub_1405da9e0(arg1, count, 0)
    memcpy(*arg1, r15, count)
else
    *(arg1 + 0xc) = 0

*(arg1 + 0x14) = arg3
arg1[3].d = arg4
arg1[2].d = arg2
return arg1
