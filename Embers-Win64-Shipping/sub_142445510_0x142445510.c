// 函数: sub_142445510
// 地址: 0x142445510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
*(arg1 + 0xa0) = 0

if (rdi.d s> *(arg1 + 0xa4))
    sub_1405c5570(arg1 + 0x98, rdi.d)

int64_t r14 = *arg2
int64_t rsi_1 = sx.q(*(arg1 + 0xa0))
int32_t rax = (rsi_1 + rdi).d
*(arg1 + 0xa0) = rax

if (rax s> *(arg1 + 0xa4))
    sub_1405a4d70(arg1 + 0x98)

memcpy(*(arg1 + 0x98) + (rsi_1 << 3), r14, (rdi << 3).d)
return sub_14243e3b0(arg1) __tailcall
