// 函数: sub_141c45220
// 地址: 0x141c45220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 4) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0x10, 0)

int64_t rbp = sx.q(*(arg1 + 0x38))
int64_t rsi = sx.q(*(arg1 + 0x18))
int32_t rax = (rsi + rbp).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1406105e0(arg1 + 0x10)

memset(*(arg1 + 0x10) + (rsi << 2), 0, rbp << 2)
int64_t result = *(arg1 + 0x10)
*(arg1 + 0x3c) |= 1
*(arg1 + 0x20) = result
return result
