// 函数: sub_142434fb0
// 地址: 0x142434fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    int64_t* rcx = *(arg3 + 8)
    char rax_2
    
    if (rcx != 0)
        rax_2 = (*(*rcx + 0x28))(rcx)
    
    int32_t rax_6
    
    if (rcx == 0 || rax_2 == 0)
        rax_6 = -1
    else
        int64_t* rdi_1 = *(arg3 + 8)
        int32_t rax_4 = (*(*rdi_1 + 0x20))(rdi_1)
        int64_t rdx = *rdi_1
        rax_6 = sub_140a6af60((*(rdx + 0x18))(rdi_1, rdx), rax_4)
    
    void* rcx_4 = arg1[8]
    void* r8 = &arg1[7]
    
    if (rcx_4 != 0)
        r8 = rcx_4
    
    rbx_2 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_6)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_14243507b:
    *arg2 = 0xffffffff
else
    int64_t rdx_5 = *arg1
    
    while (true)
        int64_t rdi_2 = sx.q(rbx_2) * 0x28
        
        if (sub_14094dfb0(rdi_2 + rdx_5, arg3) != 0)
            *arg2 = rbx_2
            break
        
        rdx_5 = *arg1
        rbx_2 = *(rdi_2 + rdx_5 + 0x20)
        
        if (rbx_2 == 0xffffffff)
            goto label_14243507b

return arg2
