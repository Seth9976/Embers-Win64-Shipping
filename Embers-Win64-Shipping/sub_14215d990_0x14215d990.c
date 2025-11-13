// 函数: sub_14215d990
// 地址: 0x14215d990
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
    int64_t rbp_1 = sx.q(arg2[1].d)
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != rbp_1.d)
        sub_1405a5410(arg1, rbp_1.d)
    
    void* rbx_2 = &arg1[2]
    arg1[6].d = 0xffffffff
    *(arg1 + 0x34) = 0
    sub_14059a8e0(rbx_2, rbp_1.d)
    int32_t rax_2 = arg1[1].d + rbp_1.d
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_140610660(arg1)
    
    void* rdi_2 = &arg2[2]
    arg1[6].d = arg2[6].d
    *(arg1 + 0x34) = *(arg2 + 0x34)
    
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
    
    memcpy(*arg1, *arg2, (rbp_1 << 4).d)

sub_140780cc0(&arg1[0xa], &arg2[0xa])

if (&arg1[0x14] != &arg2[0x14])
    int64_t rdi_3 = sx.q(arg2[0x1d].d)
    void* rbx_3 = &arg1[0x1b]
    sub_1405a4aa0(rbx_3, 0, rdi_3.d, 4)
    void* rax_6 = arg2[0x1c]
    void* rdx_8 = &arg2[0x1b]
    void* r9_3 = *(rbx_3 + 8)
    
    if (rax_6 != 0)
        rdx_8 = rax_6
    
    if (r9_3 != 0)
        rbx_3 = r9_3
    
    memcpy(rbx_3, rdx_8, (rdi_3 << 2).d)
    arg1[0x1d].d = rdi_3.d
    int64_t rbp_2 = sx.q(arg2[0x15].d)
    arg1[0x15].d = 0
    
    if (*(arg1 + 0xac) != rbp_2.d)
        sub_1405a5410(&arg1[0x14], rbp_2.d)
    
    void* rbx_4 = &arg1[0x16]
    arg1[0x1a].d = 0xffffffff
    *(arg1 + 0xd4) = 0
    sub_14059a8e0(rbx_4, rbp_2.d)
    int32_t rax_7 = arg1[0x15].d + rbp_2.d
    arg1[0x15].d = rax_7
    
    if (rax_7 s> *(arg1 + 0xac))
        sub_1405a4f90(&arg1[0x14])
    
    void* rdi_4 = &arg2[0x16]
    arg1[0x1a].d = arg2[0x1a].d
    *(arg1 + 0xd4) = *(arg2 + 0xd4)
    
    if (rbx_4 != rdi_4)
        sub_14059a8e0(rbx_4, *(rdi_4 + 0x18))
        int32_t rax_10 = *(rdi_4 + 0x18)
        *(rbx_4 + 0x18) = rax_10
        
        if (rax_10 != 0)
            void* r9_4 = *(rdi_4 + 0x10)
            void* r10_2 = *(rbx_4 + 0x10)
            
            if (r9_4 != 0)
                rdi_4 = r9_4
            
            if (r10_2 != 0)
                rbx_4 = r10_2
            
            memcpy(rbx_4, rdi_4, (zx.q(rax_10 + 0x1f) u>> 5 << 2).d)
    
    memcpy(arg1[0x14], arg2[0x14], (rbp_2 << 4).d)

return arg1
