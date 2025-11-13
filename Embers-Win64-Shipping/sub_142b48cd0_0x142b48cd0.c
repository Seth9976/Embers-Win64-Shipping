// 函数: sub_142b48cd0
// 地址: 0x142b48cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x30)

if (r8 s>= *(arg1 + 0x10))
    sub_142a5da90(arg1 + 8, r8 * 2, r8)

int64_t rax = sx.q(*(arg1 + 0x30))
*(arg1 + 0x30) = rax.d + 1
int64_t result = *(arg1 + 8)
*(result + (rax << 3)) = arg2
return result
