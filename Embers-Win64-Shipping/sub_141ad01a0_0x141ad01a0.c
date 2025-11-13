// 函数: sub_141ad01a0
// 地址: 0x141ad01a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*(arg1 + 0x150) = 0

if (*(arg1 + 0x154) != 0)
    sub_141846c50(arg1 + 0x148, 0)

*(arg1 + 0x168) = 0

if (*(arg1 + 0x16c) != 0)
    sub_1405a5310(arg1 + 0x160, 0)

*(arg1 + 0x180) = 0

if (*(arg1 + 0x184) != 0)
    sub_141846c50(arg1 + 0x178, 0)

if (*(arg1 + 0x1c8) s> 0)
    int64_t rax_1 = 0
    float (* rcx_3)[0x4] = nullptr
    float (* rbx_1)[0x4] = nullptr
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float (* rsi_1)[0x4] = nullptr
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    int64_t arg_10 = 0
    float (* arg_18)[0x4] = nullptr
    
    do
        uint32_t zmm4[0x4] = data_143f2b810
        float zmm0[0x4] = zmm4
        zmm4 = __andps_xmmxud_memxud(zmm4, data_143f2b820)
        zmm0[0].q = zx.o(0) u>> 0x40
        float zmm5[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
        zmm0 = zx.o(0)
        
        if (rax_1 s>= 0 && i s< *(arg1 + 0xf8))
            int64_t rax_2 = *(arg1 + 0xf0)
            zmm5 = *(rcx_3 + rax_2)
            zmm0 = *(rcx_3 + rax_2 + 0x10)
            zmm4 = *(rcx_3 + rax_2 + 0x20)
        
        int64_t rbp_1 = *(arg1 + 0x1c0)
        int64_t rax_3 = *(arg1 + 0x1d8)
        int32_t rcx_4 = *(arg1 + 0x150)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        temp0_3[0] = temp0_3[0] f+ *(rbx_1 + rbp_1 + 8)
        zmm0[0] = zmm0[0] f+ *(rbx_1 + rbp_1 + 4)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
        temp0_4[0] = temp0_4[0] f+ *(rbx_1 + rbp_1 + 0xc)
        float temp0_5[0x4] = _mm_unpacklo_ps(temp0_3, 0)
        float zmm3[0x4] = zmm4
        float temp0_7[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, temp0_4[0].q), temp0_5[0].q)
        float zmm2[0x4] = *(rsi_1 + rax_3 + 0x10)
        int64_t rax_4 = *(arg1 + 0x1f0)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3[0] = zmm3[0] f* *(rax_4 + rbx_1 + 4)
        float temp0_11[0x4] = _mm_mul_ps(temp0_8, temp0_10)
        float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm2)
        float temp0_14[0x4] = __mulps_xmmps_memps(temp0_11, data_143f2b850)
        float temp0_15[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
        float temp0_16[0x4] = _mm_add_ps(temp0_14, temp0_13)
        float temp0_18[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(zmm5, zmm5, 0x55))
        float temp0_20[0x4] = _mm_mul_ps(temp0_15, _mm_shuffle_ps(zmm5, zmm5, 0xaa))
        float temp0_21[0x4] = __mulps_xmmps_memps(temp0_18, data_143f2b840)
        float temp0_22[0x4] = __mulps_xmmps_memps(temp0_20, data_143f2b830)
        float temp0_24[0x4] = _mm_add_ps(_mm_add_ps(temp0_16, temp0_21), temp0_22)
        float temp0_25[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
        temp0_25[0] = temp0_25[0] f* *(rax_4 + rbx_1 + 8)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
        zmm4[0] = zmm4[0] f* *(rax_4 + rbx_1 + 0xc)
        *(arg1 + 0x150) = rcx_4 + 1
        float temp0_27[0x4] = _mm_unpacklo_ps(temp0_25, 0)
        float temp0_29[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm4[0].q), temp0_27[0].q)
        
        if (rcx_4 + 1 s> *(arg1 + 0x154))
            sub_140ac0cd0(arg1 + 0x148)
        
        int64_t rcx_6 = *(arg1 + 0x148)
        float (* rdx_2)[0x4] = sx.q(rcx_4) * 0x2c
        *(rdx_2 + rcx_6) = *(rbx_1 + rbp_1)
        *(rdx_2 + rcx_6 + 0x10) = *(rbx_1 + rbp_1 + 0x10)
        *(rdx_2 + rcx_6 + 0x20) = *(rbx_1 + rbp_1 + 0x20)
        *(rdx_2 + rcx_6 + 0x28) = *(rbx_1 + rbp_1 + 0x28)
        int32_t rcx_7 = *(arg1 + 0x168)
        int64_t rbp_2 = *(arg1 + 0x1d8)
        *(arg1 + 0x168) = rcx_7 + 1
        
        if (rcx_7 + 1 s> *(arg1 + 0x16c))
            sub_1405c5060(arg1 + 0x160)
        
        int64_t rax_10 = *(arg1 + 0x160)
        int64_t rcx_10 = sx.q(rcx_7) * 0xa
        *(rax_10 + (rcx_10 << 3)) = *(rsi_1 + rbp_2)
        *(rax_10 + (rcx_10 << 3) + 0x10) = *(rsi_1 + rbp_2 + 0x10)
        *(rax_10 + (rcx_10 << 3) + 0x20) = *(rsi_1 + rbp_2 + 0x20)
        *(rax_10 + (rcx_10 << 3) + 0x30) = *(rsi_1 + rbp_2 + 0x30)
        *(rax_10 + (rcx_10 << 3) + 0x40) = *(rsi_1 + rbp_2 + 0x40)
        int64_t rbp_3 = sx.q(*(arg1 + 0x180))
        float (* r8_1)[0x4] = *(arg1 + 0x1f0)
        int32_t arg_8
        arg_8.q = r8_1
        int32_t rax_11 = (rbp_3 + 1).d
        *(arg1 + 0x180) = rax_11
        
        if (rax_11 s> *(arg1 + 0x184))
            sub_140ac0cd0(arg1 + 0x178)
            r8_1 = arg_8.q
        
        int64_t rcx_12 = *(arg1 + 0x178)
        i += 1
        float (* rdx_5)[0x4] = rbp_3 * 0x2c
        *(rdx_5 + rcx_12) = *(r8_1 + rbx_1)
        *(rdx_5 + rcx_12 + 0x10) = *(r8_1 + rbx_1 + 0x10)
        *(rdx_5 + rcx_12 + 0x20) = *(r8_1 + rbx_1 + 0x20)
        *(rdx_5 + rcx_12 + 0x28) = *(r8_1 + rbx_1 + 0x28)
        int64_t rcx_13 = *(arg1 + 0x148)
        float var_a0_1 = _mm_shuffle_ps(temp0_7, temp0_7, 0xaa)[0]
        *(rbx_1 + rcx_13 + 4) =
            (_mm_unpacklo_ps(temp0_7, _mm_shuffle_ps(temp0_7, temp0_7, 0x55)[0].q)).q
        *(rbx_1 + rcx_13 + 0xc) = var_a0_1
        int64_t rax_14 = *(arg1 + 0x160)
        float var_94_1 = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)[0]
        float temp0_34[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
        *(rax_14 + rsi_1 + 0x10) = temp0_24
        int64_t rcx_14 = *(arg1 + 0x178)
        rsi_1 = &rsi_1[5]
        *(rcx_14 + rbx_1 + 4) = (_mm_unpacklo_ps(temp0_29, temp0_34[0].q)).q
        *(rcx_14 + rbx_1 + 0xc) = var_94_1
        rbx_1 = &(*rbx_1)[0xb]
        rax_1 = arg_10 + 1
        rcx_3 = &arg_18[3]
        arg_10 = rax_1
        arg_18 = rcx_3
    while (i s< *(arg1 + 0x1c8))

int32_t var_a8 = 0x3f800000
int32_t var_a4 = 0x3f800000
int32_t var_a0_2 = 0x3f800000
sub_141f771f0(arg1 + 0x148, 0, 0, 0xa, 0, 0, &var_a8)
return sub_141f56760(arg1 + 0x148, arg1 + 0x1b0, 0x3f000000) __tailcall
