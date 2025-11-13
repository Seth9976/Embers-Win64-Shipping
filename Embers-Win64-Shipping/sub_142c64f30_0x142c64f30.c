// 函数: sub_142c64f30
// 地址: 0x142c64f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x4abc)
uint64_t rbx = 0

if (r10 == 0)
label_142c64f8a:
    int64_t rax = sub_142c56260(arg3, arg4)
    
    if (rax != 0)
        void* rdx_1 = arg1 + rbx * 0x18
        *(rdx_1 + 0x4ac0) = rax
        *(arg1 + rbx * 0x18 + 0x4ac8) = arg4
        *(rdx_1 + 0x4ad0) = arg2
        *(arg1 + 0x4abc) += 1
        *(arg1 + 0x220) |= 0x10
        return 0
else
    while (*(arg1 + rbx * 0x18 + 0x4ad0) != arg2)
        rbx = zx.q(rbx.d + 1)
        
        if (rbx.d u>= r10)
            goto label_142c64f8a
    
    void* rbx_1 = arg1 + (rbx + 0x2b0) * 0x18
    int64_t rbp_2 = *(rbx_1 + 0xa48) + arg4
    void* r15_1 = arg1 + zx.q(rbx.d) * 0x18
    int64_t rax_7 = data_143ccb8a8(*(r15_1 + 0x4ac0), rbp_2)
    
    if (rax_7 != 0)
        memcpy(*(rbx_1 + 0xa48) + rax_7, arg3, arg4.d)
        *(r15_1 + 0x4ac0) = rax_7
        *(rbx_1 + 0xa48) = rbp_2
        *(arg1 + 0x220) |= 0x10
        return 0

return 0x1b
