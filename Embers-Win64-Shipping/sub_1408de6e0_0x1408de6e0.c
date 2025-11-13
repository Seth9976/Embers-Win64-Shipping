// 函数: sub_1408de6e0
// 地址: 0x1408de6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x38))
int32_t rax = (rsi + 1).d
*(arg1 + 0x38) = rax

if (rax s> *(arg1 + 0x3c))
    sub_1405c4fe0(arg1 + 0x30)

int64_t rax_1 = *(arg1 + 0x30)
int64_t rcx_2 = rsi << 6
*(rcx_2 + rax_1) = *arg2
*(rcx_2 + rax_1 + 0x10) = arg2[1]
*(rcx_2 + rax_1 + 0x20) = arg2[2]
*(rcx_2 + rax_1 + 0x30) = arg2[3]
int64_t rsi_1 = sx.q(*(arg1 + 0x48))
int32_t rax_2 = (rsi_1 + 1).d
*(arg1 + 0x48) = rax_2

if (rax_2 s> *(arg1 + 0x4c))
    sub_1406105e0(arg1 + 0x40)

int64_t result = *(arg1 + 0x40)
*(result + (rsi_1 << 2)) = arg3.d
*(arg1 + 0x28) = _mm_max_ss((*(arg1 + 0x28))[0], arg3.d)[0]
return result
