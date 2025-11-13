// 函数: sub_141c43f60
// 地址: 0x141c43f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 1
uint64_t rdi = zx.q(1 << arg3)
uint64_t rdx = zx.q(**(arg1 + 0x20))
uint32_t r15 = (rdi * 3).d * 2
uint32_t r8 = (rdx << 3).d
uint32_t r9_1 = (rdi + (rdx << 1)).d << 2
uint32_t rdx_1 = r15 + r8
uint32_t r10_1 = (rdi + (rdx << 2)).d * 2
float zmm7[0x4] = *(arg2 + (sx.q(r8) << 2))
void* r8_1 = *(arg1 + 0x30)
float zmm9[0x4] = *(arg2 + (sx.q(r8 + 4) << 2))
float zmm5[0x4] = *(arg2 + (sx.q(r9_1) << 2))
float var_138[0x4] = _mm_shuffle_ps(zmm7, zmm5, 0x44)
float zmm8[0x4] = *(arg2 + (sx.q(r9_1 + 4) << 2))
float zmm3[0x4] = *(arg2 + (sx.q(r10_1) << 2))
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm5, 0xee)
float temp0_2[0x4] = _mm_shuffle_ps(zmm9, zmm8, 0x44)
float zmm6[0x4] = *(arg2 + (sx.q(r10_1 + 4) << 2))
float zmm2[0x4] = *(arg2 + (sx.q(rdx_1) << 2))
int64_t rcx_4 = sx.q(rdx_1 + 4)
float var_128[0x4] = _mm_shuffle_ps(zmm3, zmm2, 0x44)
float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm2, 0xee)
float var_e8[0x4] = __shufps_xmmps_memps_immb(zmm6, *(arg2 + (rcx_4 << 2)), 0x44)
float var_c8[0x4] = __shufps_xmmps_memps_immb(zmm6, *(arg2 + (rcx_4 << 2)), 0xee)
float var_118[0x4] = temp0_1
float var_108[0x4] = temp0_4
float var_f8[0x4] = temp0_2
float var_d8[0x4] = _mm_shuffle_ps(zmm9, zmm8, 0xee)
float var_1b8[0x4]
float zmm12[0x4] = sub_141c44460(arg1, &var_138, r8_1, &var_1b8)
float var_148[0x4]
float zmm8_1[0x4] = var_148
float var_158[0x4]
float zmm9_1[0x4] = var_158
float var_168[0x4]
float zmm10[0x4] = var_168
float var_178[0x4]
float zmm13[0x4] = var_178
float var_188[0x4]
float zmm14[0x4] = var_188
float var_198[0x4]
float zmm15[0x4] = var_198
float var_1a8[0x4]
float zmm0_1[0x4] = var_1a8
int64_t r11_1 = sx.q(rdi.d) s>> 2
float zmm11_1[0x4]

if (r11_1 s<= 1)
    zmm11_1 = var_1b8
else
    int64_t r12_1 = 1
    float var_1c8_1[0x4] = zmm0_1
    float var_1d8_1[0x4] = var_1b8
    float var_88_1[0x4] = zmm12
    
    do
        int64_t r10_2 = *(arg1 + 0x20)
        uint64_t rax_10 = zx.q(*(r10_2 + (r12_1 << 3)))
        uint32_t rcx_6 = (rax_10 << 3).d
        uint32_t rdx_4 = (rdi + (rax_10 << 1)).d << 2
        uint32_t r9_3 = rcx_6 + r15
        uint32_t r8_3 = (rdi + (rax_10 << 2)).d * 2
        float zmm5_1[0x4] = *(arg2 + (sx.q(rcx_6) << 2))
        float zmm7_1[0x4] = *(arg2 + (sx.q(rcx_6 + 4) << 2))
        float zmm2_1[0x4] = *(arg2 + (sx.q(rdx_4) << 2))
        float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm2_1, 0xee)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm2_1, 0x44)
        float zmm3_1[0x4] = *(arg2 + (sx.q(rdx_4 + 4) << 2))
        float zmm4_1[0x4] = *(arg2 + (sx.q(r8_3) << 2))
        float zmm6_1[0x4] = *(arg2 + (sx.q(r8_3 + 4) << 2))
        zmm0_1 = *(arg2 + (sx.q(r9_3) << 2))
        float temp0_10[0x4] = _mm_shuffle_ps(zmm4_1, zmm0_1, 0xee)
        int64_t rcx_10 = sx.q(r9_3 + 4)
        uint64_t rax_19 = zx.q(*(r10_2 + (r12_1 << 3) - 4))
        float temp0_11[0x4] = _mm_shuffle_ps(zmm4_1, zmm0_1, 0x44)
        float temp0_12[0x4] = _mm_shuffle_ps(zmm7_1, zmm3_1, 0x44)
        float temp0_13[0x4] = __shufps_xmmps_memps_immb(zmm6_1, *(arg2 + (rcx_10 << 2)), 0x44)
        float temp0_14[0x4] = __shufps_xmmps_memps_immb(zmm6_1, *(arg2 + (rcx_10 << 2)), 0xee)
        uint32_t rcx_11 = (rax_19 << 3).d
        uint32_t rdx_6 = (rdi + (rax_19 << 1)).d << 2
        float temp0_15[0x4] = _mm_shuffle_ps(zmm7_1, zmm3_1, 0xee)
        uint32_t r9_4 = rcx_11 + r15
        int32_t r8_5 = (rdi + (rax_19 << 2)).d * 2
        *(arg2 + (sx.q(rcx_11) << 2)) = var_1d8_1
        *(arg2 + (sx.q(rcx_11 + 4) << 2)) = var_1c8_1
        *(arg2 + (sx.q(rdx_6) << 2)) = zmm15
        *(arg2 + (sx.q(rdx_6 + 4) << 2)) = zmm14
        *(arg2 + (sx.q(r8_5) << 2)) = zmm13
        *(arg2 + (sx.q(r8_5 + 4) << 2)) = zmm10
        *(arg2 + (sx.q(r9_4) << 2)) = zmm9_1
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xb1)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xb1)
        *(arg2 + (sx.q(r9_4 + 4) << 2)) = zmm8_1
        void* rcx_18 = sx.q(r14) * 0x180 + *(arg1 + 0x30)
        float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, *(rcx_18 + 0x30))
        float temp0_19[0x4] = __mulps_xmmps_memps(temp0_17, *(rcx_18 + 0x50))
        float temp0_20[0x4] = _mm_add_ps(temp0_18, temp0_8)
        float temp0_21[0x4] = _mm_add_ps(temp0_19, temp0_10)
        zmm8_1 = *(rcx_18 + 0x140)
        zmm3_1 = *(rcx_18 + 0xc0)
        zmm13 = *(rcx_18 + 0xf0)
        r14 += 1
        zmm15 = *(rcx_18 + 0xe0)
        r12_1 += 1
        zmm14 = *(rcx_18 + 0x130)
        float temp0_23[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_12, temp0_12, 0xb1), *(rcx_18 + 0x70))
        float temp0_25[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_13, temp0_13, 0xb1), *(rcx_18 + 0x90))
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xb1)
        float temp0_27[0x4] = _mm_add_ps(temp0_23, temp0_12)
        float temp0_28[0x4] = __mulps_xmmps_memps(temp0_26, *(rcx_18 + 0xb0))
        float temp0_29[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xb1)
        float temp0_30[0x4] = _mm_add_ps(temp0_25, temp0_13)
        float temp0_31[0x4] = __mulps_xmmps_memps(temp0_29, *(rcx_18 + 0xd0))
        zmm2_1 = *(rcx_18 + 0xa0)
        float temp0_32[0x4] = _mm_add_ps(temp0_28, temp0_15)
        zmm7_1 = *(rcx_18 + 0x80)
        float temp0_33[0x4] = _mm_mul_ps(zmm8_1, temp0_27)
        float temp0_34[0x4] = _mm_mul_ps(zmm7_1, temp0_30)
        float temp0_35[0x4] = _mm_add_ps(temp0_31, temp0_14)
        zmm6_1 = *(rcx_18 + 0x60)
        float temp0_36[0x4] = _mm_mul_ps(zmm2_1, temp0_32)
        float temp0_37[0x4] = _mm_add_ps(temp0_33, temp0_9)
        float temp0_38[0x4] = _mm_mul_ps(zmm6_1, temp0_27)
        float temp0_39[0x4] = _mm_add_ps(temp0_34, temp0_11)
        float temp0_40[0x4] = _mm_mul_ps(*(rcx_18 + 0x150), temp0_30)
        float temp0_41[0x4] = _mm_add_ps(temp0_36, temp0_20)
        zmm4_1 = *(rcx_18 + 0x160)
        float temp0_42[0x4] = _mm_add_ps(temp0_38, temp0_9)
        zmm11_1 = *(rcx_18 + 0x20)
        float temp0_43[0x4] = _mm_mul_ps(zmm4_1, temp0_32)
        float zmm1_1[0x4] = *(rcx_18 + 0x170)
        float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_11)
        float temp0_45[0x4] = _mm_mul_ps(zmm1_1, temp0_35)
        float temp0_46[0x4] = _mm_mul_ps(zmm3_1, temp0_35)
        float temp0_47[0x4] = _mm_add_ps(temp0_43, temp0_20)
        zmm0_1 = *(rcx_18 + 0x40)
        zmm10 = *(rcx_18 + 0x110)
        float temp0_48[0x4] = _mm_add_ps(temp0_45, temp0_21)
        float temp0_49[0x4] = _mm_mul_ps(zmm11_1, temp0_41)
        float temp0_50[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xb1)
        float temp0_51[0x4] = _mm_add_ps(temp0_46, temp0_21)
        zmm9_1 = *(rcx_18 + 0x100)
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xb1)
        float temp0_53[0x4] = _mm_mul_ps(zmm13, temp0_50)
        zmm11_1 = _mm_add_ps(temp0_49, temp0_42)
        float temp0_55[0x4] = _mm_mul_ps(zmm9_1, temp0_50)
        float temp0_56[0x4] = _mm_mul_ps(zmm0_1, temp0_51)
        float temp0_57[0x4] = _mm_mul_ps(zmm15, temp0_41)
        zmm13 = _mm_add_ps(temp0_53, temp0_37)
        float temp0_59[0x4] = _mm_mul_ps(zmm14, temp0_51)
        zmm9_1 = _mm_add_ps(temp0_55, temp0_37)
        zmm8_1 = *(rcx_18 + 0x120)
        zmm0_1 = _mm_add_ps(temp0_56, temp0_39)
        float temp0_62[0x4] = _mm_mul_ps(zmm8_1, temp0_52)
        zmm15 = _mm_add_ps(temp0_57, temp0_42)
        float temp0_64[0x4] = _mm_mul_ps(zmm10, temp0_52)
        zmm14 = _mm_add_ps(temp0_59, temp0_39)
        var_1d8_1 = zmm11_1
        var_1c8_1 = zmm0_1
        zmm8_1 = _mm_add_ps(temp0_62, temp0_44)
        zmm10 = _mm_add_ps(temp0_64, temp0_44)
    while (r12_1 s< r11_1)

uint64_t rdx_7 = zx.q(*(*(arg1 + 0x20) + (sx.q(r14) << 3) - 4))
uint32_t rcx_20 = (rdx_7 << 3).d
uint32_t r8_7 = (rdi + (rdx_7 << 1)).d << 2
uint32_t rdx_8 = rcx_20 + r15
uint32_t r9_6 = (rdi + (rdx_7 << 2)).d * 2
*(arg2 + (sx.q(rcx_20) << 2)) = zmm11_1
*(arg2 + (sx.q(rcx_20 + 4) << 2)) = zmm0_1
*(arg2 + (sx.q(r8_7) << 2)) = zmm15
*(arg2 + (sx.q(r8_7 + 4) << 2)) = zmm14
*(arg2 + (sx.q(r9_6) << 2)) = zmm13
*(arg2 + (sx.q(r9_6 + 4) << 2)) = zmm10
*(arg2 + (sx.q(rdx_8) << 2)) = zmm9_1
*(arg2 + (sx.q(rdx_8 + 4) << 2)) = zmm8_1
return rdx_8 + 4
