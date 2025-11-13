// 函数: sub_141001880
// 地址: 0x141001880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t* result = arg2
int32_t i_1 = 0

if (arg2[1].d s> 0)
    int64_t rdx = 0
    int64_t r15
    int64_t var_38_1 = r15
    int64_t var_50_1 = 0
    
    do
        int32_t j = 0
        int64_t* rax_1 = *result + rdx
        int64_t* var_48_1 = rax_1
        
        if (rax_1[1].d s> 0)
            int64_t rcx = 0
            int64_t var_58_1 = 0
            
            do
                int64_t* rbx_2 = *rax_1 + rcx
                int64_t* rcx_1 = *rbx_2
                void* rsi_1 = rcx_1[5]
                rcx_1[1].d -= 1
                
                if (rcx_1[1].d == 1 && rcx_1 != 0)
                    (**rcx_1)(rcx_1, 1)
                
                int64_t* rdi_1 = *(rsi_1 + 0x90)
                int32_t r13_1 = rbx_2[1].d
                EnterCriticalSection(&rdi_1[2])
                
                if (*(rsi_1 + 0x88) != 0 || *(rsi_1 + 0x9c) != *(rdi_1 + 0x3c))
                    r15.b = 0
                else
                    r15.b = 1
                
                int64_t rbp_1 = sx.q(*(rsi_1 + 0x88))
                int32_t rax_5 = (rbp_1 + 1).d
                *(rsi_1 + 0x88) = rax_5
                
                if (rax_5 s> *(rsi_1 + 0x8c))
                    sub_1405a4cf0(rsi_1 + 0x80)
                
                *(*(rsi_1 + 0x80) + (rbp_1 << 2)) = r13_1
                
                if (r15.b != 0)
                    *(rsi_1 + 8) += 1
                    int64_t rbp_2 = sx.q(rdi_1[1].d)
                    int32_t rax_7 = (rbp_2 + 1).d
                    rdi_1[1].d = rax_7
                    
                    if (rax_7 s> *(rdi_1 + 0xc))
                        sub_1405a4d70(rdi_1)
                    
                    *(*rdi_1 + (rbp_2 << 3)) = rsi_1
                    *(rsi_1 + 0x98) = rbp_2.d
                else if (rdi_1[7].d * *(rsi_1 + 0x88) == *(rsi_1 + 0x9c))
                    int64_t rsi_2 = sx.q(*(rsi_1 + 0x98))
                    int32_t rbp_4 = rdi_1[1].d - 1
                    void** r14_1 = rsi_2 << 3
                    int64_t* rcx_5 = *(r14_1 + *rdi_1)
                    
                    if (rcx_5 != 0)
                        rcx_5[1].d -= 1
                        
                        if (rcx_5[1].d == 1 && rcx_5 != 0)
                            (**rcx_5)(rcx_5, 1)
                    
                    int32_t rdx_5 = rdi_1[1].d
                    int32_t rax_16 = rdx_5 - rsi_2.d - 1
                    
                    if (rax_16 s>= 1)
                        rax_16 = 1
                    
                    if (rax_16 != 0)
                        void* rcx_6 = *rdi_1
                        memcpy(rcx_6 + r14_1, rcx_6 + (sx.q(rdx_5 - rax_16) << 3), rax_16 << 3)
                        rdx_5 = rdi_1[1].d
                    
                    rdi_1[1].d = rdx_5 - 1
                    sub_1405c53d0(rdi_1)
                    
                    if (rsi_2.d != rbp_4)
                        *(*(r14_1 + *rdi_1) + 0x98) = rsi_2.d
                
                if (rdi_1 != -0x10)
                    LeaveCriticalSection(&rdi_1[2])
                
                j += 1
                rax_1 = var_48_1
                rcx = var_58_1 + 0x10
                var_58_1 = rcx
            while (j s< rax_1[1].d)
            
            i = i_1
            rdx = var_50_1
        
        result = arg2
        i += 1
        rdx += 0x10
        i_1 = i
        var_50_1 = rdx
    while (i s< result[1].d)

return result
