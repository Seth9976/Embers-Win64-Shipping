// 函数: sub_141df3e40
// 地址: 0x141df3e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* result_3 = arg1

if (*(arg1 + 0xd8) != 0 && *(arg1 + 0xa8) != 0)
    int64_t* r14_1 = *(arg1 + 0x698)
    void* rax_1 = &r14_1[sx.q(*(arg1 + 0x6a0)) * 5]
    void* arg_20 = rax_1
    void* result_1
    int32_t arg_10
    void* arg_18
    
    if (r14_1 != rax_1)
        do
            int64_t* r12_1 = *(result_3 + 0xa8)
            result_1 = result_3
            int64_t* var_50_1 = r14_1
            int64_t* rax_3 = (*(*r12_1 + 0x20))(r12_1)
            int64_t* i = *rax_3
            
            for (void* r13_1 = &i[sx.q(rax_3[1].d)]; i != r13_1; i = &i[1])
                void* rbx_1 = *i
                
                if (rbx_1 != 0)
                    void* rax_5 = sub_142468580()
                    
                    if (rax_5 != 0)
                        int64_t rcx_1 = sx.q(*(rax_5 + 0x38))
                        void* rax_6 = *(rbx_1 + 0x78)
                        
                        if (rcx_1.d s<= *(rax_6 + 0x38)
                                && *(*(rax_6 + 0x30) + (rcx_1 << 3)) == rax_5 + 0x30)
                            int64_t rbp_1 = sx.q(*(rbx_1 + 0x4c))
                            void* rbp_2 = rbp_1 + *(result_3 + 0xa0)
                            
                            if (rbp_1 != neg.q(*(result_3 + 0xa0)))
                                int64_t* rax_9 = (*(*r12_1 + 0x10))(r12_1)
                                int64_t rcx_3 = sx.q(*(rbp_2 + 0x10))
                                
                                if (rcx_3.d s>= 0 && rcx_3.d s< rax_9[1].d)
                                    int64_t rdx_4 = rcx_3 * 0x30
                                    int64_t* rdx_5 = rdx_4 + *rax_9
                                    
                                    if (rdx_4 != neg.q(*rax_9) && *r14_1 == *rdx_5)
                                        int64_t* j = rdx_5[2]
                                        int32_t rdi = 0
                                        
                                        for (void* rsi_2 = sx.q(rdx_5[3].d) * 0x58 + j; j != rsi_2; 
                                                j = &j[0xb])
                                            if (*j == r14_1[1])
                                                arg_10 = rdi
                                                arg_18 = rbp_2
                                                sub_141df5910(&result_1, &arg_18, j, &arg_10)
                                            
                                            rdi += 1
                                        
                                        result_3 = arg1
            
            r14_1 = &r14_1[5]
        while (r14_1 != arg_20)
    
    void* r14_2 = *(result_3 + 0x6a8)
    void* result_2 = (sx.q(*(result_3 + 0x6b0)) << 5) + r14_2
    result_1 = result_2
    
    if (r14_2 != result_2)
        do
            int64_t* r12_2 = *(result_3 + 0xa8)
            arg_20 = r14_2
            int64_t* rax_16 = (*(*r12_2 + 0x20))(r12_2)
            int64_t* i_1 = *rax_16
            
            for (void* r13_2 = &i_1[sx.q(rax_16[1].d)]; i_1 != r13_2; i_1 = &i_1[1])
                void* rbx_2 = *i_1
                
                if (rbx_2 != 0)
                    void* rax_18 = sub_142468580()
                    
                    if (rax_18 != 0)
                        int64_t rcx_6 = sx.q(*(rax_18 + 0x38))
                        void* rax_19 = *(rbx_2 + 0x78)
                        
                        if (rcx_6.d s<= *(rax_19 + 0x38)
                                && *(*(rax_19 + 0x30) + (rcx_6 << 3)) == rax_18 + 0x30)
                            int64_t rbp_3 = sx.q(*(rbx_2 + 0x4c))
                            void* rbp_4 = rbp_3 + *(result_3 + 0xa0)
                            
                            if (rbp_3 != neg.q(*(result_3 + 0xa0)))
                                int64_t* rax_22 = (*(*r12_2 + 0x10))(r12_2)
                                int64_t rcx_8 = sx.q(*(rbp_4 + 0x10))
                                
                                if (rcx_8.d s>= 0 && rcx_8.d s< rax_22[1].d)
                                    int64_t rdx_9 = rcx_8 * 0x30
                                    int64_t* rdx_10 = rdx_9 + *rax_22
                                    
                                    if (rdx_9 != neg.q(*rax_22) && *r14_2 == *rdx_10)
                                        int64_t* j_1 = rdx_10[2]
                                        int32_t rdi_1 = 0
                                        
                                        for (void* rsi_4 = sx.q(rdx_10[3].d) * 0x58 + j_1; 
                                                j_1 != rsi_4; j_1 = &j_1[0xb])
                                            if (*j_1 == *(r14_2 + 8))
                                                arg_10 = rdi_1
                                                arg_18 = rbp_4
                                                sub_141df59a0(&arg_20, &arg_18, j_1, &arg_10)
                                            
                                            rdi_1 += 1
                                        
                                        result_3 = arg1
            
            r14_2 += 0x20
        while (r14_2 != result_1)
    
    void* r14_3 = *(result_3 + 0x6b8)
    result = (sx.q(*(result_3 + 0x6c0)) << 5) + r14_3
    result_1 = result
    
    if (r14_3 != result)
        do
            int64_t* r12_3 = *(result_3 + 0xa8)
            arg_20 = r14_3
            int64_t* rax_29 = (*(*r12_3 + 0x20))(r12_3)
            int64_t* i_2 = *rax_29
            result = sx.q(rax_29[1].d)
            
            for (void* r13_3 = &i_2[result]; i_2 != r13_3; i_2 = &i_2[1])
                void* rbx_3 = *i_2
                
                if (rbx_3 != 0)
                    result = sub_142468580()
                    
                    if (result != 0)
                        int64_t rcx_11 = sx.q(result[7].d)
                        result = *(rbx_3 + 0x78)
                        
                        if (rcx_11.d s<= result[7].d)
                            result = result[6]
                            
                            if (result[rcx_11] == &result[6])
                                int64_t rbp_5 = sx.q(*(rbx_3 + 0x4c))
                                void* rbp_6 = rbp_5 + *(result_3 + 0xa0)
                                
                                if (rbp_5 != neg.q(*(result_3 + 0xa0)))
                                    result = (*(*r12_3 + 0x10))(r12_3)
                                    int64_t rcx_13 = sx.q(*(rbp_6 + 0x10))
                                    
                                    if (rcx_13.d s>= 0 && rcx_13.d s< result[1].d)
                                        int64_t rdx_14 = rcx_13 * 0x30
                                        void* rdx_15 = rdx_14 + *result
                                        
                                        if (rdx_14 != neg.q(*result))
                                            result = *rdx_15
                                            
                                            if (*r14_3 == result)
                                                int64_t* j_2 = *(rdx_15 + 0x10)
                                                int32_t rdi_2 = 0
                                                result = sx.q(*(rdx_15 + 0x18))
                                                
                                                for (void* rsi_6 = result * 0x58 + j_2; 
                                                        j_2 != rsi_6; j_2 = &j_2[0xb])
                                                    result = *(r14_3 + 8)
                                                    
                                                    if (*j_2 == result)
                                                        arg_10 = rdi_2
                                                        arg_18 = rbp_6
                                                        result = sub_141df5920(&arg_20, &arg_18, 
                                                            j_2, &arg_10)
                                                    
                                                    rdi_2 += 1
                                                
                                                result_3 = arg1
            
            r14_3 += 0x20
        while (r14_3 != result_1)

return result
