// 函数: agsCheckDriverVersion
// 地址: 0x142c516e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int32_t arg_8 = 0
    int32_t arg_18 = 0
    int32_t arg_20 = 0
    int32_t* var_18_1 = &arg_20
    int32_t rax_1 = sub_142c51780(arg1, "%d.%d.%d", &arg_8)
    
    if (rax_1 != 2)
        if (rax_1 s> 2)
            int32_t rax_7 = arg_8
            
            if (rax_7 s> 0 && arg_18 s>= 0)
                int32_t rdx = arg_20
                
                if (rdx s>= 0)
                    if (((rax_7 << 0xa | arg_18) << 0xc | rdx) u< arg2)
                        return 1
                    
                    return 0
    else if ((arg_8 << 0xa | arg_18) << 0xc u> (arg2 & 0xfffff000))
        return 0

return 2
