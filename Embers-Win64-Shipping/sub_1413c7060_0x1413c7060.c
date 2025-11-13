// 函数: sub_1413c7060
// 地址: 0x1413c7060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = *arg1
int64_t r8 = sx.q(*(r12 + 0x1c50))

if (r8.d != 0)
    int32_t rdi_1 = 0
    int32_t r14_1 = 0
    int64_t r15
    r15.b = **(r12 + 0x1c48) != arg1[1]
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< r8)
            int64_t* rcx = *(r12 + 0x1c48) + (rbx_1 << 3)
            
            do
                int32_t rax_3
                rax_3.b = *rcx != arg1[1]
                
                if (zx.d(r15.b) != rax_3)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx = &rcx[1]
            while (rbx_1 s< r8)
        
        int32_t rsi_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r14_1 != r9_1.d)
                int64_t rcx_1 = *(r12 + 0x1c48)
                memmove(rcx_1 + (sx.q(r14_1) << 3), rcx_1 + (r9_1 << 3), rsi_2 << 3)
            
            r14_1 += rsi_2
        
        r15.b ^= 1
    while (rbx_1 s< r8)
    
    *(r12 + 0x1c50) = r14_1

return j_sub_140a74f90(arg1[1]) __tailcall
