// 函数: sub_141001af0
// 地址: 0x141001af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void** result_2 = arg2
int32_t i = 0
int32_t i_1 = 0

if (result_2[3].d s> 0)
    int64_t r9_1 = 0
    int64_t r15
    int64_t var_38_1 = r15
    int64_t var_50_1 = 0
    
    do
        result = result_2[2]
        void* const* result_1 = result_2
        
        if (result != 0)
            result_1 = result
        
        int32_t j = 0
        void* rcx = result_1 + r9_1
        void* var_48_1 = rcx
        
        if (*(rcx + 8) s> 0)
            int64_t rdx = 0
            int64_t var_58_1 = 0
            
            do
                int64_t* rbx_2 = *rcx + rdx
                int64_t* rcx_1 = *rbx_2
                void* rsi_1 = rcx_1[5]
                rcx_1[1].d -= 1
                
                if (rcx_1[1].d == 1 && rcx_1 != 0)
                    (**rcx_1)(rcx_1, 1)
                
                void** rdi_1 = *(rsi_1 + 0x90)
                int32_t r12_1 = rbx_2[1].d
                EnterCriticalSection(&rdi_1[2])
                
                if (*(rsi_1 + 0x88) != 0 || *(rsi_1 + 0x9c) != *(rdi_1 + 0x3c))
                    r15.b = 0
                else
                    r15.b = 1
                
                int64_t rbp_1 = sx.q(*(rsi_1 + 0x88))
                int32_t rax_3 = (rbp_1 + 1).d
                *(rsi_1 + 0x88) = rax_3
                
                if (rax_3 s> *(rsi_1 + 0x8c))
                    sub_1405a4cf0(rsi_1 + 0x80)
                
                *(*(rsi_1 + 0x80) + (rbp_1 << 2)) = r12_1
                
                if (r15.b == 0)
                    result = zx.q(rdi_1[7].d * *(rsi_1 + 0x88))
                    
                    if (result.d == *(rsi_1 + 0x9c))
                        int64_t rsi_2 = sx.q(*(rsi_1 + 0x98))
                        int32_t rbp_4 = rdi_1[1].d - 1
                        int64_t* r14_1 = rsi_2 << 3
                        int64_t* rcx_5 = *(r14_1 + *rdi_1)
                        
                        if (rcx_5 != 0)
                            rcx_5[1].d -= 1
                            
                            if (rcx_5[1].d == 1 && rcx_5 != 0)
                                (**rcx_5)(rcx_5, 1)
                        
                        int32_t rdx_5 = rdi_1[1].d
                        int32_t rax_12 = rdx_5 - rsi_2.d - 1
                        
                        if (rax_12 s>= 1)
                            rax_12 = 1
                        
                        if (rax_12 != 0)
                            void* rcx_6 = *rdi_1
                            memcpy(rcx_6 + r14_1, rcx_6 + (sx.q(rdx_5 - rax_12) << 3), rax_12 << 3)
                            rdx_5 = rdi_1[1].d
                        
                        rdi_1[1].d = rdx_5 - 1
                        result = sub_1405c53d0(rdi_1)
                        
                        if (rsi_2.d != rbp_4)
                            result = *rdi_1
                            *(*(r14_1 + result) + 0x98) = rsi_2.d
                else
                    *(rsi_1 + 8) += 1
                    int64_t rbp_2 = sx.q(rdi_1[1].d)
                    int32_t rax_5 = (rbp_2 + 1).d
                    rdi_1[1].d = rax_5
                    
                    if (rax_5 s> *(rdi_1 + 0xc))
                        sub_1405a4d70(rdi_1)
                    
                    result = *rdi_1
                    result[rbp_2] = rsi_1
                    *(rsi_1 + 0x98) = rbp_2.d
                
                if (rdi_1 != -0x10)
                    result = LeaveCriticalSection(&rdi_1[2])
                
                j += 1
                rcx = var_48_1
                rdx = var_58_1 + 0x10
                var_58_1 = rdx
            while (j s< *(rcx + 8))
            
            i = i_1
            result_2 = arg2
            r9_1 = var_50_1
        
        i += 1
        r9_1 += 0x10
        i_1 = i
        var_50_1 = r9_1
    while (i s< result_2[3].d)

return result
