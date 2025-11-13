// 函数: sub_140858200
// 地址: 0x140858200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x10))
int32_t rax = (rdi + 1).d
*(arg1 + 0x10) = rax

if (rax s> *(arg1 + 0x14))
    sub_1405a4d70(arg1 + 8)

*(*(arg1 + 8) + (rdi << 3)) = arg2
*(arg2 + 0x5b0) = rdi.d
int64_t rdi_1 = sx.q(*(arg1 + 0x20))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x20) = rax_2

if (rax_2 s> *(arg1 + 0x24))
    sub_1405a4d70(arg1 + 0x18)

int64_t result = *(arg1 + 0x18)
*(result + (rdi_1 << 3) + 4) &= 0xfc
*(result + (rdi_1 << 3)) = 0x3f800000
return result
