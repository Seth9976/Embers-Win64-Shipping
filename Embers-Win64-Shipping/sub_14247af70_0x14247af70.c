// 函数: sub_14247af70
// 地址: 0x14247af70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405cd980(arg1, arg2)
sub_14247ac60(&arg1[0xa], &arg2[0xa])
sub_14247ac60(&arg1[0x14], &arg2[0x14])

if (&arg1[0x1e] != &arg2[0x1e])
    int64_t rdi_1 = sx.q(arg2[0x27].d)
    void* rbx_1 = &arg1[0x25]
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_1 = arg2[0x26]
    void* rdx_2 = &arg2[0x25]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_1 != 0)
        rdx_2 = rax_1
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx_2, (rdi_1 << 2).d)
    arg1[0x27].d = rdi_1.d
    int64_t r12_1 = sx.q(arg2[0x1f].d)
    arg1[0x1f].d = 0
    
    if (*(arg1 + 0xfc) != r12_1.d)
        sub_1405a51b0(&arg1[0x1e], r12_1.d)
    
    *(arg1 + 0x124) = 0
    void* rbx_2 = &arg1[0x20]
    arg1[0x24].d = 0xffffffff
    sub_14059a8e0(rbx_2, r12_1.d)
    int32_t rax_2 = arg1[0x1f].d + r12_1.d
    arg1[0x1f].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xfc))
        sub_1405c4e40(&arg1[0x1e])
    
    void* rdi_2 = &arg2[0x20]
    arg1[0x24].d = arg2[0x24].d
    *(arg1 + 0x124) = *(arg2 + 0x124)
    
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
    
    memcpy(arg1[0x1e], arg2[0x1e], (r12_1 << 5).d)

if (&arg1[0x28] != &arg2[0x28])
    int64_t rdi_3 = sx.q(arg2[0x31].d)
    void* rbx_3 = &arg1[0x2f]
    sub_1405a4aa0(rbx_3, 0, rdi_3.d, 4)
    void* rax_6 = arg2[0x30]
    void* rdx_9 = &arg2[0x2f]
    void* r9_3 = *(rbx_3 + 8)
    
    if (rax_6 != 0)
        rdx_9 = rax_6
    
    if (r9_3 != 0)
        rbx_3 = r9_3
    
    memcpy(rbx_3, rdx_9, (rdi_3 << 2).d)
    arg1[0x31].d = rdi_3.d
    sub_14247adb0(&arg1[0x28], &arg2[0x28])

return arg1
