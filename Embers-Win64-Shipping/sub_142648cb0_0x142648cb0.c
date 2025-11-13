// 函数: sub_142648cb0
// 地址: 0x142648cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax = (rdi + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405a4cf0(arg1 + 0x10)

*(*(arg1 + 0x10) + (rdi << 2)) = arg2
int64_t rdi_1 = sx.q(*(arg1 + 0x18))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x18) = rax_2

if (rax_2 s> *(arg1 + 0x1c))
    sub_1405a4cf0(arg1 + 0x10)

*(*(arg1 + 0x10) + (rdi_1 << 2)) = arg3
int64_t rdi_2 = sx.q(*(arg1 + 0x18))
int32_t rax_4 = (rdi_2 + 1).d
*(arg1 + 0x18) = rax_4

if (rax_4 s> *(arg1 + 0x1c))
    sub_1405a4cf0(arg1 + 0x10)

int64_t result = *(arg1 + 0x10)
*(result + (rdi_2 << 2)) = arg4
return result
