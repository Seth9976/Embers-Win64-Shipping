// 函数: sub_141cb8d00
// 地址: 0x141cb8d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140780c40(arg1, arg2)
sub_140780c40(&arg1[2], &arg2[2])
sub_140780c40(&arg1[4], &arg2[4])
sub_140780c40(&arg1[6], &arg2[6])

if (&arg1[8] != &arg2[8])
    int64_t rdi_1 = sx.q(arg2[0x11].d)
    void* rbx_1 = &arg1[0xf]
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_1 = arg2[0x10]
    void* rdx_3 = &arg2[0xf]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_1 != 0)
        rdx_3 = rax_1
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx_3, (rdi_1 << 2).d)
    arg1[0x11].d = rdi_1.d
    sub_141c95020(&arg1[8], &arg2[8])

if (&arg1[0x12] != &arg2[0x12])
    int64_t rdi_2 = sx.q(arg2[0x1b].d)
    void* rbx_2 = &arg1[0x19]
    sub_1405a4aa0(rbx_2, 0, rdi_2.d, 4)
    void* rax_2 = arg2[0x1a]
    void* rdx_5 = &arg2[0x19]
    void* r9_2 = *(rbx_2 + 8)
    
    if (rax_2 != 0)
        rdx_5 = rax_2
    
    if (r9_2 != 0)
        rbx_2 = r9_2
    
    memcpy(rbx_2, rdx_5, (rdi_2 << 2).d)
    arg1[0x1b].d = rdi_2.d
    int64_t r12_1 = sx.q(arg2[0x13].d)
    arg1[0x13].d = 0
    
    if (*(arg1 + 0x9c) != r12_1.d)
        sub_1405a5410(&arg1[0x12], r12_1.d)
    
    *(arg1 + 0xc4) = 0
    void* rbx_3 = &arg1[0x14]
    arg1[0x18].d = 0xffffffff
    sub_14059a8e0(rbx_3, r12_1.d)
    int32_t rax_3 = arg1[0x13].d + r12_1.d
    arg1[0x13].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x9c))
        sub_140610660(&arg1[0x12])
    
    void* rdi_3 = &arg2[0x14]
    arg1[0x18].d = arg2[0x18].d
    *(arg1 + 0xc4) = *(arg2 + 0xc4)
    
    if (rbx_3 != rdi_3)
        sub_14059a8e0(rbx_3, *(rdi_3 + 0x18))
        int32_t rax_6 = *(rdi_3 + 0x18)
        *(rbx_3 + 0x18) = rax_6
        
        if (rax_6 != 0)
            void* r9_3 = *(rdi_3 + 0x10)
            void* r10_1 = *(rbx_3 + 0x10)
            
            if (r9_3 != 0)
                rdi_3 = r9_3
            
            if (r10_1 != 0)
                rbx_3 = r10_1
            
            memcpy(rbx_3, rdi_3, (zx.q(rax_6 + 0x1f) u>> 5 << 2).d)
    
    memcpy(arg1[0x12], arg2[0x12], (r12_1 << 4).d)

arg1[0x1c].b = arg2[0x1c].b
*(arg1 + 0xe1) = *(arg2 + 0xe1)
*(arg1 + 0xe2) = *(arg2 + 0xe2)
return arg1
