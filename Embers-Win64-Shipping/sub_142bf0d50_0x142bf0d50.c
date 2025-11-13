// 函数: sub_142bf0d50
// 地址: 0x142bf0d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg3 != 0 && arg2 != 0)
    int32_t var_60_1 = arg5
    int32_t var_50_1 = *arg3
    int64_t var_68 = arg4
    int64_t (* var_38_1)(int64_t arg1, int32_t arg2, int32_t arg3) = sub_142bf1020
    int64_t var_58_1 = arg2
    int64_t var_28_1 = arg1
    int64_t (* var_30_1)(int64_t arg1, int64_t arg2) = j_sub_142b99980
    
    if (sub_140371b70(&var_68, 0xf, "1.2.8", 0x58) == 0)
        int32_t rax_5 = sub_140371df0(&var_68, 4)
        int64_t* rcx_2 = &var_68
        int32_t rbx = rax_5
        
        if (rax_5 == 1)
            int32_t var_4c
            *arg3 = var_4c
            rbx = sub_140374100(rcx_2)
        label_142bf0e0c:
            
            if (rbx == 0xfffffffc)
                return zx.q(rbx + 0x44)
            
            if (rbx != 0xfffffffb)
                if (rbx == 0xfffffffd)
                    return 8
                
                return 0
        else
            sub_140374100(rcx_2)
            
            if (rbx != 0)
                goto label_142bf0e0c
        
        return 0xa

return 6
