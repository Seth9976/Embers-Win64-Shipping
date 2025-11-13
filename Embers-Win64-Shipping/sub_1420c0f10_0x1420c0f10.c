// 函数: sub_1420c0f10
// 地址: 0x1420c0f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || ((zx.q(*(*(arg1 + 8) + 0x10)) u>> 0x11).b & 1) == 0)
    return 

char* r8_4 = &arg2[zx.q(*(arg1 + 0x79))]

if (*arg2 != 0)
    *r8_4 = (not.b(*(arg1 + 0x7b)) & *r8_4) | *(arg1 + 0x7a)
    return 

uint64_t rax
rax.b = not.b(*(arg1 + 0x7b))
rax.b &= *r8_4
rax.b = rax.b
*r8_4 = rax.b
