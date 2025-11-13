// 函数: sub_140ee8970
// 地址: 0x140ee8970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t* var_68

if (*(arg1 + 0x3b0) s> 0)
    do
        (*(*(arg1 + 0x398) + 0x10))(arg1 + 0x398, &var_68, zx.q(i))
        int64_t* rcx_1 = var_68
        
        if (rcx_1 != data_143e244b0)
            sub_140de9860(rcx_1, *(arg1 + 0x3a0))
        
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t temp1_1 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        i += 1
    while (i s< *(arg1 + 0x3b0))

void** result = sub_14095cd40(arg1 + 0x3a8, 0)
int32_t i_1 = 0
int32_t i_2 = 0

if (*(arg1 + 0x20) s> 0)
    int64_t rdx_3 = 0
    int64_t arg_20 = 0
    
    do
        int32_t j = 0
        int64_t* rbp_2 = *(arg1 + 0x18) + rdx_3
        int32_t j_1 = 0
        var_68 = rbp_2
        
        if (rbp_2[6].d s> 0)
            int64_t* r14_1 = nullptr
            int64_t* arg_18 = nullptr
            
            do
                int64_t rax_4 = rbp_2[5]
                int64_t* rdi_1 = *(r14_1 + rax_4 + 8)
                int64_t* rbx_2 = *(r14_1 + rax_4)
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                    
                    if (rdi_1 != 0)
                        int32_t rax_5 = rdi_1[1].d
                        rdi_1[1].d = rax_5
                        
                        if (rax_5 == 0)
                            (**rdi_1)(rdi_1)
                            int32_t temp3_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                
                result = (*(*rbx_2 + 0x98))(rbx_2)
                int32_t k = 0
                void** result_1 = result
                
                if (result[1].d s> 0)
                    int64_t r14_2 = 0
                    
                    do
                        int64_t* rcx_8 = *(arg1 + 0x3a0)
                        int64_t* rsi_1 = *result_1 + r14_2
                        
                        if (rcx_8 != 0 && *(arg1 + 0x3b8) != 0)
                            sub_140e19ef0(rcx_8, 8)
                        
                        int64_t rbx_3 = sx.q(*(arg1 + 0x3b0))
                        int32_t rax_9 = (rbx_3 + 1).d
                        *(arg1 + 0x3b0) = rax_9
                        
                        if (rax_9 s> *(arg1 + 0x3b4))
                            sub_1405a4f90(arg1 + 0x3a8)
                        
                        int64_t* rcx_12 = (rbx_3 << 4) + *(arg1 + 0x3a8)
                        *rcx_12 = *rsi_1
                        result = rsi_1[1]
                        rcx_12[1] = result
                        
                        if (result != 0)
                            result[1].d += 1
                        
                        void* rcx_13 = *(arg1 + 0x3a0)
                        
                        if (rcx_13 != 0)
                            result = data_143e244b0
                            
                            if (*rsi_1 != result)
                                int64_t* rbx_4 = *(rcx_13 + 0x10)
                                int64_t rdx_6 = 0
                                
                                if (rbx_4 != 0)
                                    int32_t rax_11 = rbx_4[1].d
                                    
                                    if (rax_11 == 0)
                                        rbx_4 = nullptr
                                    else
                                        rbx_4[1].d = rax_11 + 1
                                        
                                        if (rbx_4 != 0)
                                            rdx_6 = *(rcx_13 + 8)
                                
                                int64_t var_58 = rdx_6
                                int64_t* var_50_1 = rbx_4
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d += 1
                                
                                result = sub_140de86e0(*rsi_1, &var_58)
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d -= 1
                                    
                                    if (rbx_4[1].d == 1)
                                        result = (**rbx_4)(rbx_4)
                                        int32_t temp6_1 = *(rbx_4 + 0xc)
                                        *(rbx_4 + 0xc) -= 1
                                        
                                        if (temp6_1 == 1)
                                            result = (*(*rbx_4 + 8))(rbx_4, 1)
                        
                        k += 1
                        r14_2 += 0x10
                    while (k s< result_1[1].d)
                    
                    j = j_1
                    r14_1 = arg_18
                    rbp_2 = var_68
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        result = (**rdi_1)(rdi_1)
                        int32_t temp4_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            result = (*(*rdi_1 + 8))(rdi_1, 1)
                
                j += 1
                r14_1 = &r14_1[6]
                j_1 = j
                arg_18 = r14_1
            while (j s< rbp_2[6].d)
            
            i_1 = i_2
            rdx_3 = arg_20
        
        i_1 += 1
        rdx_3 += 0x70
        i_2 = i_1
        arg_20 = rdx_3
    while (i_1 s< *(arg1 + 0x20))

return result
