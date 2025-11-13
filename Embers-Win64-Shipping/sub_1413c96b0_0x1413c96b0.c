// 函数: sub_1413c96b0
// 地址: 0x1413c96b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg1
int64_t r8 = sx.q(*(r13 + 0x1148))

if (r8.d != 0)
    int32_t rdi_1 = 0
    int32_t r14_1 = 0
    int64_t r15
    r15.b = **(r13 + 0x1140) != arg1[1]
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< r8)
            int64_t* rcx = *(r13 + 0x1140) + (rbx_1 << 3)
            
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
                int64_t rcx_1 = *(r13 + 0x1140)
                memmove(rcx_1 + (sx.q(r14_1) << 3), rcx_1 + (r9_1 << 3), rsi_2 << 3)
            
            r14_1 += rsi_2
        
        r15.b ^= 1
    while (rbx_1 s< r8)
    
    *(r13 + 0x1148) = r14_1
    r13 = *arg1

return sub_141239530(r13 + 0x1150, r13, arg1[1]) __tailcall
