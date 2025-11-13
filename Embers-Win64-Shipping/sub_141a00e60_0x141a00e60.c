// 函数: sub_141a00e60
// 地址: 0x141a00e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d3e110(arg1 + 0x78) != 0)
    void* rax_1 = sub_140d3c6e0(arg1 + 0x78)
    int64_t rax_2 = sx.q(*(rax_1 + 0x80))
    
    if (rax_2.d != 0)
        int32_t rdi_1 = 0
        int32_t r12_1 = 0
        int64_t r15
        r15.b = **(rax_1 + 0x78) != arg1
        int64_t rbx_1 = 0
        
        do
            int64_t r9_1 = sx.q(rdi_1)
            rbx_1 += 1
            rdi_1 += 1
            
            if (rbx_1 s< rax_2)
                int64_t* rcx_3 = *(rax_1 + 0x78) + (rbx_1 << 3)
                
                do
                    int32_t rax_4
                    rax_4.b = *rcx_3 != arg1
                    
                    if (zx.d(r15.b) != rax_4)
                        break
                    
                    rdi_1 += 1
                    rbx_1 += 1
                    rcx_3 = &rcx_3[1]
                while (rbx_1 s< rax_2)
            
            int32_t rbp_2 = rdi_1 - r9_1.d
            
            if (r15.b != 0)
                if (r12_1 != r9_1.d)
                    int64_t rcx_4 = *(rax_1 + 0x78)
                    memmove(rcx_4 + (sx.q(r12_1) << 3), rcx_4 + (r9_1 << 3), rbp_2 << 3)
                
                r12_1 += rbp_2
            
            r15.b ^= 1
        while (rbx_1 s< rax_2)
        
        *(rax_1 + 0x80) = r12_1

return sub_140cd7d40(arg1) __tailcall
