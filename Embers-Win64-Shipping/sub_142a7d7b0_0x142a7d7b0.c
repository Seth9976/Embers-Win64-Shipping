// 函数: sub_142a7d7b0
// 地址: 0x142a7d7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x80) = arg2
int64_t rax

if (arg2 == 0)
    rax = *(arg1 + 0x40)
else
    rax = 0

*(arg1 + 0x60) = rax

if (arg2 == 0)
    *(arg1 + 0x68) = *(arg1 + 0x48)
    return arg1

*(arg1 + 0x68) = *(arg1 + 0x30)
return arg1
