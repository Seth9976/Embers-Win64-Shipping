// 函数: sub_141c212a0
// 地址: 0x141c212a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rbx_1 = &arg1[7]
    int64_t rdi_1 = sx.q(arg2[9].d)
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
        sub_1405a5310(arg1, rbp_1.d)
    
    *(arg1 + 0x34) = 0
    void* rbx_2 = &arg1[2]
    arg1[6].d = 0xffffffff
    sub_14059a8e0(rbx_2, rbp_1.d)
    int32_t rax_2 = arg1[1].d + rbp_1.d
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_1405c5060(arg1)
    
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
    
    memcpy(*arg1, *arg2, (rbp_1 * 0x50).d)

return arg1
