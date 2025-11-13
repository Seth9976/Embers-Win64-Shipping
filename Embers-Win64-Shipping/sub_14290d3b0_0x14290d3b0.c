// 函数: sub_14290d3b0
// 地址: 0x14290d3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx_2

if (arg2 == 9)
    rbx_2 = 0
    int32_t rbp_1 = **(arg1 + 0x10)
    int32_t rdi_2
    
    if (arg4 != 0)
        if (rbp_1 == 0x40a || rbp_1 == 0x43f)
            rdi_2 = 0x20
        else
            int32_t rdi_1
            rdi_1.b = rbp_1 != 0x40b
            rdi_2 = rdi_1 + 0x38
    
    if (arg4 == 0 || arg3 != rdi_2)
        sub_1428a5670(0x10, 0x10a, 0x66, "crypto\ec\ecx_meth.c", 0x40)
    else
        int64_t rax_6 = sub_1428a6a70(0x48)
        
        if (rax_6 != 0)
            memcpy(rax_6, arg4, arg3)
            sub_142896310(arg1, rbp_1, rax_6)
            rbx_2 = 1
        else
            sub_1428a5670(0x10, 0x10a, (rax_6 + 0x41).d, "crypto\ec\ecx_meth.c", 0x47)
else
    if (arg2 != 0xa)
        return 0xfffffffe
    
    int64_t r10_1 = *(arg1 + 0x28)
    int64_t rax_3
    
    if (r10_1 != 0)
        int32_t rcx = **(arg1 + 0x10)
        uint64_t rdx_2
        
        if (rcx == 0x40a || rcx == 0x43f)
            rdx_2 = 0x20
        else
            int64_t rdx_1
            rdx_1.b = rcx != 0x40b
            rdx_2 = rdx_1 + 0x38
        
        rax_3 = sub_1428a6af0(r10_1, rdx_2, "crypto\ec\ecx_meth.c", 0x148)
        *arg4 = rax_3
    
    if (r10_1 == 0 || rax_3 == 0)
        return 0
    
    int32_t rcx_2 = **(arg1 + 0x10)
    
    if (rcx_2 == 0x40a || rcx_2 == 0x43f)
        rbx_2 = 0x20
    else
        int32_t rbx_1
        rbx_1.b = rcx_2 != 0x40b
        rbx_2 = rbx_1 + 0x38

return zx.q(rbx_2)
