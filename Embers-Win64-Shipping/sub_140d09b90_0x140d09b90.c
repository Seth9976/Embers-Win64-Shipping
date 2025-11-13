// 函数: sub_140d09b90
// 地址: 0x140d09b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[1]
int32_t r12 = arg3
int64_t* rbx = *arg1
void* r15 = arg2
int64_t* rsi = arg1
int32_t result_2 = *(rax + 8) - *(rax + 0x34)
uint64_t result = *(arg2 + 8)
int32_t result_1 = result_2

if (result_2 != *(result + 8) - *(result + 0x34))
label_140d09fc7:
    result.b = 0
else
    int32_t rbp_1 = 0
    int32_t r14_1 = 0
    
    if (result_2 != 0)
        while (true)
            void* r10_1 = rsi[1]
            
            while (true)
                if (rbp_1 s>= 0 && rbp_1 s< *(r10_1 + 0x28))
                    void* rax_1 = *(r10_1 + 0x20)
                    void* r8_2 = r10_1 + 0x10
                    
                    if (rax_1 != 0)
                        r8_2 = rax_1
                    
                    int32_t rax_2 = rbp_1
                    
                    if (rbp_1 s< 0)
                        rax_2 = rbp_1 + 0x1f
                    
                    if (test_bit(*(r8_2 + (sx.q(rax_2 s>> 5) << 2)), rbp_1 & 0x1f))
                        break
                
                rbp_1 += 1
            
            void* r9_1 = *(r15 + 8)
            int32_t var_68_1 = rbp_1
            
            while (true)
                if (r14_1 s>= 0 && r14_1 s< *(r9_1 + 0x28))
                    void* rax_5 = *(r9_1 + 0x20)
                    void* r8_3 = r9_1 + 0x10
                    
                    if (rax_5 != 0)
                        r8_3 = rax_5
                    
                    int32_t rax_6 = r14_1
                    
                    if (r14_1 s< 0)
                        rax_6 = r14_1 + 0x1f
                    
                    if (test_bit(*(r8_3 + (sx.q(rax_6 s>> 5) << 2)), r14_1 & 0x1f))
                        break
                
                r14_1 += 1
            
            int32_t var_64_1 = r14_1
            int64_t rdx_2
            
            if (*(r10_1 + 8) != *(r10_1 + 0x34))
                rdx_2 = sx.q(rsi[4].d * rbp_1) + *r10_1
            else
                rdx_2 = 0
            
            int64_t r8_4
            
            if (*(r9_1 + 8) != *(r9_1 + 0x34))
                r8_4 = sx.q(*(r15 + 0x20) * r14_1) + *r9_1
            else
                r8_4 = 0
            
            if ((*(*rbx + 0x80))(rbx, rdx_2, r8_4, zx.q(r12), var_68_1).b == 0)
                int32_t rdx_4 = 0
                int32_t var_5c_1 = rbp_1
                int32_t var_60_1 = 0
                int32_t r8_6 = rbp_1
                
                while (true)
                    void* rcx_5 = rsi[1]
                    int64_t r10_2
                    
                    if (*(rcx_5 + 8) != *(rcx_5 + 0x34))
                        r10_2 = sx.q(rsi[4].d * rbp_1) + *rcx_5
                    else
                        r10_2 = 0
                    
                    int64_t* r11_1 = *rsi
                    int32_t rdi_1 = rdx_4
                    int64_t* var_58_1 = r11_1
                    int32_t rbx_1 = r8_6
                    int64_t var_50_1 = r10_2
                    
                    if (rdx_4 != 0)
                        while (true)
                            void* r8_7 = rsi[1]
                            
                            if (rbx_1 s>= 0 && rbx_1 s< *(r8_7 + 0x28))
                                void* rax_19 = *(r8_7 + 0x20)
                                void* r9_3 = r8_7 + 0x10
                                
                                if (rax_19 != 0)
                                    r9_3 = rax_19
                                
                                int32_t rax_20 = rbx_1
                                
                                if (rbx_1 s< 0)
                                    rax_20 = rbx_1 + 0x1f
                                
                                if (test_bit(*(r9_3 + (sx.q(rax_20 s>> 5) << 2)), rbx_1 & 0x1f))
                                    int64_t rdx_6
                                    
                                    if (*(r8_7 + 8) != *(r8_7 + 0x34))
                                        rdx_6 = sx.q(rsi[4].d * rbx_1) + *r8_7
                                    else
                                        rdx_6 = 0
                                    
                                    if ((*(*r11_1 + 0x80))(r11_1, rdx_6, r10_2, zx.q(r12), 
                                            var_68_1, var_60_1, var_58_1, var_50_1).b != 0)
                                        goto label_140d09f19
                                    
                                    rbx_1 += 1
                                    int32_t temp1_1 = rdi_1
                                    rdi_1 -= 1
                                    
                                    if (temp1_1 == 1)
                                        r11_1 = *rsi
                                        var_58_1 = r11_1
                                        break
                                    
                                    r11_1 = var_58_1
                                    r10_2 = var_50_1
                                    continue
                            
                            rbx_1 += 1
                    
                    result = zx.q(result_1)
                    int32_t r12_1 = 0
                    int32_t r15_1 = 0
                    int32_t i_1 = result.d
                    int32_t rdi_2 = r14_1
                    int32_t rbx_2 = rbp_1
                    
                    if (result.d != 0)
                        int32_t i
                        
                        do
                            void* r10_4 = rsi[1]
                            
                            while (true)
                                if (rbx_2 s>= 0 && rbx_2 s< *(r10_4 + 0x28))
                                    void* rax_27 = *(r10_4 + 0x20)
                                    void* r8_9 = r10_4 + 0x10
                                    
                                    if (rax_27 != 0)
                                        r8_9 = rax_27
                                    
                                    int32_t rax_28 = rbx_2
                                    
                                    if (rbx_2 s< 0)
                                        rax_28 = rbx_2 + 0x1f
                                    
                                    if (test_bit(*(r8_9 + (sx.q(rax_28 s>> 5) << 2)), rbx_2 & 0x1f))
                                        break
                                
                                rbx_2 += 1
                            
                            void* r9_5 = *(arg2 + 8)
                            
                            while (true)
                                if (rdi_2 s>= 0 && rdi_2 s< *(r9_5 + 0x28))
                                    void* rax_31 = *(r9_5 + 0x20)
                                    void* r8_10 = r9_5 + 0x10
                                    
                                    if (rax_31 != 0)
                                        r8_10 = rax_31
                                    
                                    int32_t rax_32 = rdi_2
                                    
                                    if (rdi_2 s< 0)
                                        rax_32 = rdi_2 + 0x1f
                                    
                                    if (test_bit(*(r8_10 + (sx.q(rax_32 s>> 5) << 2)), 
                                            rdi_2 & 0x1f))
                                        break
                                
                                rdi_2 += 1
                            
                            int64_t rdx_10
                            
                            if (*(r10_4 + 8) != *(r10_4 + 0x34))
                                rdx_10 = sx.q(rsi[4].d * rbx_2) + *r10_4
                            else
                                rdx_10 = 0
                            
                            int64_t rsi_1
                            
                            if (*(r9_5 + 8) != *(r9_5 + 0x34))
                                rsi_1 = sx.q(*(arg2 + 0x20) * rdi_2) + *r9_5
                            else
                                rsi_1 = 0
                            
                            if ((*(*r11_1 + 0x80))(r11_1, rdx_10, var_50_1, zx.q(arg3), var_68_1, 
                                    var_60_1, var_58_1, var_50_1) != 0)
                                r12_1 += 1
                            
                            if ((*(*var_58_1 + 0x80))(var_58_1, rsi_1, var_50_1, zx.q(arg3)).b != 0)
                                r15_1 += 1
                            
                            r11_1 = var_58_1
                            rbx_2 += 1
                            rsi = arg1
                            rdi_2 += 1
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        rbp_1 = var_68_1
                        r14_1 = var_64_1
                        
                        if (r12_1 != r15_1)
                            goto label_140d09fc7
                    
                    r12 = arg3
                    r15 = arg2
                label_140d09f19:
                    var_60_1 += 1
                    int32_t result_3 = result_1 - 1
                    result_1 = result_3
                    
                    if (result_3 == 0)
                        break
                    
                    void* r9_8 = rsi[1]
                    
                    while (true)
                        if (rbp_1 s>= 0 && rbp_1 s< *(r9_8 + 0x28))
                            void* rax_44 = *(r9_8 + 0x20)
                            void* r8_13 = r9_8 + 0x10
                            
                            if (rax_44 != 0)
                                r8_13 = rax_44
                            
                            int32_t rax_45 = rbp_1
                            
                            if (rbp_1 s< 0)
                                rax_45 = rbp_1 + 0x1f
                            
                            if (test_bit(*(r8_13 + (sx.q(rax_45 s>> 5) << 2)), rbp_1 & 0x1f))
                                break
                        
                        rbp_1 += 1
                    
                    void* r9_9 = *(r15 + 8)
                    var_68_1 = rbp_1
                    
                    while (true)
                        if (r14_1 s>= 0 && r14_1 s< *(r9_9 + 0x28))
                            void* rax_48 = *(r9_9 + 0x20)
                            void* r8_14 = r9_9 + 0x10
                            
                            if (rax_48 != 0)
                                r8_14 = rax_48
                            
                            int32_t rax_49 = r14_1
                            
                            if (r14_1 s< 0)
                                rax_49 = r14_1 + 0x1f
                            
                            if (test_bit(*(r8_14 + (sx.q(rax_49 s>> 5) << 2)), r14_1 & 0x1f))
                                break
                        
                        r14_1 += 1
                    
                    rdx_4 = var_60_1
                    r8_6 = var_5c_1
                    var_64_1 = r14_1
                
                break
            
            rbp_1 += 1
            r14_1 += 1
            int32_t result_4 = result_2
            result_2 -= 1
            result_1 = result_2
            
            if (result_4 == 1)
                break
    
    result.b = 1

return result
