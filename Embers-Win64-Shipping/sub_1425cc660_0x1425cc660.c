// 函数: sub_1425cc660
// 地址: 0x1425cc660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1406da2c0(arg1, arg2)

if (&arg1[0xa] != &arg2[0xa])
    int64_t rdi_1 = sx.q(arg2[0x13].d)
    void* rbx_1 = &arg1[0x11]
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_1 = arg2[0x12]
    void* rdx = &arg2[0x11]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_1 != 0)
        rdx = rax_1
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx, (rdi_1 << 2).d)
    arg1[0x13].d = rdi_1.d
    sub_14094da60(&arg1[0xa], &arg2[0xa])

if (&arg1[0x14] != &arg2[0x14])
    int64_t rdi_2 = sx.q(arg2[0x1d].d)
    void* rbx_2 = &arg1[0x1b]
    sub_1405a4aa0(rbx_2, 0, rdi_2.d, 4)
    void* rax_2 = arg2[0x1c]
    void* rdx_2 = &arg2[0x1b]
    void* r9_2 = *(rbx_2 + 8)
    
    if (rax_2 != 0)
        rdx_2 = rax_2
    
    if (r9_2 != 0)
        rbx_2 = r9_2
    
    memcpy(rbx_2, rdx_2, (rdi_2 << 2).d)
    arg1[0x1d].d = rdi_2.d
    sub_1425cc0a0(&arg1[0x14], &arg2[0x14])

if (&arg1[0x1e] != &arg2[0x1e])
    int64_t rdi_3 = sx.q(arg2[0x27].d)
    void* rbx_3 = &arg1[0x25]
    sub_1405a4aa0(rbx_3, 0, rdi_3.d, 4)
    void* rax_3 = arg2[0x26]
    void* rdx_4 = &arg2[0x25]
    void* r9_3 = *(rbx_3 + 8)
    
    if (rax_3 != 0)
        rdx_4 = rax_3
    
    if (r9_3 != 0)
        rbx_3 = r9_3
    
    memcpy(rbx_3, rdx_4, (rdi_3 << 2).d)
    arg1[0x27].d = rdi_3.d
    sub_1425cbf20(&arg1[0x1e], &arg2[0x1e])

return arg1
