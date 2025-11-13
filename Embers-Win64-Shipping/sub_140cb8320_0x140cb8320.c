// 函数: sub_140cb8320
// 地址: 0x140cb8320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1f0))
int32_t rax = (rdi + 1).d
*(arg1 + 0x1f0) = rax

if (rax s> *(arg1 + 0x1f4))
    sub_1405a4cf0(arg1 + 0x1e8)

int64_t result = *(arg1 + 0x1e8)
*(result + (rdi << 2)) = arg2 << 0xd | 0x400
return result
