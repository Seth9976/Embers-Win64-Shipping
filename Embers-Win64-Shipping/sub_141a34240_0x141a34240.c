// 函数: sub_141a34240
// 地址: 0x141a34240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int64_t rbp_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = rbx_1.d
    
    if (rbx_1.d != 0 || r8_1 != 0)
        sub_1405c4a90(arg1, rbx_1.d, r8_1)
        memcpy(*arg1, rbp_1, (rbx_1 << 2).d)
    else
        *(arg1 + 0xc) = 0

if (&arg1[2] != &arg2[2])
    int64_t rbp_2 = sx.q(arg2[3].d)
    int64_t r14_1 = arg2[2]
    int32_t r8_4 = *(arg1 + 0x1c)
    arg1[3].d = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1405a4be0(&arg1[2], rbp_2.d, r8_4)
        memcpy(arg1[2], r14_1, (rbp_2 << 4).d)
    else
        *(arg1 + 0x1c) = 0

if (&arg1[4] != &arg2[4])
    int64_t rdi_1 = sx.q(arg2[0xd].d)
    void* rbx_3 = &arg1[0xb]
    sub_1405a4aa0(rbx_3, 0, rdi_1.d, 4)
    void* rax_1 = arg2[0xc]
    void* rdx_4 = &arg2[0xb]
    void* r9_1 = *(rbx_3 + 8)
    
    if (rax_1 != 0)
        rdx_4 = rax_1
    
    if (r9_1 != 0)
        rbx_3 = r9_1
    
    memcpy(rbx_3, rdx_4, (rdi_1 << 2).d)
    arg1[0xd].d = rdi_1.d
    int64_t rbp_3 = sx.q(arg2[5].d)
    arg1[5].d = 0
    
    if (*(arg1 + 0x2c) != rbp_3.d)
        sub_1405a5410(&arg1[4], rbp_3.d)
    
    void* rbx_4 = &arg1[6]
    arg1[0xa].d = 0xffffffff
    *(arg1 + 0x54) = 0
    sub_14059a8e0(rbx_4, rbp_3.d)
    int32_t rax_2 = arg1[5].d + rbp_3.d
    arg1[5].d = rax_2
    
    if (rax_2 s> *(arg1 + 0x2c))
        sub_140610660(&arg1[4])
    
    void* rdi_2 = &arg2[6]
    arg1[0xa].d = arg2[0xa].d
    *(arg1 + 0x54) = *(arg2 + 0x54)
    
    if (rbx_4 != rdi_2)
        sub_14059a8e0(rbx_4, *(rdi_2 + 0x18))
        int32_t rax_5 = *(rdi_2 + 0x18)
        *(rbx_4 + 0x18) = rax_5
        
        if (rax_5 != 0)
            void* r9_2 = *(rdi_2 + 0x10)
            void* r10_1 = *(rbx_4 + 0x10)
            
            if (r9_2 != 0)
                rdi_2 = r9_2
            
            if (r10_1 != 0)
                rbx_4 = r10_1
            
            memcpy(rbx_4, rdi_2, (zx.q(rax_5 + 0x1f) u>> 5 << 2).d)
    
    memcpy(arg1[4], arg2[4], (rbp_3 << 4).d)

return arg1
