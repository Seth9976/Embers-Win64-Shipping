// 函数: sub_141a6fe40
// 地址: 0x141a6fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[2] != &arg2[2])
    void* rbx_1 = &arg1[0x10]
    int64_t rdi_1 = sx.q(arg2[0x14])
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_1 = *(arg2 + 0x48)
    void* rdx = &arg2[0x10]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_1 != 0)
        rdx = rax_1
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx, (rdi_1 << 2).d)
    arg1[0x14] = rdi_1.d
    int32_t r12_1 = arg2[4]
    arg1[4] = 0
    
    if (arg1[5] != r12_1)
        sub_1406106e0(&arg1[2], r12_1)
    
    arg1[0xf] = 0
    void* rbx_2 = &arg1[6]
    arg1[0xe] = 0xffffffff
    sub_14059a8e0(rbx_2, r12_1)
    int32_t rax_2 = arg1[4] + r12_1
    arg1[4] = rax_2
    
    if (rax_2 s> arg1[5])
        sub_14061cbc0(&arg1[2])
    
    void* rdi_2 = &arg2[6]
    arg1[0xe] = arg2[0xe]
    arg1[0xf] = arg2[0xf]
    
    if (rbx_2 != rdi_2)
        sub_14059a8e0(rbx_2, *(rdi_2 + 0x18))
        int32_t rax_5 = *(rdi_2 + 0x18)
        *(rbx_2 + 0x18) = rax_5
        
        if (rax_5 != 0)
            void* r9_2 = *(rdi_2 + 0x10)
            void* r10_1 = *(rbx_2 + 0x10)
            
            if (r9_2 != 0)
                rdi_2 = r9_2
            
            if (r10_1 != 0)
                rbx_2 = r10_1
            
            memcpy(rbx_2, rdi_2, (zx.q(rax_5 + 0x1f) u>> 5 << 2).d)
    
    memcpy(*(arg1 + 8), *(arg2 + 8), r12_1 * 0x1c)

sub_141a6f280(&arg1[0x16], &arg2[0x16])
return arg1
