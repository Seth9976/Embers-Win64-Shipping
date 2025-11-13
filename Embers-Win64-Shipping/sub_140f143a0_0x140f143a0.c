// 函数: sub_140f143a0
// 地址: 0x140f143a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*arg2)
int32_t r15 = arg3
int64_t rdi = sx.q(arg2[1])
int64_t* r12 = arg1

if (result.d s>= 0 && result.d s< arg1[4].d)
    int64_t* r14_2 = result * 0x70 + arg1[3]
    int64_t* arg_20 = r14_2
    int64_t* rsi_1 = *r14_2
    int32_t rdx = rsi_1[1].d
    int32_t rbx_1 = rdx - 1
    
    if (rdx == 0)
        rbx_1 = -1
    
    int32_t rcx = rdx - 1
    
    if (rdx == 0)
        rcx = -1
    
    if (rdx == 0)
        rcx = 0
    
    if (rdi.d + r15 s> rcx)
        int32_t r15_1 = rbx_1
        
        if (rdx == 0)
            r15_1 = 0
        
        r15 = r15_1 - rdi.d
    
    if (r15 != 0)
        if (rdx == 0)
            rbx_1 = 0
        
        int32_t rbx_2 = rbx_1 - rdi.d
        
        if (r15 s>= 0)
            if (r15 s< rbx_2)
                rbx_2 = r15
            
            if (rbx_2 != 0)
                int32_t rax_1 = rdx - rbx_2
                
                if (rax_1 != rdi.d)
                    int64_t r9_1 = *rsi_1
                    memmove(r9_1 + (rdi << 1), r9_1 + (sx.q(rbx_2 + rdi.d) << 1), 
                        (rax_1 - rdi.d) * 2)
                    rdx = rsi_1[1].d
                
                rsi_1[1].d = rdx - rbx_2
                sub_1405a50a0(rsi_1)
        
        r14_2[0xd].b |= 7
        int32_t r13 = rdi.d + r15
        int32_t rbp = r14_2[6].d
        int32_t rbp_1 = rbp - 1
        
        if (rbp - 1 s>= 0)
            void* rsi_2 = &r14_2[5]
            int64_t result_3 = sx.q(rbp_1) * 0x30
            int64_t result_2 = result_3
            int32_t temp3_1
            
            do
                int64_t* rbx_4 = *rsi_2 + result_3
                int64_t* rcx_3 = *rbx_4
                int64_t result_1
                (*(*rcx_3 + 8))(rcx_3, &result_1)
                result = result_1
                int32_t r8_2 = rdi.d
                int32_t r9_2 = result_1:4.d
                int32_t rdx_5 = r13
                
                if (result.d s>= rdi.d)
                    r8_2 = result.d
                
                if (r9_2 s<= r13)
                    rdx_5 = r9_2
                
                int32_t r10_1 = 0
                int32_t rcx_4 = 0
                
                if (rdx_5 s> r8_2)
                    r10_1 = rdx_5
                
                if (rdx_5 s> r8_2)
                    rcx_4 = r8_2
                
                int32_t r10_2 = r10_1 - rcx_4
                
                if (r10_2 s> 0)
                label_140f1455c:
                    
                    if (r9_2 - result.d != r10_2)
                        int64_t* rcx_18 = *rbx_4
                        
                        if (result.d s<= rdi.d)
                            int32_t var_50 = result.d
                            int32_t var_4c_1 = r9_2 - r10_2
                            (*(*rcx_18 + 0x10))(rcx_18, &var_50)
                        else
                            int32_t var_58 = rdi.d
                            int32_t var_54_1 = r9_2 - r15
                            (*(*rcx_18 + 0x10))(rcx_18, &var_58)
                    else
                        r9_2.b = 1
                        sub_140f14870(rsi_2, rbp_1, 1, r9_2.b)
                        
                        if (r14_2[6].d == 0)
                            int64_t var_60 = 0
                            int64_t var_48
                            (*(*arg1 + 0x30))(arg1, &var_48, r14_2, &var_60)
                            int64_t r12_2 = var_48
                            int64_t* var_40
                            
                            if (var_40 != 0)
                                var_40[1].d += 1
                            
                            int64_t r14_3 = sx.q(*(rsi_2 + 8))
                            int32_t rax_9 = (r14_3 + 1).d
                            *(rsi_2 + 8) = rax_9
                            
                            if (rax_9 s> *(rsi_2 + 0xc))
                                sub_1405c4f50(rsi_2)
                            
                            result = r14_3 * 0x30 + *rsi_2
                            *result = r12_2
                            *(result + 8) = var_40
                            
                            if (var_40 != 0)
                                var_40[1].d += 1
                            
                            __builtin_memset(result + 0x10, 0, 0x20)
                            
                            if (var_40 != 0)
                                var_40[1].d -= 1
                                
                                if (var_40[1].d == 1)
                                    (**var_40)(var_40)
                                    int32_t temp6_1 = *(var_40 + 0xc)
                                    *(var_40 + 0xc) -= 1
                                    
                                    if (temp6_1 == 1)
                                        (*(*var_40 + 8))(var_40, 1)
                            
                            if (var_40 != 0)
                                var_40[1].d -= 1
                                
                                if (var_40[1].d == 1)
                                    (**var_40)(var_40)
                                    int32_t temp7_1 = *(var_40 + 0xc)
                                    *(var_40 + 0xc) -= 1
                                    
                                    if (temp7_1 == 1)
                                        (*(*var_40 + 8))(var_40, 1)
                            
                            result_3 = result_2
                            r14_2 = arg_20
                    
                    if (result_1.d s<= rdi.d)
                        break
                else if (result.d s< r13)
                    if (r10_2 s> 0)
                        goto label_140f1455c
                    
                    if (r9_2 - result.d s<= 0 && result.d s>= rdi.d && result.d s< r13
                            && r9_2 s>= rdi.d && r9_2 s< r13)
                        r9_2.b = 1
                        sub_140f14870(rsi_2, rbp_1, 1, r9_2.b)
                else
                    result_2 = result
                    int32_t rdx_7 = neg.d(r15)
                    int32_t rcx_5 = rdx_7 + result.d
                    
                    if (rcx_5 s<= 0)
                        rcx_5 = 0
                    
                    result_2.d = rcx_5
                    int32_t rcx_7 = result_2:4.d + rdx_7
                    
                    if (rcx_7 s<= 0)
                        rcx_7 = 0
                    
                    result_2:4.d = rcx_7
                    int64_t* rcx_8 = *rbx_4
                    (*(*rcx_8 + 0x10))(rcx_8, &result_2)
                
                result_3 -= 0x30
                temp3_1 = rbp_1
                rbp_1 -= 1
                result_2 = result_3
            while (temp3_1 - 1 s>= 0)
            r12 = arg1
        
        r12[0x11].b |= 1
        result.b = 1
        return result

result.b = 0
return result
