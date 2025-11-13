// 函数: sub_1405cdad0
// 地址: 0x1405cdad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405cd980(arg1, arg2)

if (&arg1[0xa] != &arg2[0xa])
    void* rbx_1 = &arg1[0x11]
    int64_t rdi_1 = sx.q(arg2[0x13].d)
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
    int64_t rbp_1 = sx.q(arg2[0xb].d)
    arg1[0xb].d = 0
    
    if (*(arg1 + 0x5c) != rbp_1.d)
        sub_1405a51b0(&arg1[0xa], rbp_1.d)
    
    *(arg1 + 0x84) = 0
    void* rbx_2 = &arg1[0xc]
    arg1[0x10].d = 0xffffffff
    sub_14059a8e0(rbx_2, rbp_1.d)
    int32_t rax_2 = arg1[0xb].d + rbp_1.d
    arg1[0xb].d = rax_2
    
    if (rax_2 s> *(arg1 + 0x5c))
        sub_1405c4e40(&arg1[0xa])
    
    void* rdi_2 = &arg2[0xc]
    arg1[0x10].d = arg2[0x10].d
    *(arg1 + 0x84) = *(arg2 + 0x84)
    
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
    
    memcpy(arg1[0xa], arg2[0xa], (rbp_1 << 5).d)

return arg1
