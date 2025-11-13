// 函数: sub_142a2bdc0
// 地址: 0x142a2bdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10e8) != 0)
    if (*(arg1 + 0x10e9) != 0)
        int32_t rax = sub_142a2c660(arg5, arg1 + 0x10e8)
        int32_t r8_1 = 0
        
        if (arg4 s> 0)
            do
                int32_t rcx_1 = 0
                
                if (arg3 s> 0)
                    do
                        int32_t rax_3 = r8_1 * *(arg1 + 0x364) + rcx_1
                        rcx_1 += 1
                        *(sx.q(rax_3 + arg2) + *(arg1 + 0x448)) = rax.b
                    while (rcx_1 s< arg3)
                
                r8_1 += 1
            while (r8_1 s< arg4)
        
        return zx.q(rax)
    
    sub_142a29f20(arg1, *(arg1 + 0x440), *(arg1 + 0x448), arg2, arg3, arg4)

return 0
