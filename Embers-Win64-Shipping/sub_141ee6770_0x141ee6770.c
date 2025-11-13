// 函数: sub_141ee6770
// 地址: 0x141ee6770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi

if ((*(arg1 + 0x150) & 1) == 0 || *(arg1 + 0x35) s< 0 || (*(arg1 + 0x36) & 1) != 0)
    rsi.b = 1
else
    rsi.b = 0

int32_t rbp = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80

if (sub_1422a6b20(arg1, arg3) != 0 && rsi.b != 0)
    rbp = 4

arg2[1].d &= 0xfffffffb
arg2[1].d |= rbp | 2
char rax_1 = sub_1422a69b0(arg1, arg3)
arg2[1].d = ((arg2[1].d & 0xfffffff7) | zx.d(rax_1) << 3) & 0xfffffeff
return arg2
