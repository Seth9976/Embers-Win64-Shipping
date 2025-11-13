// 函数: sub_140ebf760
// 地址: 0x140ebf760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1
*arg2 = 0

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(result + 0x80))
        break
    
    int64_t* rcx_2 = (sx.q(i) << 4) + *(result + 0x78)
    int64_t* rdi_1 = rcx_2[1]
    
    if (rdi_1 != 0)
        int32_t rax = rdi_1[1].d
        
        if (rax != 0)
            rdi_1[1].d = rax + 1
            
            if (rdi_1 != 0)
                void* rsi_1 = *rcx_2
                
                if (rsi_1 != 0)
                    int64_t j_3
                    sub_140ebf640(rsi_1, &j_3)
                    int64_t j = j_3
                    int64_t* var_50
                    
                    if (j != 0)
                        int64_t* r8 = *arg3
                        int64_t rdx_1 = sx.q(arg3[1].d)
                        int64_t* rax_2 = r8
                        int64_t r15_2 = rdx_1 * 2
                        void* rcx_4 = &r8[r15_2]
                        
                        if (r8 != rcx_4)
                            while (*rax_2 != j)
                                rax_2 = &rax_2[2]
                                
                                if (rax_2 == rcx_4)
                                    goto label_140ebf83c
                        
                        if (r8 == rcx_4 || ((rax_2 - r8) s>> 4).d == 0xffffffff)
                        label_140ebf83c:
                            int32_t rax_5 = (rdx_1 + 1).d
                            arg3[1].d = rax_5
                            
                            if (rax_5 s> *(arg3 + 0xc))
                                sub_1405a4f90(arg3)
                            
                            int64_t rax_6 = *arg3
                            *(rax_6 + (r15_2 << 3)) = j
                            *(rax_6 + (r15_2 << 3) + 8) = var_50
                            
                            if (var_50 != 0)
                                var_50[1].d += 1
                    
                    rdi_1[1].d += 1
                    void* var_68 = nullptr
                    int32_t j_5 = 0
                    void* var_48 = rsi_1
                    int64_t* var_40_1 = rdi_1
                    sub_140ebda30(&var_48, &var_68)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp3_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                    
                    int32_t j_4 = j_5
                    int32_t j_1 = 0
                    void* r15_3 = var_68
                    
                    for (; j_1 s>= 0; j_1 += 1)
                        if (j_1 s>= j_4)
                            break
                        
                        int64_t* rcx_10 = *(*(r15_3 + sx.q(j_1) * 0x10) + 0x3f0) + 0x2a8
                        int32_t rax_13 = (**rcx_10)(rcx_10)
                        *arg2 += rax_13
                    
                    if (j_4 != 0)
                        int64_t* rsi_2 = r15_3 + 8
                        int32_t j_2
                        
                        do
                            int64_t* rbx_1 = *rsi_2
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t temp8_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (temp8_1 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            rsi_2 = &rsi_2[2]
                            j_2 = j_4
                            j_4 -= 1
                        while (j_2 != 1)
                    
                    if (r15_3 != 0)
                        sub_140a74f90(r15_3)
                    
                    if (var_50 != 0)
                        var_50[1].d -= 1
                        
                        if (var_50[1].d == 1)
                            (**var_50)(var_50)
                            int32_t temp7_1 = *(var_50 + 0xc)
                            *(var_50 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*var_50 + 8))(var_50, 1)
                
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
    
    result = arg1

return result
