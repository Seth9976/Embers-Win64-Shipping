// 函数: sub_141c65e30
// 地址: 0x141c65e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg4)
*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_140775b10(arg1 + 0x10, 0)

int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax = (rdi + rsi).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_140775270(arg1 + 0x10)

return memcpy(*(arg1 + 0x10) + (rdi << 2), arg3, (rsi << 2).d) __tailcall
