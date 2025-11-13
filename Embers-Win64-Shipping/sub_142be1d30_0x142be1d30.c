// 函数: sub_142be1d30
// 地址: 0x142be1d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x46c)

if (rax != 0)
    int32_t rax_4
    
    if (rax u<= 2)
        void var_58
        rax_4 = sub_142bea320(&var_58, arg1, arg2, arg8, arg5)
        
        if (rax_4 != 0)
            return rax_4
        
        rax_4 = sub_142bead10(&var_58, arg3, 0, 0, arg5, 0, (arg4 u>> 0x16).b & 1)
    label_142be1de6:
        
        if (rax_4 != 0)
            return rax_4
        
        if (not(test_bit(arg4, 0x14)) && not(test_bit(arg4, 0x16)) && *(arg7 + 0x1a) == 7)
            int64_t* rbp_1 = **(arg1 + 0x78)
            sub_142b9c6b0(&var_58)
            int32_t rax_8 = sub_142b9bfa0(rbp_1, arg7, &var_58, 1)
            
            if (rax_8 != 0)
                sub_142b9c640(rbp_1, &var_58)
                return rax_8
            
            char var_3e
            *(arg7 + 0x1a) = var_3e
            int32_t var_50
            arg7[2] = var_50
            int16_t var_40
            arg7[6].w = var_40
            int64_t var_48
            sub_142b99180(*(arg1 + 0x78), var_48)
            void* rcx_6 = *(*(arg1 + 0x78) + 0xf0)
            rax_4 = rax_8
            *(rcx_6 + 8) |= 1
        
        return rax_4
    
    if (rax == 3)
        uint8_t var_68_1 = (arg4 u>> 0x16).b & 1
        char var_70
        var_70.q = arg8
        int32_t var_78
        var_78.q = arg7
        rax_4 = sub_142be9df0(arg1, arg2, arg3, arg6, arg5, var_78, var_70)
        goto label_142be1de6

return 2
