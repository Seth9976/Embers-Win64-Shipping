// 函数: sub_1403e91b0
// 地址: 0x1403e91b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1403e6e40(arg1)

if (*(arg1 + 0x11cc) s>= 0xd)
    *(arg1 + 0x12cd) = 1
    *(arg1 + 0x17f4) = 0
    int64_t rax_2 = sx.q(*(arg1 + 0x16a4))
    *(rax_2 + arg1 + 0x12a0) = 1
    return rax_2

*(arg1 + 0x17f8) += 1
int32_t rax = *(arg1 + 0x17f8)
*(arg1 + 0x12cd) = 0

if (rax s< 0xa)
    *(arg1 + 0x17f4) = 0
else if (rax s> 0x1e)
    *(arg1 + 0x17f8) = 0xa
    *(arg1 + 0x17f4) = 0

int64_t rax_1 = sx.q(*(arg1 + 0x16a4))
*(rax_1 + arg1 + 0x12a0) = 0
return rax_1
