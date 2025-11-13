// 函数: sub_142a8cd90
// 地址: 0x142a8cd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s<= 0)
    if (sub_142a8d900(arg2, arg3) != 0)
        int32_t r8 = arg1[7].d
        int32_t rsi_2 = arg3 + 1 + r8
        
        if (*arg4 s<= 0)
            int32_t rax_2 = arg1[1].d
            
            if (rsi_2 s<= rax_2)
            label_142a8ce2f:
                sub_142a8d6e0(arg2, sx.q(arg1[7].d) + *arg1, arg3)
                arg1[7].d += arg3
                *(sx.q(arg1[7].d) + *arg1) = 0
            else
                int32_t rdx_1 = rax_2 + rsi_2
                int64_t rax_3
                
                if (rdx_1 s> rsi_2)
                    rax_3 = sub_142a46cb0(arg1, rdx_1, r8 + 1)
                
                if (rdx_1 s> rsi_2 && rax_3 != 0)
                    goto label_142a8ce2f
                
                if (sub_142a46cb0(arg1, rsi_2, arg1[7].d + 1) != 0)
                    goto label_142a8ce2f
                
                *arg4 = 7
    else
        *arg4 = 0x1a

return arg1
