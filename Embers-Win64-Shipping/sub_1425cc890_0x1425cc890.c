// 函数: sub_1425cc890
// 地址: 0x1425cc890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rdi_1 = sx.q(arg2[9].d)
    void* rbx_1 = &arg1[7]
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_1 = arg2[8]
    void* rdx = &arg2[7]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_1 != 0)
        rdx = rax_1
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx, (rdi_1 << 2).d)
    arg1[9].d = rdi_1.d
    sub_141823c70(arg1, arg2)

sub_140780cc0(&arg1[0xa], &arg2[0xa])

if (&arg1[0x14] != &arg2[0x14])
    int64_t rdi_2 = sx.q(arg2[0x1d].d)
    void* rbx_2 = &arg1[0x1b]
    sub_1405a4aa0(rbx_2, 0, rdi_2.d, 4)
    void* rax_2 = arg2[0x1c]
    void* rdx_3 = &arg2[0x1b]
    void* r9_2 = *(rbx_2 + 8)
    
    if (rax_2 != 0)
        rdx_3 = rax_2
    
    if (r9_2 != 0)
        rbx_2 = r9_2
    
    memcpy(rbx_2, rdx_3, (rdi_2 << 2).d)
    arg1[0x1d].d = rdi_2.d
    int64_t r12_1 = sx.q(arg2[0x15].d)
    arg1[0x15].d = 0
    
    if (*(arg1 + 0xac) != r12_1.d)
        sub_1405a5410(&arg1[0x14], r12_1.d)
    
    *(arg1 + 0xd4) = 0
    void* rbx_3 = &arg1[0x16]
    arg1[0x1a].d = 0xffffffff
    sub_14059a8e0(rbx_3, r12_1.d)
    int32_t rax_3 = arg1[0x15].d + r12_1.d
    arg1[0x15].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xac))
        sub_140610660(&arg1[0x14])
    
    void* rdi_3 = &arg2[0x16]
    arg1[0x1a].d = arg2[0x1a].d
    *(arg1 + 0xd4) = *(arg2 + 0xd4)
    
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
    
    memcpy(arg1[0x14], arg2[0x14], (r12_1 << 4).d)

if (&arg1[0x1e] != &arg2[0x1e])
    int64_t rdi_4 = sx.q(arg2[0x27].d)
    void* rbx_4 = &arg1[0x25]
    sub_1405a4aa0(rbx_4, 0, rdi_4.d, 4)
    void* rax_7 = arg2[0x26]
    void* rdx_10 = &arg2[0x25]
    void* r9_4 = *(rbx_4 + 8)
    
    if (rax_7 != 0)
        rdx_10 = rax_7
    
    if (r9_4 != 0)
        rbx_4 = r9_4
    
    memcpy(rbx_4, rdx_10, (rdi_4 << 2).d)
    arg1[0x27].d = rdi_4.d
    sub_1425cc210(&arg1[0x1e], &arg2[0x1e])

return arg1
