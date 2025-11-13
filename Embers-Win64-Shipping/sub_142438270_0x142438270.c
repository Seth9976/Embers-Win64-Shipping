// 函数: sub_142438270
// 地址: 0x142438270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t arg_20 = 0

if (arg4 != 0 && *(arg4 + 0x188) != 0)
    int64_t var_68 = 0
    int64_t var_60_1 = 0
    sub_140b295a0(&arg_10, &var_68, 0)
    int64_t* var_78 = nullptr
    int32_t i_2 = 0
    int32_t rbx_1 = 1
    
    if (sub_140a2ccb0(&var_68, &var_78, U"?", 1) s> 1)
        int64_t* rcx_2 = var_78
        
        if (&var_68 != rcx_2)
            int32_t rdi_1 = rcx_2[1].d
            int32_t r8 = var_60_1:4.d
            int64_t r14_1 = *rcx_2
            var_60_1.d = rdi_1
            
            if (rdi_1 != 0 || r8 != 0)
                sub_1405a4c70(&var_68, rdi_1, r8)
                memcpy(var_68, r14_1, rdi_1 * 2)
                rcx_2 = var_78
            else
                var_60_1:4.d = 0
        
        int64_t rax_1 = *rcx_2
        
        if (rax_1 != 0)
            sub_140a74f90(rax_1)
            rcx_2 = var_78
        
        int32_t i_3 = i_2
        int32_t rdx_4 = i_3 - 1
        
        if (rdx_4 s>= 1)
            rdx_4 = 1
        
        if (rdx_4 != 0)
            memcpy(rcx_2, &rcx_2[sx.q(i_3 - rdx_4) * 2], rdx_4 << 4)
            i_3 = i_2
        
        i_2 = i_3 - 1
        sub_140638bc0(&var_78)
    
    int32_t rdi_2 = var_60_1.d
    uint64_t var_58
    int64_t var_38
    int64_t* rcx_8
    
    if (rdi_2 s> 1)
        int64_t rbx_2 = var_68
        var_58 = 0
        int32_t var_50_1 = rdi_2
        
        if (rdi_2 != 0)
            sub_1405a4c70(&var_58, rdi_2, 0)
            memcpy(var_58, rbx_2, rdi_2 * 2)
        else
            int32_t var_4c_1 = 0
        
        rcx_8 = &var_58
        rbx_1 = 2
    else
        rcx_8 = sub_142436cb0(arg4, &var_38)
    
    int64_t var_48 = *rcx_8
    *rcx_8 = 0
    int32_t var_40_1 = rcx_8[1].d
    int32_t var_3c_1 = *(rcx_8 + 0xc)
    rcx_8[1] = 0
    
    if ((rbx_1.b & 2) != 0)
        uint64_t rcx_11 = var_58
        rbx_1 &= 0xfffffffd
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
    
    if ((rbx_1.b & 1) != 0)
        int64_t rcx_12 = var_38
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    int64_t* rcx_13 = *(arg4 + 0x188)
    (*(*rcx_13 + 0x2f0))(rcx_13, &var_68, &var_48, &var_78)
    int64_t rcx_14 = var_48
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int32_t i_1 = i_2
    int64_t* rbx_3 = var_78
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_15 = *rbx_3
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            rbx_3 = &rbx_3[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_3 = var_78
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    int64_t rcx_17 = var_68
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

int64_t result
result.b = 1
return result
