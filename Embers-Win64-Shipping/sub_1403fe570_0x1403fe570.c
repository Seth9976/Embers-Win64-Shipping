// 函数: sub_1403fe570
// 地址: 0x1403fe570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_2 = ((1 << arg3) - 1) << (8 - arg3)

if (*(arg1 + 0x1c) u> 0)
    char* rax = *arg1
    r9_2.b = not.b(r9_2.b)
    arg2.b <<= 8 - arg3
    r9_2.b &= *rax
    r9_2.b |= arg2.b
    *rax = r9_2.b
    return rax

int32_t rax_1 = *(arg1 + 0x2c)

if (rax_1 s>= 0)
    *(arg1 + 0x2c) = (not.d(r9_2) & rax_1) | arg2 << (8 - arg3)
    return rax_1

uint32_t rax_2 = 0x80000000 u>> arg3

if (arg1[4].d u> rax_2)
    arg1[6].d = 0xffffffff
    return rax_2

*(arg1 + 0x24) = arg2 << (8 - arg3 + 0x17) | (not.d(r9_2 << 0x17) & *(arg1 + 0x24))
return rax_2
