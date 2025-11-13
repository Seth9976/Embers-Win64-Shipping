// 函数: sub_142b60f10
// 地址: 0x142b60f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0 || *(arg1 + 0x2e0) == 0)
    return 0

int32_t rax = sub_142b77560(arg2)

if (rax s< 0xffffffff)
    *arg3 = 1
    return 0

int32_t rdi_1 = 0
int32_t rbx_2
bool i

do
    int32_t rbx_1 = rdi_1
    
    if (rdi_1 != 0)
        int64_t rax_2 = *(arg1 + 0x280)
        int64_t rcx_2 = sx.q(rdi_1) * 2
        
        if (*(rax_2 + (rcx_2 << 3) + 0xc) s>= rdi_1)
            rbx_1 = *(rax_2 + (rcx_2 << 3) + 0xc)
    
    int64_t r8 = *(arg1 + 0x280)
    rbx_2 = rbx_1 + 1
    int64_t rax_4 = sx.q(rbx_2) << 4
    int32_t j = *(rax_4 + r8)
    
    while (j != 5)
        if (j == 1)
            return 0
        
        j = *(rax_4 + r8 + 0x10)
        rax_4 += 0x10
        rbx_2 += 1
    
    rdi_1 = rbx_2
    
    if (rbx_2 s< 0)
        return 0
    
    int32_t* rdx_2 = (sx.q(rbx_2 + 1) << 4) + r8
    
    if (*rdx_2 != 8)
        i = sx.d(*(rdx_2 + 0xa)) == rax
    else
        i = sub_142b5f280(arg1 + 0x238, rdx_2[1], zx.d(rdx_2[2].w), arg2) == 0
while (i == 0)
return sub_142b60d70(arg1, rbx_2)
