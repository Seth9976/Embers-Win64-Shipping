// 函数: sub_142a86f90
// 地址: 0x142a86f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = -1

if (arg1[6].d == 0)
    return 

int64_t rbx_1 = -1

while (true)
    int64_t rcx = sx.q(*(arg1 + 0x34))
    int32_t rdx_1 = rdi + 1
    int64_t rax = rbx_1 + 1
    rbx_1 = rax
    
    if (rdx_1 s>= rcx.d)
        break
    
    int64_t r9_1 = *arg1
    int32_t* rcx_1 = r9_1 + rax * 0x18
    
    while (*rcx_1 s< 0)
        rdx_1 += 1
        rbx_1 += 1
        rcx_1 = &rcx_1[6]
        
        if (rbx_1 s>= rcx)
            return 
    
    rdi = rdx_1
    int32_t* rdx_2 = r9_1 + sx.q(rdx_1) * 0x18
    
    if (rdx_2 == 0)
        break
    
    if (*rdx_2 s>= 0)
        sub_142a86630(arg1, rdx_2)
