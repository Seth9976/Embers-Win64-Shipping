// 函数: sub_141044a80
// 地址: 0x141044a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd8) == 0)
    return 0

int32_t rax_1 = sub_14104b860(arg1 + 0xd0, arg3)
int64_t rsi_1 = *(arg1 + 0xf0)
int64_t rcx_2 = sx.q(sub_14104b860(arg1 + 0xd0, arg2))
return *(rsi_1 + (sx.q(rax_1) << 3)) - *(rsi_1 + (rcx_2 << 3))
