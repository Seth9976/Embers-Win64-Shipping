// 函数: sub_140ea3a80
// 地址: 0x140ea3a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r12 = 0
int32_t arg_8 = 0

if (*(arg1 + 0x78) == 0)
    return &__return_addr

char rax_4

if (*(*(arg1 + 8) + 0x58) s<= 1)
    if (data_143e2a050 == 0)
        rax_4 = data_143e2a040
    else
        int64_t* rcx = data_143e2a048
        
        if (rcx == 0)
            rax_4 = data_143e2a040
        else if ((*(*rcx + 0x28))(rcx) == 0)
            rax_4 = data_143e2a040
        else
            int64_t* rcx_1 = nullptr
            
            if (data_143e2a050 != 0)
                rcx_1 = data_143e2a048
            
            rax_4 = (*(*rcx_1 + 0x48))(rcx_1)
            data_143e2a040 = rax_4

if (*(*(arg1 + 8) + 0x58) s> 1 || rax_4 != 0)
    void*** rax_5 = j_sub_140a82f30(0x98)
    void*** rsi_1 = rax_5
    
    if (rax_5 == 0)
        rsi_1 = nullptr
    else
        int64_t r9_1 = *(arg1 + 0x58)
        int128_t var_68
        __builtin_memset(&var_68, 0, 0x20)
        int128_t var_58
        sub_140e96910(rax_5, &var_58, &var_68, r9_1, 5, 1)
        *rsi_1 = &data_142edc918
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_6
    
    if (rax_6 == 0)
        rbx_1 = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rbx_1 = &data_142d42ea8
        rbx_1[2] = rsi_1
    
    void*** var_88 = rsi_1
    void**** rdi_1 = &rsi_1[1]
    void*** var_80_1 = rbx_1
    
    if (rsi_1 == 0)
        rdi_1 = nullptr
    
    if (rdi_1 != 0)
        void* rax_7
        
        if (*rdi_1 != 0)
            rax_7 = rdi_1[1]
        
        if (*rdi_1 == 0 || rax_7 == 0 || *(rax_7 + 8) s<= 0)
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *rdi_1 = rsi_1
            int64_t* rcx_3 = rdi_1[1]
            
            if (rbx_1 != rcx_3)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx_3 = rdi_1[1]
                
                if (rcx_3 != 0)
                    int32_t temp3_1 = *(rcx_3 + 0xc)
                    *(rcx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rcx_3 + 8))(rcx_3, 1)
                
                rdi_1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*rbx_1)[1](rbx_1, 1)
    
    sub_140ea20e0(*(arg1 + 8), &var_88)

if (sub_140ab3dc0(arg1 + 0x60) == 0)
    void*** rax_12 = j_sub_140a82f30(0xc8)
    void*** rdi_2 = rax_12
    int64_t* var_b0
    int64_t var_98
    
    if (rax_12 == 0)
        rdi_2 = nullptr
    else
        int64_t* rbx_2 = *(arg1 + 0x68)
        int64_t rsi_2 = *(arg1 + 0x60)
        int64_t var_b8_1 = rsi_2
        var_b0 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int32_t r12_1 = *(arg1 + 0x70)
        int64_t r9_2 = *(arg1 + 0x58)
        int32_t var_a8_1 = r12_1
        char var_a0_1 = 1
        int128_t var_48
        __builtin_memset(&var_48, 0, 0x20)
        var_98 = 0
        int32_t var_90_1 = 0
        int128_t var_38
        sub_140e96910(rdi_2, &var_38, &var_48, r9_2, 3, 1)
        *rdi_2 = &data_142edd9b0
        rdi_2[0x13] = rsi_2
        rdi_2[0x14] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        rdi_2[0x15].d = r12_1
        rdi_2[0x16].b = 1
        rdi_2[0x17] = 0
        rdi_2[0x18].d = 0
        sub_140692f90(&rdi_2[0x17], &var_98)
        r12 = 1
    
    int64_t* rax_13 = j_sub_140a82f30(0x18)
    int64_t* rbx_3 = rax_13
    
    if (rax_13 == 0)
        rbx_3 = nullptr
    else
        rax_13[1].d = 1
        *(rax_13 + 0xc) = 1
        *rbx_3 = &data_142d42ea8
        rbx_3[2] = rdi_2
    
    void*** var_78 = rdi_2
    void**** rsi_3 = &rdi_2[1]
    int64_t* var_70_1 = rbx_3
    
    if (rdi_2 == 0)
        rsi_3 = nullptr
    
    if (rsi_3 != 0)
        void* rax_14
        
        if (*rsi_3 != 0)
            rax_14 = rsi_3[1]
        
        if (*rsi_3 == 0 || rax_14 == 0 || *(rax_14 + 8) s<= 0)
            if (rbx_3 != 0)
                rbx_3[1].d += 1
            
            *rsi_3 = rdi_2
            int64_t* rcx_10 = rsi_3[1]
            
            if (rbx_3 != rcx_10)
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                    rcx_10 = rsi_3[1]
                
                if (rcx_10 != 0)
                    int32_t temp6_1 = *(rcx_10 + 0xc)
                    *(rcx_10 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rcx_10 + 8))(rcx_10, 1)
                
                rsi_3[1] = rbx_3
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp5_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
    
    sub_140ea20e0(*(arg1 + 8), &var_78)
    
    if ((r12 & 1) != 0)
        sub_140745b20(&var_98)
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t rdi_3 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (rdi_3 == 1)
                    (*(*var_b0 + 8))(var_b0, zx.q(rdi_3))

*(arg1 + 0x78) = 0
sub_1405d9400()
return sub_14065da90(arg1 + 0x60, &data_143cd6fd8)
