// 函数: sub_14271f9c0
// 地址: 0x14271f9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x88))
int32_t rax = (rdi + 1).d
*(arg1 + 0x88) = rax

if (rax s> *(arg1 + 0x8c))
    sub_1405c4f50(arg1 + 0x80)

int64_t result = *(arg1 + 0x80)
int64_t rcx_2 = rdi * 6
*(result + (rcx_2 << 3)) = *arg2
*(result + (rcx_2 << 3) + 0x10) = arg2[1]
*(result + (rcx_2 << 3) + 0x20) = arg2[2]
*(arg1 + 0x40) = 0
return result
