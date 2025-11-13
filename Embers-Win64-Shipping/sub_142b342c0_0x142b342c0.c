// 函数: sub_142b342c0
// 地址: 0x142b342c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0)
    int16_t rax_1 = *(arg1 + 8)
    int32_t rdx_1
    
    if (rax_1 s< 0)
        rdx_1 = *(arg1 + 0xc)
    else
        rdx_1 = sx.d(rax_1) s>> 5
    
    if (arg3 s> rdx_1)
        if (rax_1 s< 0)
            arg3 = *(arg1 + 0xc)
        else
            arg3 = sx.d(rax_1) s>> 5
else
    arg3 = 0

int16_t rax_2 = *(arg1 + 8)

if (rax_2 s< 0)
    return sub_142a491f0(arg1, arg2, arg3, *(arg1 + 0xc) - arg3) __tailcall

return sub_142a491f0(arg1, arg2, arg3, (sx.d(rax_2) s>> 5) - arg3) __tailcall
