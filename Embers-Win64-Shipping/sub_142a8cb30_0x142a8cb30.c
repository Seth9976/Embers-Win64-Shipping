// 函数: sub_142a8cb30
// 地址: 0x142a8cb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[7].d

if (*arg3 s<= 0)
    int32_t rax_1 = arg1[1].d
    
    if (r8 + 2 s<= rax_1)
    label_142a8cb93:
        int64_t rax_4 = sx.q(arg1[7].d)
        arg1[7].d = rax_4.d + 1
        *(rax_4 + *arg1) = arg2
        *(sx.q(arg1[7].d) + *arg1) = 0
    else
        int32_t rdx = rax_1 + r8 + 2
        int64_t rax_2
        
        if (rdx s> r8 + 2)
            rax_2 = sub_142a46cb0(arg1, rdx, r8 + 1)
        
        if (rdx s> r8 + 2 && rax_2 != 0)
            goto label_142a8cb93
        
        if (sub_142a46cb0(arg1, r8 + 2, arg1[7].d + 1) != 0)
            goto label_142a8cb93
        
        *arg3 = 7

return arg1
