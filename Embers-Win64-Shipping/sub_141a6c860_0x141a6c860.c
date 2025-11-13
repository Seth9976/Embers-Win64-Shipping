// 函数: sub_141a6c860
// 地址: 0x141a6c860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x45c) & 2) == 0)
    return sub_141a6c8f0(arg1, arg2, arg3) __tailcall

int64_t rsi = sx.q(arg1[0x90].d)
int32_t rax = (rsi + 1).d
arg1[0x90].d = rax

if (rax s> *(arg1 + 0x484))
    sub_14083a7e0(&arg1[0x8f])

int64_t result = arg1[0x8f]
int64_t rcx_1 = rsi * 3
*(result + (rcx_1 << 2)) = 2
*(result + (rcx_1 << 2) + 1) = arg3
*(result + (rcx_1 << 2) + 4) = arg2
return result
