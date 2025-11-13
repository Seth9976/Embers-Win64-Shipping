// 函数: sub_1424a2fa0
// 地址: 0x1424a2fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_141fa75e0(&arg1[8], &arg2[8])
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x90) = *(arg2 + 0x90)
arg1[0x98] = arg2[0x98]
arg1[0x99] = arg2[0x99]
arg1[0x9a] = arg2[0x9a]
arg1[0x9b] = arg2[0x9b]
*(arg1 + 0x9c) = *(arg2 + 0x9c)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
sub_140597df0(&arg1[0xb8], &arg2[0xb8])
arg1[0xc8] = arg2[0xc8]
sub_141fa75e0(&arg1[0xd0], &arg2[0xd0])
sub_141fa75e0(&arg1[0x138], &arg2[0x138])
*(arg1 + 0x1a0) = *(arg2 + 0x1a0)
sub_1424a2ce0(&arg1[0x1a8], &arg2[0x1a8])
sub_140780c40(&arg1[0x1b8], &arg2[0x1b8])

if (&arg1[0x1c8] != &arg2[0x1c8])
    int64_t rdi_1 = sx.q(*(arg2 + 0x1d0))
    int64_t rbp_1 = *(arg2 + 0x1c8)
    int32_t r8_1 = *(arg1 + 0x1d4)
    *(arg1 + 0x1d0) = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&arg1[0x1c8], rdi_1.d, r8_1)
        memcpy(*(arg1 + 0x1c8), rbp_1, (rdi_1 << 3).d)
    else
        *(arg1 + 0x1d4) = 0

sub_140597df0(&arg1[0x1d8], &arg2[0x1d8])
*(arg1 + 0x1e8) ^= (*(arg2 + 0x1e8) ^ *(arg1 + 0x1e8)) & 1

if (&arg1[0x1f0] != &arg2[0x1f0])
    int64_t rdi_2 = sx.q(*(arg2 + 0x1f8))
    int64_t rbp_2 = *(arg2 + 0x1f0)
    int32_t r8_4 = *(arg1 + 0x1fc)
    *(arg1 + 0x1f8) = rdi_2.d
    
    if (rdi_2.d != 0 || r8_4 != 0)
        sub_1405c4a00(&arg1[0x1f0], rdi_2.d, r8_4)
        memcpy(*(arg1 + 0x1f0), rbp_2, (rdi_2 << 3).d)
    else
        *(arg1 + 0x1fc) = 0

if (&arg1[0x200] != &arg2[0x200])
    int64_t rdi_3 = sx.q(*(arg2 + 0x208))
    int64_t rbp_3 = *(arg2 + 0x200)
    int32_t r8_7 = *(arg1 + 0x20c)
    *(arg1 + 0x208) = rdi_3.d
    
    if (rdi_3.d != 0 || r8_7 != 0)
        sub_1405a4be0(&arg1[0x200], rdi_3.d, r8_7)
        memcpy(*(arg1 + 0x200), rbp_3, (rdi_3 << 4).d)
    else
        *(arg1 + 0x20c) = 0

*(arg1 + 0x210) = *(arg2 + 0x210)
*(arg1 + 0x218) = *(arg2 + 0x218)

if (&arg1[0x220] != &arg2[0x220])
    int32_t i_1 = *(arg2 + 0x228)
    int128_t* rbx_4 = *(arg2 + 0x220)
    int32_t r8_10 = *(arg1 + 0x22c)
    *(arg1 + 0x228) = i_1
    
    if (i_1 != 0 || r8_10 != 0)
        sub_1405a4be0(&arg1[0x220], i_1, r8_10)
        void* rax_21 = *(arg1 + 0x220)
        
        if (i_1 != 0)
            int32_t i
            
            do
                rax_21 += 0x10
                int128_t zmm0_1 = *rbx_4
                rbx_4 = &rbx_4[1]
                *(rax_21 - 0x10) = zmm0_1
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        *(arg1 + 0x22c) = 0

*(arg1 + 0x230) = *(arg2 + 0x230)
sub_140597df0(&arg1[0x238], &arg2[0x238])
*(arg1 + 0x248) = *(arg2 + 0x248)
arg1[0x24c] = arg2[0x24c]
arg1[0x24d] = arg2[0x24d]
*(arg1 + 0x250) = *(arg2 + 0x250)
sub_140597df0(&arg1[0x258], &arg2[0x258])

if (&arg1[0x268] != &arg2[0x268])
    int64_t rdi_4 = sx.q(*(arg2 + 0x270))
    int64_t rbp_4 = *(arg2 + 0x268)
    int32_t r8_11 = *(arg1 + 0x274)
    *(arg1 + 0x270) = rdi_4.d
    
    if (rdi_4.d != 0 || r8_11 != 0)
        sub_1405c4a00(&arg1[0x268], rdi_4.d, r8_11)
        memcpy(*(arg1 + 0x268), rbp_4, (rdi_4 << 3).d)
    else
        *(arg1 + 0x274) = 0

*(arg1 + 0x278) = *(arg2 + 0x278)
return arg1
