// 函数: sub_1426c2ac0
// 地址: 0x1426c2ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg3[1].d
uint8_t rbx = arg4

for (; i != 0; i = arg3[1].d)
    int64_t i_1 = sx.q(i)
    int64_t rax = *arg3
    *(rax + (i_1 << 2) - 4) -= 1
    void* rdx = rax + (i_1 << 2)
    char rax_1 = *(rax + (i_1 << 2) - 2)
    
    if (rax_1 == 2)
        char rax_2 = *(rdx - 1)
        
        if ((rax_2 & 1) == 0 && rbx == 0)
            *(rdx - 1) = (rax_2 & 0xfd) | 1
    else if (rax_1 == 3)
        char rcx = *(rdx - 1)
        
        if ((rcx & 1) == 0 && rbx != 0)
            *(rdx - 1) = ((((rbx * 2) ^ rcx) & 2) ^ rcx) | 1
    else if (rax_1 == 4)
        rbx = rbx == 0
    
    if (arg3[1].d == 1)
        *arg7 = 1
        
        if (rbx == 0 && *arg5 == 0xffffffff)
            *arg5 = *arg6
    
    uint8_t rax_5 = *(rdx - 1)
    
    if ((rax_5 & 1) != 0)
        rbx = rax_5 u>> 1 & 1
    
    if (*(rdx - 4) != 0)
        break
    
    int32_t rax_6 = arg2[1].d
    int32_t rdi_1 = rax_6 - 1
    
    if (rax_6 == 0)
        rdi_1 = -1
    
    int32_t r10_1 = rax_6 - 1
    
    if (rax_6 == 0)
        r10_1 = 0
    
    if (r10_1 - 2 s< 0)
        r10_1 = 0
    else if (r10_1 - 2 s< r10_1)
        r10_1 -= 2
    
    if (rax_6 == 0)
        rdi_1 = 0
    
    int32_t rdi_2 = rdi_1 - r10_1
    
    if (rdi_2 s> 2)
        rdi_2 = 2
    
    if (rdi_2 != 0)
        int32_t rcx_3 = rax_6 - rdi_2
        
        if (rcx_3 != r10_1)
            int64_t r9 = *arg2
            memmove(r9 + (sx.q(r10_1) << 1), r9 + (sx.q(rdi_2 + r10_1) << 1), (rcx_3 - r10_1) * 2)
            rax_6 = arg2[1].d
        
        arg2[1].d = rax_6 - rdi_2
    
    arg3[1].d -= 1
    sub_1405dac90(arg3)

return zx.q(rbx)
