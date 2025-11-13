// 函数: sub_14096fed0
// 地址: 0x14096fed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)
void* r13 = *(arg1 + 0x40)
void* result_1 = (sx.q(*(arg1 + 0x48)) << 6) + r13
void* arg_10 = r13

if (r13 != result_1)
    result = result_1
    int32_t* rdi_1 = r13 + 0x18
    
    do
        int64_t rcx_2 = sx.q(rdi_1[8])
        
        if (rcx_2.d s<= 0)
            bool cond:0_1 = rdi_1[1] == 0
            *rdi_1 = 0
            
            if (not(cond:0_1))
                sub_1405947f0(&rdi_1[-2], 0)
                result = result_1
        else
            int64_t rbx_2 = sx.q((rcx_2 + 0xf).d) & 0xfffffffffffffff0
            
            if (rbx_2 s> 0 && rbx_2 == rcx_2)
                char* var_48 = nullptr
                int32_t rax_1 = 0
                int32_t var_3c_1 = 0
                int32_t rdx_1 = 0
                int32_t var_40_1 = 0
                char* rsi_1 = nullptr
                
                if (rbx_2.d != 0)
                    sub_1405c5510(&var_48, rbx_2.d)
                    rax_1 = var_3c_1
                    rdx_1 = var_40_1
                    rsi_1 = var_48
                
                int32_t r15_1 = rbx_2.d + rdx_1
                
                if (r15_1 s> rax_1)
                    sub_1405daba0(&var_48)
                    rsi_1 = var_48
                
                memcpy(rsi_1, *(rdi_1 + 0x18), rbx_2.d)
                uint32_t rbx_3 = (rbx_2 u>> 2).d
                int64_t i = 0
                
                if (rbx_3 s> 0 && rbx_3 u>= 0x10)
                    int32_t rdx_5 = rbx_3 & 0x8000000f
                    
                    if (rdx_5 s< 0)
                        rdx_5 = ((rdx_5 - 1) | 0xfffffff0) + 1
                    
                    int128_t zmm2 = data_142e34910
                    void* rcx_8 = &rsi_1[0x20]
                    
                    do
                        int128_t zmm0_1 = *(rcx_8 - 0x20)
                        rcx_8 += 0x40
                        i += 0x10
                        *(rcx_8 - 0x60) = zmm0_1 ^ zmm2
                        *(rcx_8 - 0x50) ^= zmm2
                        *(rcx_8 - 0x40) ^= zmm2
                        *(rcx_8 - 0x30) ^= zmm2
                    while (i s< sx.q(rbx_3 - rdx_5))
                
                for (; i s< sx.q(rbx_3); i += 1)
                    *(rsi_1 + (i << 2)) ^= 0xdeadbeef
                
                uint64_t rax_2 = zx.q(*rsi_1)
                
                if (rax_2.d s>= r15_1 || *(rsi_1 + 1 + (rax_2 u>> 1 << 1) - 2) != 0)
                    *rdi_1 = 0
                    
                    if (rdi_1[1] != 0)
                        sub_1405947f0(&rdi_1[-2], 0)
                    
                    rdi_1[8] = 0
                    
                    if (rdi_1[9] == 0)
                        sub_140a74f90(rsi_1)
                    else
                        sub_1405c5510(&rdi_1[6], 0)
                        sub_140a74f90(rsi_1)
                else
                    int64_t r12_1 = 0
                    int32_t r15_2 = 0
                    int32_t r13_1 = 0
                    int64_t var_58 = 0
                    int64_t var_50_1 = 0
                    
                    if (rsi_1 != -1 && *(rsi_1 + 1) != 0)
                        int64_t rbx_4 = -1
                        
                        do
                            rbx_4 += 1
                        while (*(rsi_1 + 1 + (rbx_4 << 1)) != 0)
                        
                        if (rbx_4.d + 1 s> 0)
                            sub_1405947f0(&var_58, rbx_4.d + 1)
                            r13_1 = var_50_1:4.d
                            r15_2 = var_50_1.d
                            r12_1 = var_58
                        
                        r15_2 += rbx_4.d + 1
                        var_50_1.d = r15_2
                        
                        if (r15_2 s> r13_1)
                            sub_140594770(&var_58)
                            r13_1 = var_50_1:4.d
                            r15_2 = var_50_1.d
                            r12_1 = var_58
                        
                        UnDecorator::getReferenceType(r12_1, &rsi_1[1], (rbx_4.d + 1) * 2)
                    
                    if (&rdi_1[-2] == &var_58)
                        if (r12_1 != 0)
                            sub_140a74f90(r12_1)
                        
                        r13 = arg_10
                        sub_140a74f90(rsi_1)
                    else
                        int64_t rcx_13 = *(rdi_1 - 8)
                        
                        if (rcx_13 != 0)
                            sub_140a74f90(rcx_13)
                        
                        *(rdi_1 - 8) = r12_1
                        rdi_1[1] = r13_1
                        r13 = arg_10
                        var_58 = 0
                        int64_t var_50_2 = 0
                        *rdi_1 = r15_2
                        sub_140a74f90(rsi_1)
            
            result = result_1
        
        r13 += 0x40
        rdi_1 = &rdi_1[0x10]
        arg_10 = r13
    while (r13 != result)

return result
