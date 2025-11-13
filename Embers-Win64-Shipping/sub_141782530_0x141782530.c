// 函数: sub_141782530
// 地址: 0x141782530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *(*(*arg2 + 0xe0) + (sx.q(arg2[1].d) << 3))
arg1[1] = arg2
arg1[2].d = *(*(*arg2 + 0x50) + (sx.q(arg2[1].d) << 2))
__builtin_memset(arg1 + 0x14, 0, 0x11)
int64_t r8_2 = sx.q(arg2[1].d) * 3
int64_t rdx = *(*arg2 + 0xf8)
void* rax_5 = *(rdx + (r8_2 << 3) + 8)
void* r9_2 = rdx + (r8_2 << 3)
void* r8_3 = r9_2

if (rax_5 != 0)
    r8_3 = rax_5

void* r9_3 = r8_3 + (sx.q(*(r9_2 + 0x10)) << 3)

while (r8_3 != r9_3)
    *(arg1 + 0x14) |= **r8_3
    arg1[3].d |= *(*r8_3 + 4)
    *(arg1 + 0x1c) |= *(*r8_3 + 8)
    void* rax_10 = *r8_3
    r8_3 += 8
    arg1[4].d |= *(rax_10 + 0xc)

*(arg1 + 0x24) = 1
return arg1
