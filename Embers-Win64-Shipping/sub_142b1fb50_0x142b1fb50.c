// 函数: sub_142b1fb50
// 地址: 0x142b1fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = *(arg1 + 0x20)
int64_t r9 = *(arg1 + 0x10)
int64_t r10 = sx.q(arg2)

if (r10 s< (r8_1 - r9) s>> 1)
    *(arg1 + 0x2c) = 0
    int64_t r8 = r8_1 - r10 * 2
    *(arg1 + 0x28) += arg2
    *(arg1 + 0x18) = r8
    *(arg1 + 0x20) = r8
    return r8

void* rax_5 = *(arg1 + 8)
*(arg1 + 0x20) = r9

if ((*(rax_5 + 8) & 2) != 0)
    *(arg1 + 0x2c) = 0
    *(arg1 + 0x28) = 0x1b
    *(arg1 + 0x18) = r9
    return r9

*(arg1 + 0x28) = *(rax_5 + 0x10)
int64_t rax_8 = *(arg1 + 0x20)
*(arg1 + 0x18) = rax_8
*(arg1 + 0x2c) = 0
return rax_8
