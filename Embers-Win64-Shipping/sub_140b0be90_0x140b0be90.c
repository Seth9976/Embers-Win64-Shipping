// 函数: sub_140b0be90
// 地址: 0x140b0be90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e74828
sub_140b19bc0()
int64_t rax = sx.q(data_1439a4998)

if (rax.d != 0)
    void* rcx = data_1439a4990
    void* rdx_1 = &data_1439a4950
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    
    if (rcx != 0)
        rdx_1 = rcx
    
    int64_t r15
    r15.b = *rdx_1 != arg1
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rax)
            void* rax_1 = data_1439a4990
            void* rcx_1 = &data_1439a4950
            
            if (rax_1 != 0)
                rcx_1 = rax_1
            
            do
                int32_t rax_2
                rax_2.b = *(rcx_1 + (rbx_1 << 3)) != arg1
                
                if (zx.d(r15.b) != rax_2)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
            while (rbx_1 s< rax)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                void* rax_3 = data_1439a4990
                void* rcx_2 = &data_1439a4950
                
                if (rax_3 != 0)
                    rcx_2 = rax_3
                
                memmove(rcx_2 + (sx.q(r12_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
            
            r12_1 += rbp_2
        
        r15.b ^= 1
    while (rbx_1 s< rax)
    
    data_1439a4998 = r12_1

*arg1 = &data_142e5bee0
return &data_142e5bee0
