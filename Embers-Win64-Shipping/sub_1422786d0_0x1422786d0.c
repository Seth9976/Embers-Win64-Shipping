// 函数: sub_1422786d0
// 地址: 0x1422786d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t var_18
    int32_t* rax
    
    if ((*(arg1 + 0x56c) & 1) == 0 && *data_143f525b8 s<= 0)
        if (arg1 + 0x380 != &var_18)
            *(arg1 + 0x380) = 0
            int64_t* rdi_1 = *(arg1 + 0x388)
            
            if (rdi_1 != 0)
                *(arg1 + 0x388) = 0
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp2_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (*(arg1 + 0x298) != 0)
            int64_t* rcx_2 = data_143e20d18
            rax = (*(*rcx_2 + 0xe0))(rcx_2)
            
            if (rax != 0)
                int64_t r10_1 = *rax
                uint64_t rdx = zx.q(*(*(arg1 + 0x298) + 0xb8))
                var_18 = 0
                (*(r10_1 + 0x18))(rax, rdx, 0, &var_18, var_18, 0)
    
    if ((*(arg1 + 0x56c) & 1) == 0)
        if (*data_143f525b8 s<= 0)
            if (arg1 + 0x390 != &var_18)
                *(arg1 + 0x390) = 0
                int64_t* rdi_2 = *(arg1 + 0x398)
                
                if (rdi_2 != 0)
                    *(arg1 + 0x398) = 0
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp3_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (*(arg1 + 0x298) != 0)
                int64_t* rcx_7 = data_143e20d18
                rax = (*(*rcx_7 + 0xe0))(rcx_7)
                
                if (rax != 0)
                    int64_t r10_2 = *rax
                    uint64_t rdx_1 = zx.q(*(*(arg1 + 0x298) + 0xb8))
                    var_18 = 0
                    (*(r10_2 + 0x18))(rax, rdx_1, 1, &var_18, var_18, 0)
        
        if ((*(arg1 + 0x56c) & 1) == 0 && *data_143f525b8 s<= 0)
            if (arg1 + 0x3a0 != &var_18)
                *(arg1 + 0x3a0) = 0
                int64_t* rdi_3 = *(arg1 + 0x3a8)
                
                if (rdi_3 != 0)
                    *(arg1 + 0x3a8) = 0
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        (**rdi_3)(rdi_3)
                        int32_t temp5_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rdi_3 + 8))(rdi_3, 1)
            
            if (*(arg1 + 0x298) != 0)
                int64_t* rcx_12 = data_143e20d18
                rax = (*(*rcx_12 + 0xe0))(rcx_12)
                
                if (rax != 0)
                    int64_t r10_3 = *rax
                    uint64_t rdx_2 = zx.q(*(*(arg1 + 0x298) + 0xb8))
                    var_18 = 0
                    (*(r10_3 + 0x18))(rax, rdx_2, 5, &var_18, var_18, 0)

*(arg1 + 0x56c) &= 0xfe
*(arg1 + 0x56c) |= arg2
