// 函数: sub_142a99c10
// 地址: 0x142a99c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) != 0)
    bool cond:2_1
    
    if ((*(arg1 + 0x18) & 1) == 0)
        int16_t rax_2 = *(arg1 + 0x18)
        int32_t r8_1
        
        if (rax_2 s< 0)
            r8_1 = *(arg1 + 0x1c)
        else
            r8_1 = sx.d(rax_2) s>> 5
        
        int16_t rax_3 = *(arg2 + 8)
        int32_t rax_5
        
        if (rax_3 s< 0)
            rax_5 = *(arg2 + 0xc)
        else
            rax_5 = sx.d(rax_3) s>> 5
        
        if ((*(arg2 + 8) & 1) == 0 && r8_1 == rax_5)
            cond:2_1 = sub_142a490e0(arg1 + 0x10, arg2, r8_1) == 0
            goto label_142a99c73
    else
        cond:2_1 = (*(arg2 + 8) & 1) == 0
    label_142a99c73:
        
        if (not(cond:2_1))
            sub_142a48100(arg4, arg1 + 0x10)
            return arg4

sub_142a4ab40(arg4)
return arg4
