// 函数: sub_142b140d0
// 地址: 0x142b140d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u<= 0xff)
    return zx.q(*(sx.q(arg2) + arg1 + 8))

if (arg2 u<= 0x7ff)
    int32_t rax_7
    rax_7.b = test_bit(*(arg1 + ((zx.q(arg2) & 0x3f) << 2) + 0x10c), zx.d((arg2 s>> 6).b))
    return rax_7

if (arg2 u>= 0xd800 && arg2 - 0xe000 u> 0x1fff)
    if (arg2 u<= 0x10ffff)
        return sub_142b14190(arg1, arg2, *(arg1 + 0x340), *(arg1 + 0x350)) __tailcall
    
    int32_t rax_8
    rax_8.b = 0
    return rax_8

int32_t r9_3 = arg2 s>> 0xc
int32_t r8_4 = *(arg1 + ((zx.q((zx.q(arg2) s>> 6).d) & 0x3f) << 2) + 0x20c) u>> r9_3.b & 0x10001

if (r8_4 u> 1)
    return sub_142b14190(arg1, arg2, *(arg1 + (sx.q(r9_3) << 2) + 0x30c), 
        *(arg1 + (sx.q(r9_3 + 1) << 2) + 0x30c)) __tailcall

return zx.q(r8_4.b)
