// 函数: sub_142ae9970
// 地址: 0x142ae9970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x78) s>= 0)
    return sx.q(*(arg1 + 0x78))

int64_t r8 = *(arg1 + 0x48)
char* rax_1 = sx.q(*(arg1 + 0x7c)) + r8

while (*rax_1 != 0)
    rax_1 = &rax_1[1]

if (rax_1 - r8 s>= 0x7fffffff)
    *(arg1 + 8) &= 0xfffffffd
    *(arg1 + 0x78) = 0x7fffffff
    return sx.q(*(arg1 + 0x78))

int32_t rax_2 = rax_1.d - r8.d
*(arg1 + 8) &= 0xfffffffd
*(arg1 + 0x78) = rax_2
return sx.q(rax_2)
