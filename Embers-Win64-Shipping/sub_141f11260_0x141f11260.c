// 函数: sub_141f11260
// 地址: 0x141f11260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140d3c6e0(arg2 + 0x74)
int64_t* result_1 = result

if (result != 0)
    void var_a8
    int64_t r10_1 = sx.q(sub_141f020c0(&result_1[0x53], sub_141f2d540(&var_a8, arg1, 0xffffffff)))
    
    if (r10_1.d != 0xffffffff)
        int32_t rdx_2 = result_1[0x54].d
        int32_t rcx_5 = rdx_2 - r10_1.d - 1
        
        if (rcx_5 s>= 1)
            rcx_5 = 1
        
        if (rcx_5 != 0)
            memcpy(r10_1 * 0x8c + result_1[0x53], sx.q(rdx_2 - rcx_5) * 0x8c + result_1[0x53], 
                rcx_5 * 0x8c)
            rdx_2 = result_1[0x54].d
        
        result_1[0x54].d = rdx_2 - 1
    
    result = sub_141f020c0(&arg1[0x53], arg2)
    int64_t r10_2 = sx.q(result.d)
    
    if (r10_2.d != 0xffffffff)
        data_143f3ad98 += 1
        int32_t rdx_7 = arg1[0x54].d
        int32_t rcx_11 = rdx_7 - r10_2.d - 1
        
        if (rcx_11 s>= 1)
            rcx_11 = 1
        
        if (rcx_11 != 0)
            memcpy(r10_2 * 0x8c + arg1[0x53], sx.q(rdx_7 - rcx_11) * 0x8c + arg1[0x53], 
                rcx_11 * 0x8c)
            rdx_7 = arg1[0x54].d
        
        arg1[0x54].d = rdx_7 - 1
        result = arg1[0x15]
        
        if (result == 0)
            result = sub_141ee69e0(arg1)
        
        if (arg3 != 0 && result != 0)
            result = sub_1424385d0(result)
            
            if (result.b != 0)
                int64_t* rdi_1 = result_1[0x14]
                int64_t* rbx_3 = arg1[0x14]
                
                if (rdi_1 != 0)
                    int64_t* var_d8
                    int64_t* var_d0
                    int64_t* result_2
                    
                    if (arg4 == 0 && sub_141f1e3a0(arg1) != 0)
                        int32_t rsi_1 = *(arg2 + 0x60)
                        sub_141f1a100(arg1 + 0x3da, &var_d8)
                        int64_t* rcx_18 = var_d8
                        
                        if (rcx_18 != 0)
                            result_2 = arg1
                            int64_t* var_c0_1 = rdi_1
                            int64_t* result_3 = result_1
                            int32_t var_b0_1 = rsi_1
                            sub_1405a9f90(rcx_18, &result_2)
                        
                        if (var_d0 != 0)
                            var_d0[1].d -= 1
                            
                            if (var_d0[1].d == 1)
                                (**var_d0)(var_d0)
                                int32_t temp3_1 = *(var_d0 + 0xc)
                                *(var_d0 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    (*(*var_d0 + 8))(var_d0, 1)
                    
                    result = sub_141f1e3a0(result_1)
                    
                    if (result.b != 0)
                        result = sub_141f1a100(result_1 + 0x3da, &var_d8)
                        int64_t* rcx_23 = var_d8
                        
                        if (rcx_23 != 0)
                            result_2 = result_1
                            int64_t* var_c0_2 = rbx_3
                            int64_t* var_b8_1 = arg1
                            int32_t var_b0_2 = 0xffffffff
                            result = sub_1405a9f90(rcx_23, &result_2)
                        
                        if (var_d0 != 0)
                            var_d0[1].d -= 1
                            
                            if (var_d0[1].d == 1)
                                result = (**var_d0)(var_d0)
                                int32_t temp2_1 = *(var_d0 + 0xc)
                                *(var_d0 + 0xc) -= 1
                                
                                if (temp2_1 == 1)
                                    result = (*(*var_d0 + 8))(var_d0, 1)
                    
                    if (rbx_3 != 0 && rbx_3 != rdi_1)
                        int64_t* rdx_15 = rdi_1
                        int64_t* rcx_26 = rbx_3
                        int32_t r8_3 = rdi_1[0x35].d - *(rdi_1 + 0x1d4)
                        int32_t rax_14 = rbx_3[0x35].d - *(rbx_3 + 0x1d4)
                        
                        if (rax_14 s> r8_3)
                            rdx_15 = rbx_3
                        
                        if (rax_14 s> r8_3)
                            rcx_26 = rdi_1
                        
                        result = sub_141dce3b0(rcx_26, rdx_15)
                        
                        if (result.b == 0)
                            if (sub_141dcded0(rbx_3) != 0)
                                (*(*rbx_3 + 0x340))(rbx_3, rdi_1)
                                sub_141f001a0(rbx_3 + 0x184, rbx_3)
                            
                            result = sub_141dcded0(rdi_1)
                            
                            if (result.b != 0)
                                (*(*rdi_1 + 0x340))(rdi_1, rbx_3)
                                return sub_141f001a0(rdi_1 + 0x184, rdi_1)

return result
