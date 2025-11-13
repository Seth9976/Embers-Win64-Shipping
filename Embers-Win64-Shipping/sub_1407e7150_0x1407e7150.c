// 函数: sub_1407e7150
// 地址: 0x1407e7150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = *(arg1 + 0xb8)
void* i = arg1 + 0xa8

if (i_1 != 0)
    i = i_1

for (void* r9 = i + (sx.q(*(arg1 + 0xc0)) << 3); i != r9; i += 8)
    void* rcx = *i
    
    if (rcx != *(arg1 + 0x98))
        bool z_1
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0xffffffff
            z_1 = true
        else
            *(rcx + 8)
            z_1 = false
        
        if (z_1)
            *(arg1 + 0xa0) = rcx
            break

void* rax_8 = *(arg1 + 0xa0)

if (rax_8 == 0)
    void*** rax_2 = j_sub_140a82f30(0xd8)
    void*** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        *rbx_1 = &data_142d5a028
        rbx_1[1].d = 0
        *rbx_1 = &data_142dc3420
        rbx_1[2] = arg1
        __builtin_memset(&rbx_1[3], 0, 0x30)
        rbx_1[9].d = 0xffffffff
        __builtin_memset(rbx_1 + 0x4c, 0, 0x20)
        __builtin_memset(&rbx_1[0xe], 0, 0x1c)
        __builtin_memset(&rbx_1[0x12], 0, 0x1c)
        __builtin_memset(&rbx_1[0x16], 0, 0x28)
    
    int64_t rbp_1 = sx.q(*(arg1 + 0xc0))
    int32_t rax_3 = (rbp_1 + 1).d
    *(arg1 + 0xc0) = rax_3
    
    if (rax_3 s> *(arg1 + 0xc4))
        sub_1408092e0(arg1 + 0xa8, rbp_1.d)
    
    void* rax_4 = *(arg1 + 0xb8)
    void* rcx_2 = arg1 + 0xa8
    
    if (rax_4 != 0)
        rcx_2 = rax_4
    
    *(rcx_2 + (rbp_1 << 3)) = rbx_1
    void* rcx_3 = arg1 + 0xa8
    void* rax_5 = *(arg1 + 0xb8)
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    void* rdx_1 = *(rcx_3 + (sx.q(*(arg1 + 0xc0)) << 3) - 8)
    *(arg1 + 0xa0) = rdx_1
    
    if (0 == *(rdx_1 + 8))
        *(rdx_1 + 8) = 0xffffffff
    else
        *(rdx_1 + 8)
    
    rax_8 = *(arg1 + 0xa0)

if (arg2 != 0)
    *(rax_8 + 0xb0) = 0
    uint64_t* rcx_5 = *(arg1 + 0xa0) + 0x38
    rcx_5[1].d = 0
    
    if (*(rcx_5 + 0xc) s<= 0xffffffff)
        sub_1405dadb0(rcx_5, 0)

return *(arg1 + 0xa0)
