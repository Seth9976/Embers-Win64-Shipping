// 函数: sub_141cfd9f0
// 地址: 0x141cfd9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x10) != 0)
    *(arg1 + 0x40) -= *(arg2 + 8)
    sub_140a74f90(*(arg2 + 0x10))
    *(arg2 + 0x10) = 0

*(arg2 + 0x20) = 0
int64_t rbp = sx.q(*(arg1 + 0xf8))
int32_t rsi_2 = not.d(*(arg1 + 0x104)) & *(arg2 + 0x1c)
int32_t rax_2 = (rbp + 1).d
*(arg1 + 0xf8) = rax_2

if (rax_2 s> *(arg1 + 0xfc))
    sub_1405a4cf0(arg1 + 0xf0)

*(*(arg1 + 0xf0) + (rbp << 2)) = rsi_2
int32_t result = *(arg1 + 0xf8) + 1

if (result != *(arg1 + 0xe8))
    return result

*(arg1 + 0xe8) = 0

if (*(arg1 + 0xec) != 0)
    sub_1405a5220(arg1 + 0xe0, 0)

*(arg1 + 0xf8) = 0

if (*(arg1 + 0xfc) != 0)
    sub_1405dadb0(arg1 + 0xf0, 0)

return sub_141cfc530(arg1 + 0xe0)
