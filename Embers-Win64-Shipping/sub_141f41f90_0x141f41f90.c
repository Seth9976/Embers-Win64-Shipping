// 函数: sub_141f41f90
// 地址: 0x141f41f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t i = 0

if (arg2[1].d s<= 0)
    return 

int64_t r12_1 = 0
int16_t* r14_1 = nullptr

do
    int64_t rdi_1 = sx.q(arg1[1].d)
    int16_t r15_1 = *(r14_1 + *arg2)
    
    if (rbp != rdi_1.d)
        int64_t rcx_1 = *arg1
        uint64_t rax = zx.q(*(rcx_1 + (r12_1 << 1)))
        
        if (rax.w u>= r15_1)
            if (rax.w != r15_1)
                int32_t rax_3 = (rdi_1 + 1).d
                arg1[1].d = rax_3
                
                if (rax_3 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                    rcx_1 = *arg1
                
                int64_t rdx_2 = rcx_1 + (sx.q(rbp) << 1)
                memmove(rdx_2 + 2, rdx_2, (rdi_1.d - rbp) * 2)
                *(*arg1 + (r12_1 << 1)) = r15_1
            
            i += 1
            r14_1 = &r14_1[1]
    else
        int32_t rax_2 = (rdi_1 + 1).d
        arg1[1].d = rax_2
        
        if (rax_2 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        *(*arg1 + (rdi_1 << 1)) = r15_1
        i += 1
        r14_1 = &r14_1[1]
    
    rbp += 1
    r12_1 += 1
while (i s< arg2[1].d)
