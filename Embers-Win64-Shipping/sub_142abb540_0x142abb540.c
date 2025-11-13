// 函数: sub_142abb540
// 地址: 0x142abb540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* r8_1 = *(arg1 + 0x10)

if (*(r8_1 + 8) == 0xffffffff)
    return 

uint64_t rax = zx.q(*(r8_1 + 0xc))

if (rax.d == 0xffffffff)
    return 

*(r8_1 + 0xc) = rax.d + arg2
rax = *(arg1 + 0x10)
*(rax + 0x10) += arg2
