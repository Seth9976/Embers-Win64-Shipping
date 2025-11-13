// 函数: sub_142b61fb0
// 地址: 0x142b61fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 

int64_t* rax = sub_142b77560(arg2)
int32_t r15_1 = rax.d

if (rax.d s< 0xffffffff)
    *arg4 = 1
    return 

int32_t rdi_1 = 0

while (true)
    int32_t rbx_1 = rdi_1
    
    if (rdi_1 != 0)
        int64_t rax_1 = *(arg1 + 0x280)
        int64_t rcx_2 = sx.q(rdi_1) * 2
        
        if (*(rax_1 + (rcx_2 << 3) + 0xc) s>= rdi_1)
            rbx_1 = *(rax_1 + (rcx_2 << 3) + 0xc)
    
    int64_t r8 = *(arg1 + 0x280)
    int32_t rbx_2 = rbx_1 + 1
    rax = sx.q(rbx_2) << 4
    int32_t i = *(rax + r8)
    
    while (i != 5)
        if (i == 1)
            return 
        
        i = *(rax + r8 + 0x10)
        rax = &rax[2]
        rbx_2 += 1
    
    rdi_1 = rbx_2
    
    if (rbx_2 s< 0)
        break
    
    if (*arg4 s> 0)
        break
    
    int32_t* rdx_2 = (sx.q(rbx_2 + 1) << 4) + r8
    bool cond:1_1
    
    if (*rdx_2 != 8)
        cond:1_1 = sx.d(*(rdx_2 + 0xa)) == r15_1
    else
        cond:1_1 = sub_142b5f280(arg1 + 0x238, rdx_2[1], zx.d(rdx_2[2].w), arg2) == 0
    
    if (cond:1_1 != 0)
        rax = (*(*arg3 + 0x18))(arg3)
        
        if (rax == 0)
            *arg4 = 7
            break
        
        sub_142b61f40(arg1, rbx_2, rax, arg4)
