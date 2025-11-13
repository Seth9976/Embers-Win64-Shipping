// 函数: sub_140d91e10
// 地址: 0x140d91e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x48)
float temp0 = _mm_max_ss(arg2 + arg3, 0)
float var_14 = arg2
char rax = (*(arg1 + 0x5c) & 0xf9) | 1
*(arg1 + 0x58) = temp0
*(arg1 + 0x5c) = rax
*(arg1 + 0x48) = fconvert.d(temp0)
int64_t rsi = sx.q(*(arg1 + 0x40))
int32_t rax_1 = (rsi + 1).d
*(arg1 + 0x40) = rax_1

if (rax_1 s> *(arg1 + 0x44))
    sub_14083a7e0(arg1 + 0x38)

int64_t rcx_1 = *(arg1 + 0x38)
int64_t rdx_2 = rsi * 3
*(rcx_1 + (rdx_2 << 2)) = arg3.q
*(rcx_1 + (rdx_2 << 2) + 8) = arg4.d
return arg1
