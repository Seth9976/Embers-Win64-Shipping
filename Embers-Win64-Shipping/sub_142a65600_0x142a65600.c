// 函数: sub_142a65600
// 地址: 0x142a65600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 8) & 1) == 0)
    *(arg2 + 8) &= 0x1f
else
    *(arg2 + 8) = 2

*arg3 = 0

if (*arg4 s<= 0)
    int16_t rax_1 = *(arg1 + 8)
    int32_t r8_1
    
    if (rax_1 s< 0)
        r8_1 = *(arg1 + 0xc)
    else
        r8_1 = sx.d(rax_1) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_1, u"Etc/Unknown", 0, 0xb) != 0)
        sub_142acf920(arg1, arg2, arg4)
        
        if (*arg4 s> 0)
            *arg4 = 0
            sub_142a65700(arg1, arg2, arg4)
        else
            *arg3 = 1
    else
        sub_142a49d00(arg2, arg1)
        *arg3 = 0

return arg2
