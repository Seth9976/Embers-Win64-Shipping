// 函数: sub_14242afb0
// 地址: 0x14242afb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1

if (*(result + 0x188) != 0)
    int32_t rbx_1 = arg1[2].d
    int64_t r14_1 = arg1[1]
    uint64_t var_38 = 0
    int32_t var_30_1 = rbx_1
    int32_t var_2c
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_38, rbx_1, 0)
        memcpy(var_38, r14_1, rbx_1 * 2)
    else
        var_2c = 0
    
    int64_t* var_48 = nullptr
    int32_t i_4 = 0
    
    if (sub_140a2ccb0(&arg1[1], &var_48, U"?", 1) s<= 1)
        int64_t* rcx_9 = *(*arg1 + 0x188)
        int64_t* var_28 = nullptr
        int32_t i_5 = 0
        result = (*(*rcx_9 + 0x300))(rcx_9, &var_38, 0, &var_28)
        int32_t i_2 = i_5
        int64_t* rbx_3 = var_28
        
        if (i_2 != 0)
            int32_t i
            
            do
                int64_t rcx_10 = *rbx_3
                
                if (rcx_10 != 0)
                    result = sub_140a74f90(rcx_10)
                
                rbx_3 = &rbx_3[2]
                i = i_2
                i_2 -= 1
            while (i != 1)
            rbx_3 = var_28
        
        if (rbx_3 != 0)
            result = sub_140a74f90(rbx_3)
    else
        int64_t* rcx_3 = var_48
        
        if (&var_38 != rcx_3)
            int32_t rbx_2 = rcx_3[1].d
            int64_t rsi_1 = *rcx_3
            int32_t var_30_2 = rbx_2
            
            if (rbx_2 != 0 || var_2c != 0)
                sub_1405a4c70(&var_38, rbx_2, var_2c)
                memcpy(var_38, rsi_1, rbx_2 * 2)
                rcx_3 = var_48
            else
                int32_t var_2c_1 = 0
        
        int64_t rax_1 = *rcx_3
        
        if (rax_1 != 0)
            sub_140a74f90(rax_1)
            rcx_3 = var_48
        
        int32_t i_6 = i_4
        int32_t rax_2 = i_6 - 1
        
        if (rax_2 s>= 1)
            rax_2 = 1
        
        if (rax_2 != 0)
            memcpy(rcx_3, &rcx_3[sx.q(i_6 - rax_2) * 2], rax_2 << 4)
            i_6 = i_4
        
        i_4 = i_6 - 1
        sub_140638bc0(&var_48)
        int64_t* rcx_8 = *(*arg1 + 0x188)
        result = (*(*rcx_8 + 0x300))(rcx_8, &var_38, 0, &var_48)
    
    int32_t i_3 = i_4
    int64_t* rbx_4 = var_48
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_12 = *rbx_4
            
            if (rcx_12 != 0)
                result = sub_140a74f90(rcx_12)
            
            rbx_4 = &rbx_4[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_4 = var_48
    
    if (rbx_4 != 0)
        result = sub_140a74f90(rbx_4)
    
    uint64_t rcx_14 = var_38
    
    if (rcx_14 != 0)
        return sub_140a74f90(rcx_14)

return result
