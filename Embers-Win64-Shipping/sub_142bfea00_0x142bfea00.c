// 函数: sub_142bfea00
// 地址: 0x142bfea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t rcx = zx.w(*arg1)
uint16_t r8 = zx.w(arg1[1])

if (rcx * 0x100 == neg.w(r8))
    return sub_142c09c40() __tailcall

int32_t r11 = 8
int32_t rbp_1 = arg1.d - arg3[4]

while (arg2 u< arg7)
    int128_t* const r8_1 = &data_14369a5d0
    uint64_t r10_2 = zx.q(arg2 + 1) << 2
    int128_t* const rcx_1 = &data_14369a5d0
    void* rax_3 = &arg1[4 + r10_2]
    
    if (rax_3 u>= &arg1[4])
        r8_1 = rax_3
    
    uint64_t rdi_1 = zx.q(arg2) << 2
    void* rax_5 = &arg1[4 + rdi_1]
    
    if (rax_5 u>= &arg1[4])
        rcx_1 = rax_5
    
    if ((zx.d(*(r8_1 + 1)) << 0x10) + (zx.d(*(r8_1 + 2)) << 8) + (zx.d(*r8_1) << 0x18)
            + zx.d(*(r8_1 + 3)) u<= (zx.d(*(rcx_1 + 1)) << 0x10) + (zx.d(*(rcx_1 + 2)) << 8)
            + (zx.d(*rcx_1) << 0x18) + zx.d(*(rcx_1 + 3)))
        break
    
    void* rax_16 = &arg1[4 + r10_2]
    void* r8_2 = &data_14369a5d0
    int128_t* const rdx_5 = &data_14369a5d0
    
    if (rax_16 u>= &arg1[4])
        r8_2 = rax_16
    
    void* rax_17 = &arg1[4 + rdi_1]
    
    if (rax_17 u>= &arg1[4])
        rdx_5 = rax_17
    
    uint32_t rcx_12 = (zx.d(*(r8_2 + 1)) << 0x10) - (zx.d(*(rdx_5 + 1)) << 0x10)
        - (zx.d(*(rdx_5 + 2)) << 8) - (zx.d(*rdx_5) << 0x18) + (zx.d(*(r8_2 + 2)) << 8)
    
    if (rcx_12 + (zx.d(*r8_2) << 0x18) - zx.d(*(rdx_5 + 3)) + zx.d(*(r8_2 + 3)) u<= 8)
        break
    
    void* rax_30 = &arg1[4 + r10_2]
    void* rcx_16 = &data_14369a5d0
    
    if (rax_30 u>= &arg1[4])
        rcx_16 = rax_30
    
    if ((zx.d(*(rcx_16 + 1)) << 0x10) + (zx.d(*(rcx_16 + 2)) << 8) + (zx.d(*rcx_16) << 0x18)
            + zx.d(*(rcx_16 + 3)) u> arg3[6] - rbp_1)
        break
    
    void* rax_38 = &arg1[4 + rdi_1]
    void* r8_3 = &data_14369a5d0
    
    if (rax_38 u>= &arg1[4])
        r8_3 = rax_38
    
    int128_t* const r8_4 = &data_14369a5d0
    void* rax_41 = &arg1[4 + r10_2]
    int32_t r12_2 = zx.d(*(r8_3 + 3)) + (zx.d(*r8_3) << 0x18) + rbp_1 + (zx.d(*(r8_3 + 1)) << 0x10)
        + (zx.d(*(r8_3 + 2)) << 8)
    int128_t* const rcx_21 = &data_14369a5d0
    
    if (rax_41 u>= &arg1[4])
        r8_4 = rax_41
    
    void* rax_42 = &arg1[4 + rdi_1]
    
    if (rax_42 u>= &arg1[4])
        rcx_21 = rax_42
    
    uint32_t rdx_19 = (zx.d(*(r8_4 + 1)) << 0x10) - (zx.d(*(rcx_21 + 1)) << 0x10)
        - (zx.d(*(rcx_21 + 2)) << 8) - (zx.d(*rcx_21) << 0x18) + (zx.d(*(r8_4 + 2)) << 8)
    void* rax_54 = &arg1[4 + rdi_1]
    int32_t rsi_2 = zx.d(*(r8_4 + 3)) + rdx_19 - zx.d(*(rcx_21 + 3)) - 8 + (zx.d(*r8_4) << 0x18)
    int128_t* const rcx_22 = &data_14369a5d0
    
    if (rax_54 u>= &arg1[4])
        rcx_22 = rax_54
    
    uint64_t r8_5 = zx.q(*(rcx_22 + 2))
    uint64_t rdx_23 = zx.q(*(rcx_22 + 1))
    uint64_t r9_1 = zx.q(*rcx_22)
    uint64_t r10_3 = zx.q(*(rcx_22 + 3))
    void* rax_59
    
    if ((r9_1.d << 0x18) + (r8_5.d << 8) + (rdx_23.d << 0x10) != neg.d(r10_3.d))
        rax_59 = &arg1[(((((r9_1 << 8) + rdx_23) << 8) + r8_5) << 8) + r10_3]
    else
        rax_59 = &data_14369a5d0
    
    if ((zx.d(*(rax_59 + 5)) << 0x10) + (zx.d(*(rax_59 + 6)) << 8) + (zx.d(*(rax_59 + 4)) << 0x18)
            + zx.d(*(rax_59 + 7)) != 0x64757065)
        if (arg4 != (zx.d(*(rax_59 + 5)) << 0x10) + (zx.d(*(rax_59 + 6)) << 8)
                + (zx.d(*(rax_59 + 4)) << 0x18) + zx.d(*(rax_59 + 7)))
            break
        
        if (arg8 != 0)
            *arg8 = (zx.d(rcx.b) << 8) + zx.d(r8.b)
        
        if (arg5 != 0)
            *arg5 = sx.d(zx.w(*(rax_59 + 1)) + zx.w(*rax_59) * 0x100)
        
        if (arg6 != 0)
            *arg6 = sx.d(zx.w(*(rax_59 + 3)) + zx.w(*(rax_59 + 2)) * 0x100)
        
        return sub_142c09a80(arg3, r12_2 + 8, rsi_2)
    
    if (rsi_2 u< 2)
        break
    
    int32_t rax_67 = r11
    r11 -= 1
    arg2 = (zx.d(*(rax_59 + 8)) << 8) + zx.d(*(rax_59 + 9))
    
    if (rax_67 == 0)
        break

return sub_142c09c40()
