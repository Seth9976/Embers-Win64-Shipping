// 函数: sub_140a876d0
// 地址: 0x140a876d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x18)
int32_t r12 = arg2 + arg3
int32_t r10 = rsi

if (r12 != rsi)
    int32_t r11_1 = 0
    int32_t rax = 1
    int32_t r14_1 = 1
    int32_t rbx_1 = 0
    int32_t rdi_1 = 0
    int32_t r9_1 = 0
    
    if (rsi s> 0)
        do
            int32_t rsi_1 = rdi_1
            
            if (r9_1 s< arg2 || r9_1 s>= r12)
                if (rbx_1 != r9_1)
                    void* rcx = *(arg1 + 0x10)
                    void* rdx = arg1
                    
                    if (rcx != 0)
                        rdx = rcx
                    
                    int64_t rcx_1 = sx.q(r11_1)
                    int32_t r8 = *(rdx + (rcx_1 << 2))
                    void* r10_1 = rdx + (rcx_1 << 2)
                    
                    if ((*(rdx + (sx.q(rdi_1) << 2)) & r14_1) == 0)
                        *r10_1 = not.d(rax) & r8
                    else
                        *r10_1 = r8 | rax
                
                rbx_1 += 1
                int32_t temp0_1 = rax
                int32_t temp1_1 = rax
                rax *= 2
                
                if (temp0_1 == neg.d(temp1_1))
                    rax = 1
                    r11_1 += 1
            
            r10 = *(arg1 + 0x18)
            int32_t rcx_6 = r14_1 * 2
            r9_1 += 1
            r14_1 = 1
            
            if (rcx_6 != 0)
                r14_1 = rcx_6
            
            rdi_1 += 1
            
            if (rcx_6 != 0)
                rdi_1 = rsi_1
        while (r9_1 s< r10)

*(arg1 + 0x18) = r10 - arg3
