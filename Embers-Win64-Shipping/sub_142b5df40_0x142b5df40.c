// 函数: sub_142b5df40
// 地址: 0x142b5df40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 1) == 0 || arg3 != 0)
    int16_t rax_1 = *(arg1 + 8)
    int32_t rcx_1
    
    if (rax_1 s< 0)
        rcx_1 = *(arg1 + 0xc)
    else
        rcx_1 = sx.d(rax_1) s>> 5
    
    if (arg3 u< rcx_1)
        if (arg3 s> 0x3ff)
            rax_1 |= 0xffe0
            *(arg1 + 0xc) = arg3
        else
            arg3.w <<= 5
            rax_1 = (rax_1 & 0x1f) | arg3.w
        
        *(arg1 + 8) = rax_1
else
    sub_142a4afe0(arg1)

return sub_142a49390(arg1, 0, arg2, 0, 0, 0)
