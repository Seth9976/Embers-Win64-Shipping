// 函数: sub_140e1c270
// 地址: 0x140e1c270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int32_t result = arg1[1].d

if (result != 0)
    int32_t* rbx_1 = nullptr
    void* rdx_1 = nullptr
    void* var_48_1 = nullptr
    int32_t var_3c_1 = 0x64
    int32_t result_1 = result
    void var_368
    
    if (result s> 0x64)
        sub_140e21d90(&var_368, 0)
        result = arg1[1].d
        rdx_1 = var_48_1
    
    int32_t i = 0
    
    if (result s> 0)
        int64_t r9_1 = 0
        int64_t r10_1 = 0
        
        do
            void* rax_2 = &var_368
            r10_1 += 0x80
            
            if (rdx_1 != 0)
                rax_2 = rdx_1
            
            r9_1 += 8
            void* rdx_2 = &var_368
            *(rax_2 + r9_1 - 8) = i
            
            if (var_48_1 != 0)
                rdx_2 = var_48_1
            
            i += 1
            *(rdx_2 + r9_1 - 4) = *(*arg1 + r10_1 - 0x28)
            rdx_1 = var_48_1
        while (i s< arg1[1].d)
    
    char var_388 = 0
    void* rcx_2 = &var_368
    char* var_380_1 = &var_388
    
    if (rdx_1 != 0)
        rcx_2 = rdx_1
    
    sub_140dd5790(rcx_2, result_1)
    void* r15_1 = var_48_1
    void* rax_5 = &var_368
    int32_t result_2 = result_1
    *(arg1 + 0x54) = 0
    
    if (r15_1 != 0)
        rax_5 = r15_1
    
    result = *rax_5
    arg1[0xa].d = result
    
    if (result_2 s> 0)
        int32_t rdx_4 = 1
        int64_t r8_1 = 0
        int32_t var_384_1 = 1
        int64_t var_380_2 = 0
        
        do
            void* rax_6 = &var_368
            
            if (r15_1 != 0)
                rax_6 = r15_1
            
            int64_t rcx_3 = sx.q(*(rax_6 + r8_1))
            int32_t* rdi_3 = (rcx_3 << 7) + *arg1
            
            if ((*(rdi_3 + 0x7d) & 2) == 0 && ((rdi_3[0x19] s> 0 && rdi_3[0x1a] s> 0)
                    || *(rdi_3 + 0x50) != 0 || *(rdi_3 + 0x7a) == 6))
                if (rbx_1 != 0)
                    rbx_1[0x1b] = rcx_3.d
                    result_2 = result_1
                    r15_1 = var_48_1
                
                arg1[0xb].d += 1
                int64_t rbx_2 = sx.q(rdi_3[0x19])
                
                if (rbx_2.d s> 0 && rdi_3[0x1a] s> 0)
                    int32_t rax_7 = rdi_3[0x17]
                    int64_t r15_2 = sx.q(rdi_3[0x18])
                    rdi_3[0x17] = arg1[7].d
                    rdi_3[0x18] = arg1[9].d
                    int64_t r14_1 = sx.q(arg1[7].d)
                    int64_t rax_11 = **(rdi_3 + 0x40)
                    int32_t rax_12 = (r14_1 + rbx_2).d
                    arg1[7].d = rax_12
                    
                    if (rax_12 s> *(arg1 + 0x3c))
                        sub_1405c4ec0(&arg1[6])
                    
                    memcpy(arg1[6] + r14_1 * 0x28, rax_11 + sx.q(rax_7) * 0x28, (rbx_2 * 0x28).d)
                    int64_t r14_2 = sx.q(rdi_3[0x1a])
                    int64_t rbx_3 = sx.q(arg1[9].d)
                    int64_t r12_1 = **(rdi_3 + 0x48)
                    int32_t rax_17 = (rbx_3 + r14_2).d
                    arg1[9].d = rax_17
                    
                    if (rax_17 s> *(arg1 + 0x4c))
                        sub_1405a4cf0(&arg1[8])
                    
                    memcpy(arg1[8] + (rbx_3 << 2), r12_1 + (r15_2 << 2), (r14_2 << 2).d)
                    rdx_4 = var_384_1
                    r8_1 = var_380_2
                    result_2 = result_1
                    r15_1 = var_48_1
                
                void* rax_19 = *(rdi_3 + 0x28)
                
                if (rax_19 != 0)
                    rax_19.b = *(rax_19 + 0x34) == 0
                    *(arg1 + 0x5c) |= rax_19.b
                
                if ((*(rdi_3 + 0x7d) & 1) != 0)
                    int32_t r14_3 = rdx_4
                    
                    if (rdx_4 s< result_2)
                        int64_t r12_2 = r8_1 + 8
                        
                        do
                            void* rax_20 = &var_368
                            
                            if (r15_1 != 0)
                                rax_20 = r15_1
                            
                            int32_t* rbx_6 = (sx.q(*(rax_20 + r12_2)) << 7) + *arg1
                            
                            if (rbx_6[0x16] != rdi_3[0x16])
                                break
                            
                            if ((*(rbx_6 + 0x7d) & 2) == 0 && *(rdi_3 + 0x30) == *(rbx_6 + 0x30)
                                    && *(rdi_3 + 0x79) == *(rbx_6 + 0x79)
                                    && *(rdi_3 + 0x7a) == *(rbx_6 + 0x7a)
                                    && *(rdi_3 + 0x7b) == *(rbx_6 + 0x7b)
                                    && rdi_3[0x1f].b == rbx_6[0x1f].b
                                    && sub_140de19f0(rdi_3, rbx_6) != 0
                                    && *(rdi_3 + 0x38) == *(rbx_6 + 0x38)
                                    && rdi_3[0x1c] == rbx_6[0x1c] && rdi_3[0x1d] == rbx_6[0x1d]
                                    && not(rbx_6[8] f!= rdi_3[8]) && not(rbx_6[9] f!= rdi_3[9])
                                    && *(rdi_3 + 0x50) == *(rbx_6 + 0x50)
                                    && rdi_3[0x1e].b == rbx_6[0x1e].b
                                    && *(rdi_3 + 0x28) == *(rbx_6 + 0x28))
                                sub_140de9170(arg1, rdi_3, rbx_6, &arg1[6], &arg1[8])
                                result_2 = result_1
                                r15_1 = var_48_1
                            
                            r14_3 += 1
                            r12_2 += 8
                        while (r14_3 s< result_2)
                        
                        rdx_4 = var_384_1
                        r8_1 = var_380_2
                
                rbx_1 = rdi_3
            
            rdx_4 += 1
            r8_1 += 8
            var_384_1 = rdx_4
            var_380_2 = r8_1
            result = rdx_4 - 1
        while (result s< result_2)

__security_check_cookie(rax_1 ^ &var_3b8)
return result
