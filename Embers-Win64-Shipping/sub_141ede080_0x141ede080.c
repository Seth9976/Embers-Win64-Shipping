// 函数: sub_141ede080
// 地址: 0x141ede080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
void* rbp = arg2
int32_t i = 0

if (*(rsi + 0x598) s> 0)
    do
        void* rax_1 = *(rsi + 0x590)
        void* rcx = rsi + 0x510
        
        if (rax_1 != 0)
            rcx = rax_1
        
        if (sub_142008d50(rcx + (sx.q(i) << 3), arg4.d) != 0 && i - 1 s>= 0)
            if (i != 0)
                int32_t rax_5 = *(rsi + 0x598)
                
                if (rax_5 != i)
                    void* rax_6 = *(rsi + 0x590)
                    void* rcx_2 = rsi + 0x510
                    
                    if (rax_6 != 0)
                        rcx_2 = rax_6
                    
                    memmove(rcx_2, rcx_2 + (sx.q(i) << 3), (rax_5 - i) << 3)
                    rax_5 = *(rsi + 0x598)
                
                *(rsi + 0x598) = rax_5 - i
            
            break
        
        i += 1
    while (i s< *(rsi + 0x598))

int32_t rdi_2 = *(rsi + 0x598)
int32_t rdi_3 = rdi_2 - 1

if (rdi_2 - 1 s>= 0)
    int64_t rsi_1 = sx.q(rdi_3) << 3
    int64_t r14_1 = rsi_1
    int64_t rbp_2 = sx.q(rdi_3 + 1) << 3
    int32_t temp2_1
    
    do
        int64_t* rdx_3 = *(arg2 + 8)
        void* r9_3 = &rdx_3[sx.q(*(arg2 + 0x10)) * 2]
        
        if (rdx_3 == r9_3)
        label_141ede1c2:
            int32_t rax_14 = *(rsi + 0x598)
            int32_t rdx_5 = rax_14 - rdi_3
            
            if (rdx_5 != 1)
                void* rax_13 = *(rsi + 0x590)
                void* rcx_4 = rsi + 0x510
                
                if (rax_13 != 0)
                    rcx_4 = rax_13
                
                memmove(rcx_4 + r14_1, rcx_4 + rbp_2, (rdx_5 - 1) << 3)
                rax_14 = *(rsi + 0x598)
            
            *(rsi + 0x598) = rax_14 - 1
        else
            while (true)
                void* r8_2 = *rdx_3
                
                if (r8_2 != 0)
                    void* rax_11 = *(rsi + 0x590)
                    void* rcx_3 = rsi + 0x510
                    
                    if (rax_11 != 0)
                        rcx_3 = rax_11
                    
                    if (*(r8_2 + 0x12) == *(rcx_3 + rsi_1 + 2))
                        break
                
                rdx_3 = &rdx_3[2]
                
                if (rdx_3 == r9_3)
                    goto label_141ede1c2
        
        rbp_2 -= 8
        r14_1 -= 8
        rsi_1 -= 8
        temp2_1 = rdi_3
        rdi_3 -= 1
    while (temp2_1 - 1 s>= 0)
    rbp = arg2
    rsi = arg1

int64_t* r12 = *(arg3 + 8)
uint64_t result = &r12[sx.q(*(arg3 + 0x10)) * 2]
uint64_t result_1 = result

if (r12 != result)
    do
        result = *r12
        
        if (result != 0)
            int16_t r13_2 = *(result + 0x12)
            void* i_10 = rsi + 0x510
            void* i_12 = i_10
            *(result + 0x12) = 0
            void* i_15 = *(i_10 + 0x80)
            
            if (i_15 != 0)
                i_12 = i_15
            
            void* rcx_6 = i_12 + (sx.q(*(i_10 + 0x88)) << 3)
            
            if (i_12 == rcx_6)
            label_141ede2a8:
                uint64_t r15_1 = 0
                int32_t rdx_9 = *(rbp + 0x20) + *(rbp + 0x10)
                int32_t i_7 = 0
                uint64_t var_60 = 0
                int32_t r9_4 = 0
                int64_t var_58_1 = 0
                
                if (rdx_9 s> 0)
                    sub_1405a5410(&var_60, rdx_9)
                    r9_4 = var_58_1:4.d
                    i_7 = var_58_1.d
                    r15_1 = var_60
                
                int32_t i_13 = *(rbp + 0x10)
                
                if (i_13 != 0)
                    int32_t rdx_10 = i_7 + i_13
                    
                    if (rdx_10 s> r9_4)
                        sub_1405a5410(&var_60, rdx_10)
                        r9_4 = var_58_1:4.d
                        i_7 = var_58_1.d
                        r15_1 = var_60
                    
                    int64_t* rdx_11 = *(rbp + 8)
                    int32_t i_8 = i_13
                    int64_t rcx_11 = (sx.q(i_7) << 4) + r15_1
                    int32_t i_1
                    
                    do
                        *rcx_11 = *rdx_11
                        void* rax_20 = rdx_11[1]
                        *(rcx_11 + 8) = rax_20
                        
                        if (rax_20 != 0)
                            *(rax_20 + 8) += 1
                        
                        rcx_11 += 0x10
                        rdx_11 = &rdx_11[2]
                        i_1 = i_8
                        i_8 -= 1
                    while (i_1 != 1)
                    i_7 += i_13
                    var_58_1.d = i_7
                
                int32_t i_14 = *(rbp + 0x20)
                
                if (i_14 != 0)
                    int32_t rdx_12 = i_7 + i_14
                    
                    if (rdx_12 s> r9_4)
                        sub_1405a5410(&var_60, rdx_12)
                        i_7 = var_58_1.d
                        r15_1 = var_60
                    
                    int64_t* rdx_13 = *(rbp + 0x18)
                    int32_t i_9 = i_14
                    int64_t rcx_15 = (sx.q(i_7) << 4) + r15_1
                    int32_t i_2
                    
                    do
                        *rcx_15 = *rdx_13
                        void* rax_22 = rdx_13[1]
                        *(rcx_15 + 8) = rax_22
                        
                        if (rax_22 != 0)
                            *(rax_22 + 8) += 1
                        
                        rcx_15 += 0x10
                        rdx_13 = &rdx_13[2]
                        i_2 = i_9
                        i_9 -= 1
                    while (i_2 != 1)
                    i_7 += i_14
                
                uint64_t rbx_1 = r15_1
                int64_t rbp_5 = (sx.q(i_7) << 4) + r15_1
                
                if (r15_1 == rbp_5)
                label_141ede3ff:
                    result = *r12
                    *(result + 0x12) = 0
                else
                    while (true)
                        int64_t* rcx_16 = *rbx_1
                        
                        if (rcx_16 != 0)
                            void* i_6 = *(i_10 + 0x80)
                            void* i_3 = i_10
                            int16_t rdi_4 = *(rcx_16 + 0x12)
                            
                            if (i_6 != 0)
                                i_3 = i_6
                            
                            void* r8_5
                            
                            for (r8_5 = i_3 + (sx.q(*(i_10 + 0x88)) << 3); i_3 != r8_5; i_3 += 8)
                                if (rdi_4 == *(i_3 + 2))
                                    goto label_141ede3f6
                            
                            if ((*(*rcx_16 + 0x18))(rcx_16, *r12, r8_5) != 0)
                                *(*r12 + 0x12) = rdi_4
                                int16_t arg_18
                                TagNi::TagNi(&arg_18)
                                int64_t rbx_3 = sx.q(*(i_10 + 0x88))
                                int32_t arg_1c = arg4.d
                                int16_t arg_1a = rdi_4
                                arg_18 = r13_2
                                int32_t rax_30 = (rbx_3 + 1).d
                                *(i_10 + 0x88) = rax_30
                                
                                if (rax_30 s> *(i_10 + 0x8c))
                                    sub_141ef2980(i_10, rbx_3.d)
                                
                                void* i_11 = *(i_10 + 0x80)
                                
                                if (i_11 != 0)
                                    i_10 = i_11
                                
                                result = arg_18.q
                                *(i_10 + (rbx_3 << 3)) = result
                                break
                        
                    label_141ede3f6:
                        rbx_1 += 0x10
                        
                        if (rbx_1 == rbp_5)
                            goto label_141ede3ff
                
                if (i_7 != 0)
                    int64_t* rdi_5 = r15_1 + 8
                    int32_t i_4
                    
                    do
                        int64_t* rbx_2 = *rdi_5
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                result = (**rbx_2)(rbx_2)
                                int32_t temp8_1 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    result = (*(*rbx_2 + 8))(rbx_2, 1)
                        
                        rdi_5 = &rdi_5[2]
                        i_4 = i_7
                        i_7 -= 1
                    while (i_4 != 1)
                
                if (r15_1 != 0)
                    result = sub_140a74f90(r15_1)
            else
                while (true)
                    if (r13_2 == *i_12)
                        result = zx.q(*(i_12 + 2))
                        *(*r12 + 0x12) = result.w
                        *(i_12 + 4) = arg4.d
                        
                        for (int64_t** i_5 = *(rbp + 8); i_5 != &i_5[sx.q(*(rbp + 0x10)) * 2]; 
                                i_5 = &i_5[2])
                            int64_t* r8_6 = *i_5
                            
                            if (r8_6 != 0)
                                result = zx.q(*(*r12 + 0x12))
                                
                                if (*(r8_6 + 0x12) == result.w)
                                    result = (*(*r8_6 + 0x18))(r8_6)
                                    break
                        
                        break
                    
                    i_12 += 8
                    
                    if (i_12 == rcx_6)
                        goto label_141ede2a8
        
        rbp = arg2
        r12 = &r12[2]
        rsi = arg1
    while (r12 != result_1)

return result
