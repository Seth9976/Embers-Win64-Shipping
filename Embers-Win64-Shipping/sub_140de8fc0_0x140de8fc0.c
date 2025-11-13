// 函数: sub_140de8fc0
// 地址: 0x140de8fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x59].b == 0)
    arg1[0x59].b = 1
    uint64_t rbp_1 = arg1[0x57]
    arg1[0x57] = 0
    int32_t r14_1 = *(arg1 + 0x2c4)
    int32_t i_1 = arg1[0x58].d
    int32_t var_1c_1 = r14_1
    arg1[0x58] = 0
    uint64_t var_28 = rbp_1
    sub_140e0f7b0(&arg1[0x57], 0)
    
    if (i_1 != 0)
        uint64_t rbx_1 = rbp_1
        int32_t i
        
        do
            int64_t* rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
            
            rbx_1 += 8
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t var_20_1 = 0
    
    if (r14_1 != 0)
        sub_140638c50(&var_28, 0)
        rbp_1 = var_28
    
    if (rbp_1 != 0)
        sub_140a74f90(rbp_1)
    
    arg1[0x59].b = 0

return sub_140e19ef0(arg1, 1) __tailcall
