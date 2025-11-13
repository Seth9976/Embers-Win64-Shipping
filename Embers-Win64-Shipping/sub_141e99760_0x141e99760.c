// 函数: sub_141e99760
// 地址: 0x141e99760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2 = *(arg1 + 0x28)

if (arg2 != 0)
    int32_t rax_1 = (rax_2 & 0xfffffff7) | 4
    *(arg1 + 0x28) = rax_1
    return rax_1

if ((rax_2.b & 4) == 0)
    rax_2 |= 8
    *(arg1 + 0x28) = rax_2

return rax_2
