// 函数: sub_14254e850
// 地址: 0x14254e850
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
    
    *(arg1 + 0x34) = 0
    void* rbx_2 = &arg1[2]
    arg1[6].d = 0xffffffff
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

arg1[0xa].d = arg2[0xa].d
*(arg1 + 0x54) = *(arg2 + 0x54)

if (&arg1[0xb] != &arg2[0xb])
    int64_t rdi_3 = sx.q(arg2[0x14].d)
    void* rbx_3 = &arg1[0x12]
    sub_1405a4aa0(rbx_3, 0, rdi_3.d, 4)
    void* rax_8 = arg2[0x13]
    void* rdx_7 = &arg2[0x12]
    void* r9_3 = *(rbx_3 + 8)
    
    if (rax_8 != 0)
        rdx_7 = rax_8
    
    if (r9_3 != 0)
        rbx_3 = r9_3
    
    memcpy(rbx_3, rdx_7, (rdi_3 << 2).d)
    arg1[0x14].d = rdi_3.d
    sub_14254e110(&arg1[0xb], &arg2[0xb])

if (&arg1[0x15] != &arg2[0x15])
    int64_t rdi_4 = sx.q(arg2[0x1e].d)
    void* rbx_4 = &arg1[0x1c]
    sub_1405a4aa0(rbx_4, 0, rdi_4.d, 4)
    void* rax_9 = arg2[0x1d]
    void* rdx_9 = &arg2[0x1c]
    void* r9_4 = *(rbx_4 + 8)
    
    if (rax_9 != 0)
        rdx_9 = rax_9
    
    if (r9_4 != 0)
        rbx_4 = r9_4
    
    memcpy(rbx_4, rdx_9, (rdi_4 << 2).d)
    arg1[0x1e].d = rdi_4.d
    sub_14254e390(&arg1[0x15], &arg2[0x15])

arg1[0x1f].d = arg2[0x1f].d
*(arg1 + 0xfc) = *(arg2 + 0xfc)
arg1[0x20].b = arg2[0x20].b
return arg1
