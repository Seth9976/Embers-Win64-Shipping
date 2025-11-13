// 函数: sub_142a48c90
// 地址: 0x142a48c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r9 = *(arg1 + 8)
int32_t rax_1

if (r9 s< 0)
    rax_1 = *(arg1 + 0xc)
else
    rax_1 = sx.d(r9) s>> 5

int32_t r8 = 0

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> rax_1)
    arg2 = rax_1

if (arg3 s>= 0)
    int32_t rax_2 = rax_1 - arg2
    r8 = arg3
    
    if (arg3 s> rax_2)
        r8 = rax_2

if ((r9.b & 2) == 0)
    return sub_142a8bb50(*(arg1 + 0x18) + (sx.q(arg2) << 1), r8) __tailcall

return sub_142a8bb50(arg1 + 0xa + (sx.q(arg2) << 1), r8) __tailcall
