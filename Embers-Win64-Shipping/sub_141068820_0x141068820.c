// 函数: sub_141068820
// 地址: 0x141068820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = sx.q(*(arg1 + 0x88))
int32_t rax

if (r8_2.d u> 0x10)
    rax = 4
    
    if (*(arg1 + 0x8c) != 0 || r8_2.d u> 4)
        rax = ((r8_2 * 3) u>> 3).d + 0x10 + r8_2.d
    
    if (r8_2.d s> rax)
        rax = 0x7fffffff
else
    rax = 0x10

*(arg1 + 0x8c) = rax
return sub_141068780(arg1, arg2, rax, 8) __tailcall
