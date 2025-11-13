// 函数: sub_142a7d770
// 地址: 0x142a7d770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x81) = arg2
int64_t rax

if (arg2 == 0)
    rax = 0
else
    rax = *(arg1 + 0x40)

*(arg1 + 0x50) = rax

if (arg2 == 0)
    *(arg1 + 0x58) = *(arg1 + 0x30)
    return arg1

*(arg1 + 0x58) = *(arg1 + 0x48)
return arg1
