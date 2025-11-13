// 函数: sub_142a40d10
// 地址: 0x142a40d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg2 + 0x48)

if (rdx != 0)
    *(rdx + 0x40) = *(arg2 + 0x40)

void* rdx_1 = *(arg2 + 0x40)

if (rdx_1 != 0)
    *(rdx_1 + 0x48) = *(arg2 + 0x48)

if (arg2 == arg1[1])
    arg1[1] = *(arg2 + 0x48)

if (arg2 == *arg1)
    *arg1 = *(arg2 + 0x40)
    sub_142a40530(*(arg2 + 0x38), arg1)

void* rax_5 = *(arg2 + 0x38)
*(rax_5 + 0xb40) -= 1
*(arg2 + 6) &= 0xfe
__builtin_memset(arg2 + 0x38, 0, 0x18)
return 0
