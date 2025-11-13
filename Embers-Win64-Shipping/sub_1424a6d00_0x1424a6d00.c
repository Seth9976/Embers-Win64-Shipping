// 函数: sub_1424a6d00
// 地址: 0x1424a6d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] ^= (arg1[2] ^ arg2[2]) & 1
char rcx = ((arg1[2] ^ arg2[2]) & 2) ^ arg1[2]
arg1[2] = rcx
char rax_3 = ((rcx ^ arg2[2]) & 4) ^ rcx
arg1[2] = rax_3
char rcx_1 = ((rax_3 ^ arg2[2]) & 8) ^ rax_3
arg1[2] = rcx_1
arg1[2] = ((rcx_1 ^ arg2[2]) & 0x10) ^ rcx_1
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
sub_140627690(&arg1[0x20], &arg2[0x20])

if (&arg1[0x30] != &arg2[0x30])
    void* rbx_1 = &arg1[0x68]
    int64_t rdi_1 = sx.q(*(arg2 + 0x78))
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_12 = *(arg2 + 0x70)
    void* rdx_1 = &arg2[0x68]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_12 != 0)
        rdx_1 = rax_12
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx_1, (rdi_1 << 2).d)
    *(arg1 + 0x78) = rdi_1.d
    int64_t rbp_1 = sx.q(*(arg2 + 0x38))
    *(arg1 + 0x38) = 0
    
    if (*(arg1 + 0x3c) != rbp_1.d)
        sub_1405a5410(&arg1[0x30], rbp_1.d)
    
    *(arg1 + 0x64) = 0
    void* rbx_2 = &arg1[0x40]
    *(arg1 + 0x60) = 0xffffffff
    sub_14059a8e0(rbx_2, rbp_1.d)
    int32_t rax_13 = *(arg1 + 0x38) + rbp_1.d
    *(arg1 + 0x38) = rax_13
    
    if (rax_13 s> *(arg1 + 0x3c))
        sub_140610660(&arg1[0x30])
    
    void* rdi_2 = &arg2[0x40]
    *(arg1 + 0x60) = *(arg2 + 0x60)
    *(arg1 + 0x64) = *(arg2 + 0x64)
    
    if (rbx_2 != rdi_2)
        sub_14059a8e0(rbx_2, *(rdi_2 + 0x18))
        int32_t rax_16 = *(rdi_2 + 0x18)
        *(rbx_2 + 0x18) = rax_16
        
        if (rax_16 != 0)
            void* r9_2 = *(rdi_2 + 0x10)
            void* r10_1 = *(rbx_2 + 0x10)
            
            if (r9_2 != 0)
                rdi_2 = r9_2
            
            if (r10_1 != 0)
                rbx_2 = r10_1
            
            memcpy(rbx_2, rdi_2, (zx.q(rax_16 + 0x1f) u>> 5 << 2).d)
    
    memcpy(*(arg1 + 0x30), *(arg2 + 0x30), (rbp_1 << 4).d)

*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x84) = *(arg2 + 0x84)
return arg1
