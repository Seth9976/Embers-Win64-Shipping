// 函数: sub_140d76490
// 地址: 0x140d76490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    if (*arg2 != 0x4542a41922d44c94 || arg2[1] != -0x3031c1f6d9518d5e)
        return 0x80070057
    
    int64_t r9 = **arg3
    
    if (*(arg1 + 0x40) != 0)
        int64_t* arg_18 = nullptr
        int64_t* rcx_3
        int32_t rbx_1
        
        if (r9(arg3, &data_1434cb230, &arg_18) s< 0)
            rbx_1 = -0x7fff0001
        label_140d76585:
            rcx_3 = arg_18
        label_140d7658d:
            
            if (rcx_3 != 0)
                int64_t rdx_1 = *rcx_3
                (*(rdx_1 + 0x10))(rcx_3, rdx_1)
            
            return zx.q(rbx_1)
        
        int64_t rax_7 = *arg3
        int64_t* var_18 = nullptr
        int32_t rax_8 = (*rax_7)(arg3, &data_1434cb230, &var_18)
        rcx_3 = arg_18
        int64_t* rdx = var_18
        
        if (rax_8 s< 0)
            rbx_1 = -0x7fff0001
        label_140d76576:
            
            if (rdx == 0)
                goto label_140d7658d
            
            int64_t r8_3 = *rdx
            (*(r8_3 + 0x10))(rdx, rdx, r8_3)
            goto label_140d76585
        
        if (rcx_3 != rdx)
            rbx_1 = -0x7ffbfdff
            goto label_140d76576
        
        if (rdx != 0)
            (*(*rdx + 0x10))(rdx)
            rcx_3 = arg_18
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
        
        *(arg1 + 0x50) = arg4
        return 0
    
    if (r9(arg3, &data_1434cb250, arg1 + 0x40) s>= 0 && *(arg1 + 0x40) != 0)
        *(arg1 + 0x50) = arg4
        return 0

return 0x8000ffff
