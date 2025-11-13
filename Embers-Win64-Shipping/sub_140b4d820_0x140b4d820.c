// 函数: sub_140b4d820
// 地址: 0x140b4d820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = (*(arg2 + 0x38))(arg2, arg3)
int32_t rax_1 = (*(arg1 + 0x30))(arg1, arg3, arg4)
int32_t rsi = *arg3

if (rax u<= rsi)
    rsi = rax

return zx.q((*(arg2 + 0x30))(arg2, arg3, arg4) + ((rax_1 - 1 + rsi) & neg.d(rsi)))
