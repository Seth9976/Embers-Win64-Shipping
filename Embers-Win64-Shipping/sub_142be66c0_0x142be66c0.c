// 函数: sub_142be66c0
// 地址: 0x142be66c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[3]
uint32_t rbx = 0
uint32_t r8 = 0
uint32_t i_1 = ((zx.d(*(r9 + 0x200c)) << 8 | zx.d(*(r9 + 0x200d))) << 8 | zx.d(*(r9 + 0x200e))) << 8
    | zx.d(*(r9 + 0x200f))
int32_t rax_3 = *arg2

if (rax_3 u>= 0xffffffff)
    return 0

uint32_t rax_5 = rax_3 + 1

if (i_1 != 0)
    void* rbp_1 = r9 + 0x200d
    void* rsi_1 = r9 + 0x200e
    void* rdi_1 = r9 + 0x200f
    void* r14_1 = r9 + 0x200c
    uint32_t i
    
    do
        uint32_t rcx = zx.d(*(rbp_1 + 4))
        rbp_1 += 0xc
        uint32_t rdx = zx.d(*(r14_1 + 4))
        rsi_1 += 0xc
        uint32_t r10_1 = zx.d(*(r14_1 + 8))
        r14_1 += 0xc
        rdi_1 += 0xc
        uint32_t rdx_6 = ((rdx << 8 | rcx) << 8 | zx.d(*(rsi_1 - 8))) << 8 | zx.d(*(rdi_1 - 8))
        uint32_t r10_7 =
            ((r10_1 << 8 | zx.d(*(rbp_1 - 4))) << 8 | zx.d(*(rsi_1 - 4))) << 8 | zx.d(*(rdi_1 - 4))
        uint32_t j = ((zx.d(*r14_1) << 8 | zx.d(*rbp_1)) << 8 | zx.d(*rsi_1)) << 8 | zx.d(*rdi_1)
        uint32_t rcx_9 = rdx_6
        
        if (rax_5 u>= rdx_6)
            rcx_9 = rax_5
        
        rax_5 = rcx_9
        
        if (rcx_9 u<= r10_7)
            while (j u<= rdx_6 - rax_5 - 1)
                uint32_t r8_2 = j - rdx_6
                r8 = r8_2 + rax_5
                
                if (r8_2 != neg.d(rax_5))
                    if (r8 u< *(*arg1 + 0x10))
                        rbx = rax_5
                        goto label_142be6843
                    
                    r8 = 0
                    break
                
                if (rax_5 u>= 0xffffffff)
                    goto label_142be6843
                
                rax_5 += 1
                
                if (rax_5 u> r10_7)
                    break
        
        i = i_1
        i_1 -= 1
    while (i != 1)

label_142be6843:
*arg2 = rbx
return zx.q(r8)
