// 函数: sub_141b358a0
// 地址: 0x141b358a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t result = *(arg1 + 0xe0)

if (*(arg1 + 0x728) != result)
    int64_t var_20_1 = 0
    *(arg1 + 0x728) = result
    int32_t var_18_1 = 0
    int32_t var_14_1 = 1
    void var_38
    sub_141aec4c0(&var_38, arg1 + 0xe8)
    sub_141aec4c0(&var_38, arg1 + 0x188)
    sub_141aec4c0(&var_38, arg1 + 0x228)
    sub_141aec4c0(&var_38, arg1 + 0x2c8)
    sub_141aec4c0(&var_38, arg1 + 0x368)
    sub_141aec4c0(&var_38, arg1 + 0x408)
    sub_141aec4c0(&var_38, arg1 + 0x4a8)
    sub_141aec4c0(&var_38, arg1 + 0x548)
    sub_141aec4c0(&var_38, arg1 + 0x5e8)
    sub_141aec4c0(&var_38, arg1 + 0x688)
    void*** rax_2 = j_sub_140a82f30(0x48)
    void*** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rbx_1 = &data_142d4caa0
        rbx_1[2] = 0
        rbx_1[3] = 0
        rbx_1[7] = 0
        
        if (var_20_1 == 0)
            memmove(&rbx_1[4], &var_38, 0x18)
        
        int64_t rcx_11 = rbx_1[7]
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        rbx_1[7] = var_20_1
        int64_t var_20_2 = 0
        rbx_1[8].d = var_18_1
        *(rbx_1 + 0x44) = var_14_1
        int32_t var_18_2 = 0
        int32_t var_14_2 = 1
    
    if (rbx_1 == -0x10)
    label_141b35aa8:
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
    else
        void* rax_6
        
        if (rbx_1[2] != 0)
            rax_6 = rbx_1[3]
        
        if (rbx_1[2] != 0 && rax_6 != 0 && *(rax_6 + 8) s> 0)
            goto label_141b35aa8
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        rbx_1[2] = &rbx_1[2]
        int64_t* rcx_12 = rbx_1[3]
        
        if (rbx_1 != rcx_12)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_12 = rbx_1[3]
            
            if (rcx_12 != 0)
                int32_t temp7_1 = *(rcx_12 + 0xc)
                *(rcx_12 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rcx_12 + 8))(rcx_12, 1)
            
            rbx_1[3] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
            
            goto label_141b35aa8
    
    void var_48
    void** rax_12
    void*** rcx_16
    
    if (arg1 + 0xd0 != &var_48)
        *(arg1 + 0xd0) = &rbx_1[2]
        void*** rdi_2 = *(arg1 + 0xd8)
        
        if (rbx_1 == rdi_2)
            goto label_141b35af2
        
        *(arg1 + 0xd8) = rbx_1
        
        if (rdi_2 == 0)
            goto label_141b35b19
        
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d != 1)
            goto label_141b35b19
        
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 != 1)
            goto label_141b35b19
        
        rax_12 = *rdi_2
        rcx_16 = rdi_2
        goto label_141b35b16
    
label_141b35af2:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d != 1)
            goto label_141b35b19
        
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 != 1)
            goto label_141b35b19
        
        rax_12 = *rbx_1
        rcx_16 = rbx_1
    label_141b35b16:
        rax_12[1](rcx_16, 1)
    label_141b35b19:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp8_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    
    result = sub_1405ade00(&var_38)

__security_check_cookie(rax_1 ^ &var_68)
return result
