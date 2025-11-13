// 函数: sub_1423c21e0
// 地址: 0x1423c21e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xda) &= 0xfe
*(arg1 + 0xda) |= arg5
arg1[0x1c].b = arg4

if (arg2 u> 0x10000)
    arg2 = 1

arg1[0x18].d = arg2

if (arg3 u> 0x10000)
    arg3 = 1

int64_t rax_1 = *arg1
*(arg1 + 0xc4) = arg3
jump(*(rax_1 + 0x2f8))
