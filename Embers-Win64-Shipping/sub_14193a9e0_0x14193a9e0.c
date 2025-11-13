// 函数: sub_14193a9e0
// 地址: 0x14193a9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint64_t r14
r14.b = 0
void* r13 = arg1

if (*(arg1 + 0x10) s> 0)
    int64_t r12
    int64_t var_30_1 = r12
    
    while (r14.b == 0)
        result = *(r13 + 8)
        void* r15_1 = r13 + 8
        void* const rdi_1 = *result
        
        if (*(rdi_1 + 0x14) != r14.b)
            break
        
        r12.b = 0
        int32_t rbx_1 = 0
        
        if (*(rdi_1 + 8) s> 0)
            int64_t rsi_1 = 0
            int32_t rdx
            
            do
                int64_t* rcx = *rdi_1
                r14 = zx.q(r14.b)
                void* rbp_1 = *(rcx + rsi_1)
                
                if (arg3 == rbp_1)
                    r14 = 1
                
                result = nullptr
                
                if (0 == *(rbp_1 + 0x34))
                    *(rbp_1 + 0x34) = 0
                else
                    result = zx.q(*(rbp_1 + 0x34))
                
                if (*(rcx + rsi_1 + 8) s< result.d)
                    rdx = *(rdi_1 + 8)
                    int32_t rcx_3 = rdx - rbx_1 - 1
                    
                    if (rcx_3 s>= 1)
                        rcx_3 = 1
                    
                    if (rcx_3 != 0)
                        result = memcpy((sx.q(rbx_1) << 4) + *rdi_1, 
                            (sx.q(rdx - rcx_3) << 4) + *rdi_1, rcx_3 << 4)
                        rdx = *(rdi_1 + 8)
                    
                    goto label_14193aac9
                
                sub_14193d6f0(arg2, rbp_1, 0)
                int32_t rax = 0
                
                if (0 == *(rbp_1 + 0x38))
                    *(rbp_1 + 0x38) = 0
                else
                    rax = *(rbp_1 + 0x38)
                
                result = nullptr
                
                if (0 == *(rbp_1 + 0x34))
                    *(rbp_1 + 0x34) = 0
                else
                    result = zx.q(*(rbp_1 + 0x34))
                
                rdx = *(rdi_1 + 8)
                
                if (rax != result.d)
                    r12.b = 1
                else
                    result = 1
                    int32_t rcx_11 = rdx - rbx_1 - 1
                    
                    if (rcx_11 s>= 1)
                        rcx_11 = 1
                    
                    if (rcx_11 == 0)
                    label_14193aac9:
                        rdx -= 1
                        rbx_1 -= 1
                        *(rdi_1 + 8) = rdx
                        rsi_1 -= 0x10
                    else
                        result = memcpy((sx.q(rbx_1) << 4) + *rdi_1, 
                            (sx.q(rdx - rcx_11) << 4) + *rdi_1, rcx_11 << 4)
                        rbx_1 -= 1
                        rdx = *(rdi_1 + 8) - 1
                        *(rdi_1 + 8) = rdx
                        rsi_1 -= 0x10
                
                rbx_1 += 1
                rsi_1 += 0x10
            while (rbx_1 s< rdx)
            
            r13 = arg1
            r15_1 = r13 + 8
            
            if (r12.b != 0 && rdx != 0)
                *(rdi_1 + 0x14) = 1
                break
        
        int64_t rcx_15 = *rdi_1
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        j_sub_140a74f90(rdi_1)
        int32_t rax_1 = *(r15_1 + 8)
        
        if (rax_1 != 1)
            int64_t rcx_17 = *r15_1
            memmove(rcx_17, rcx_17 + 8, (rax_1 - 1) << 3)
            rax_1 = *(r15_1 + 8)
        
        *(r15_1 + 8) = rax_1 - 1
        result = sub_1405c53d0(r15_1)
        
        if (*(r13 + 0x10) s<= 0)
            break

return result
