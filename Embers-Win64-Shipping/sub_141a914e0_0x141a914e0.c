// 函数: sub_141a914e0
// 地址: 0x141a914e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140597df0(arg1, arg2)
void* rdi = &arg2[2]
void* rbp = &arg1[2]

if (rbp != rdi)
    sub_14059a8e0(rbp, *(rdi + 0x18))
    int32_t rax_1 = *(rdi + 0x18)
    *(rbp + 0x18) = rax_1
    
    if (rax_1 != 0)
        void* r9_1 = *(rdi + 0x10)
        void* r10_1 = *(rbp + 0x10)
        
        if (r9_1 != 0)
            rdi = r9_1
        
        if (r10_1 != 0)
            rbp = r10_1
        
        memcpy(rbp, rdi, (zx.q(rax_1 + 0x1f) u>> 5 << 2).d)

arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
sub_14090a0d0(&arg1[0xa], &arg2[0xa])
sub_14090a0d0(&arg1[0xc], &arg2[0xc])
sub_14090a0d0(&arg1[0xe], &arg2[0xe])
sub_14086c240(&arg1[0x10], &arg2[0x10])
sub_14086c240(&arg1[0x12], &arg2[0x12])

if (&arg1[0x14] != &arg2[0x14])
    int64_t rbp_1 = sx.q(arg2[0x15].d)
    int64_t r14_1 = arg2[0x14]
    int32_t r8_4 = *(arg1 + 0xac)
    arg1[0x15].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8_4 != 0)
        sub_1405a4b40(&arg1[0x14], rbp_1.d, r8_4)
        memcpy(arg1[0x14], r14_1, (rbp_1 * 0x30).d)
    else
        *(arg1 + 0xac) = 0

if (&arg1[0x16] != &arg2[0x16])
    int64_t rbp_2 = sx.q(arg2[0x17].d)
    int64_t r14_2 = arg2[0x16]
    int32_t r8_8 = *(arg1 + 0xbc)
    arg1[0x17].d = rbp_2.d
    
    if (rbp_2.d != 0 || r8_8 != 0)
        sub_1407c3650(&arg1[0x16], rbp_2.d, r8_8)
        memcpy(arg1[0x16], r14_2, (rbp_2 * 0xc).d)
    else
        *(arg1 + 0xbc) = 0

sub_140597df0(&arg1[0x18], &arg2[0x18])

if (&arg1[0x1a] != &arg2[0x1a])
    int64_t rbp_3 = sx.q(arg2[0x1b].d)
    int64_t r14_3 = arg2[0x1a]
    int32_t r8_12 = *(arg1 + 0xdc)
    arg1[0x1b].d = rbp_3.d
    
    if (rbp_3.d != 0 || r8_12 != 0)
        sub_1405c4a00(&arg1[0x1a], rbp_3.d, r8_12)
        memcpy(arg1[0x1a], r14_3, (rbp_3 << 3).d)
    else
        *(arg1 + 0xdc) = 0

if (&arg1[0x1c] != &arg2[0x1c])
    int32_t rbp_4 = arg2[0x1d].d
    int64_t r14_4 = arg2[0x1c]
    int32_t r8_15 = *(arg1 + 0xec)
    arg1[0x1d].d = rbp_4
    
    if (rbp_4 != 0 || r8_15 != 0)
        sub_1405a4c70(&arg1[0x1c], rbp_4, r8_15)
        memcpy(arg1[0x1c], r14_4, rbp_4 * 2)
    else
        *(arg1 + 0xec) = 0

arg1[0x1e].b = arg2[0x1e].b
*(arg1 + 0xf1) = *(arg2 + 0xf1)
*(arg1 + 0xf2) = *(arg2 + 0xf2)

if (&arg1[0x1f] != &arg2[0x1f])
    int64_t rdi_5 = sx.q(arg2[0x28].d)
    void* rbx_1 = &arg1[0x26]
    sub_1405a4aa0(rbx_1, 0, rdi_5.d, 4)
    void* rax_13 = arg2[0x27]
    void* rdx_16 = &arg2[0x26]
    void* r9_2 = *(rbx_1 + 8)
    
    if (rax_13 != 0)
        rdx_16 = rax_13
    
    if (r9_2 != 0)
        rbx_1 = r9_2
    
    memcpy(rbx_1, rdx_16, (rdi_5 << 2).d)
    arg1[0x28].d = rdi_5.d
    sub_141a91240(&arg1[0x1f], &arg2[0x1f])

return arg1
