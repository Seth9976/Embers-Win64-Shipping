// 函数: sub_142afd560
// 地址: 0x142afd560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax_5 = *(arg1 + 0x10)

if (rax_5 u>= *(arg1 + 0x18))
    *arg2 = 8
    return 0xffff

char r8 = *rax_5
*(arg1 + 0x10) = &rax_5[1]

if (r8 u<= 0x7f)
    return zx.q(r8)

void* rax_2 = *(arg1 + 8)
*(rax_2 + 0x41) = r8
*(rax_2 + 0x40) = 1
*arg2 = 0xc
return 0xffff
