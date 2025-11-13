// 函数: sub_1419ecdb0
// 地址: 0x1419ecdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1[4]
char rax = arg2

if (r13 != 0)
    int64_t rcx = sx.q(*(r13 + 0x2f8))
    
    if (rcx.d != 0)
        int32_t rdi_1 = 0
        int32_t r12_1 = 0
        int64_t r15
        r15.b = **(r13 + 0x2f0) != arg1
        int64_t rbx_1 = 0
        
        do
            int64_t r9_1 = sx.q(rdi_1)
            rbx_1 += 1
            rdi_1 += 1
            
            if (rbx_1 s< rcx)
                int64_t* rcx_1 = *(r13 + 0x2f0) + (rbx_1 << 3)
                
                do
                    int32_t rax_3
                    rax_3.b = *rcx_1 != arg1
                    
                    if (zx.d(r15.b) != rax_3)
                        break
                    
                    rdi_1 += 1
                    rbx_1 += 1
                    rcx_1 = &rcx_1[1]
                while (rbx_1 s< rcx)
            
            int32_t rbp_2 = rdi_1 - r9_1.d
            
            if (r15.b != 0)
                if (r12_1 != r9_1.d)
                    int64_t rcx_2 = *(r13 + 0x2f0)
                    arg3 = memmove(rcx_2 + (sx.q(r12_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
                
                r12_1 += rbp_2
            
            r15.b ^= 1
        while (rbx_1 s< rcx)
        
        rax = arg2
        *(r13 + 0x2f8) = r12_1

return sub_141f38c70(arg1, rax, arg3) __tailcall
