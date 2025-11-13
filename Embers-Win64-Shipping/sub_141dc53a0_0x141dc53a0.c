// 函数: sub_141dc53a0
// 地址: 0x141dc53a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_3 = *(arg1 + 0x130)

if (rax_3 == 0)
    *arg2 = 0x3f800000
    *(arg2 + 4) = 0x3f800000
    arg2[1].d = 0x3f800000
    return arg2

int32_t rax = *(rax_3 + 0x13c)
*arg2 = *(rax_3 + 0x134)
arg2[1].d = rax
return arg2
