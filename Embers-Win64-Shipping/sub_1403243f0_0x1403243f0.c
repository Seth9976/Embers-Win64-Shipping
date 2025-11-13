// 函数: sub_1403243f0
// 地址: 0x1403243f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_18[0x4] = zmm15
float zmm14[0x4]
float var_28[0x4] = zmm14
float zmm13[0x4]
float var_38[0x4] = zmm13
float zmm12[0x4]
float var_48[0x4] = zmm12
float zmm11[0x4]
float var_58[0x4] = zmm11
float zmm10[0x4]
float var_68[0x4] = zmm10
uint32_t zmm9[0x4]
uint32_t var_78[0x4] = zmm9
float zmm8[0x4]
float var_88[0x4] = zmm8
float zmm7[0x4]
float var_98[0x4] = zmm7
float zmm6[0x4]
float var_a8[0x4] = zmm6
int32_t i = arg2 & 0xfffffffc
uint64_t i_2
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
uint32_t zmm5[0x4]

if (i s> 0)
    i_2 = 0
    zmm10 = data_142d3f640
    
    do
        int64_t rax = sx.q(i_2.d)
        zmm12 = arg1[rax * 3]
        zmm13 = arg1[sx.q((rax + 1).d) * 3]
        zmm8 = arg1[sx.q((rax + 2).d) * 3]
        float temp0_1[0x4] = _mm_mul_ps(zmm12, zmm12)
        float temp0_3[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_1, temp0_1, 1), temp0_1)
        float temp0_5[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x39), temp0_3)
        zmm9 = data_142d3f5c0
        float temp0_6[0x4] = _mm_cmpeq_ps(zmm9, temp0_5, 2)
        zmm11 = data_142ef1890
        float temp0_7[0x4] = _mm_rsqrt_ps(temp0_5)
        float temp0_8[0x4] = _mm_mul_ps(zmm13, zmm13)
        float temp0_10[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_8, temp0_8, 1), temp0_8)
        float temp0_11[0x4] = _mm_mul_ps(temp0_5, temp0_7)
        float temp0_13[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x39), temp0_10)
        float temp0_14[0x4] = _mm_cmpeq_ps(zmm9, temp0_13, 2)
        float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0_7)
        float temp0_16[0x4] = _mm_rsqrt_ps(temp0_13)
        float temp0_18[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_13, temp0_16), temp0_16)
        float temp0_19[0x4] = _mm_sub_ps(zmm11, temp0_15)
        float temp0_20[0x4] = _mm_mul_ps(zmm8, zmm8)
        zmm5 = _mm_add_ps(_mm_shuffle_pd(temp0_20, temp0_20, 1), temp0_20)
        float temp0_23[0x4] = _mm_sub_ps(zmm11, temp0_18)
        float temp0_25[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0x39), zmm5)
        float temp0_26[0x4] = _mm_cmpeq_ps(zmm9, temp0_25, 2)
        float temp0_27[0x4] = _mm_mul_ps(temp0_19, temp0_7)
        float temp0_28[0x4] = _mm_rsqrt_ps(temp0_25)
        float temp0_30[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_25, temp0_28), temp0_28)
        float temp0_31[0x4] = _mm_mul_ps(temp0_23, temp0_16)
        zmm5 = _mm_sub_ps(zmm11, temp0_30)
        zmm15 = arg1[sx.q((rax + 3).d) * 3]
        float temp0_34[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_27, zmm10), zmm12)
        float temp0_35[0x4] = _mm_mul_ps(temp0_31, zmm10)
        zmm5 = _mm_mul_ps(_mm_mul_ps(zmm5, temp0_28), zmm10)
        float temp0_38[0x4] = _mm_mul_ps(temp0_35, zmm13)
        zmm5 = _mm_mul_ps(zmm5, zmm8)
        float temp0_40[0x4] = _mm_mul_ps(zmm15, zmm15)
        zmm3 = _mm_shuffle_pd(temp0_40, temp0_40, 1)
        zmm7 = _mm_and_ps(temp0_34, temp0_6)
        float temp0_43[0x4] = _mm_add_ps(zmm3, temp0_40)
        float temp0_45[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0x39), temp0_43)
        zmm6 = data_142d3f660
        zmm4 = _mm_andnot_ps(temp0_6, zmm6)
        zmm9 = _mm_cmpeq_ps(zmm9, temp0_45, 2)
        float temp0_48[0x4] = _mm_rsqrt_ps(temp0_45)
        float temp0_49[0x4] = _mm_mul_ps(temp0_45, temp0_48)
        zmm4 = _mm_or_ps(zmm4, zmm7)
        float temp0_53[0x4] =
            _mm_mul_ps(_mm_sub_ps(zmm11, _mm_mul_ps(temp0_49, temp0_48)), temp0_48)
        float zmm1[0x4] = _mm_and_ps(temp0_38, temp0_14)
        zmm2 = _mm_andnot_ps(temp0_14, zmm6)
        uint32_t temp0_56[0x4] = _mm_and_ps(zmm5, temp0_26)
        zmm14 = _mm_andnot_ps(temp0_26, zmm6)
        zmm2 = _mm_or_ps(zmm2, zmm1)
        zmm11 = _mm_and_ps(_mm_mul_ps(_mm_mul_ps(temp0_53, zmm10), zmm15), zmm9)
        zmm14 = _mm_or_ps(zmm14, temp0_56)
        uint32_t temp0_64[0x4] = _mm_or_ps(_mm_andnot_ps(zmm9, zmm6), zmm11)
        arg1[rax * 3] = zmm4
        arg1[sx.q((rax + 1).d) * 3] = zmm2
        arg1[sx.q((rax + 2).d) * 3] = zmm14
        arg1[sx.q((rax + 3).d) * 3] = temp0_64
        i_2 = zx.q(rax.d + 4)
    while (i_2.d s< i)

if (i s>= arg2)
    return 

int64_t i_3 = sx.q(i)
uint32_t (* rcx)[0x4] = &arg1[i_3 * 3]
i_2 = sx.q(arg2) - i_3
zmm3 = data_142d3f660
uint64_t i_1

do
    zmm4 = *rcx
    zmm5 = _mm_mul_ps(zmm4, zmm4)
    float temp0_67[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm5, zmm5[0].q), zmm5)
    float temp0_68[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xe5)
    temp0_68[0] = temp0_68[0] + temp0_67[0]
    uint32_t temp0_70[0x4] = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_68[0], 6), 0xffffffff)
    temp0_68[0] = temp0_68[0] * 0.5f
    float temp0_71[0x4] = _mm_rsqrt_ss(temp0_68[0], temp0_68[0])
    temp0_71[0] = temp0_71[0] * temp0_71[0]
    temp0_71[0] = temp0_71[0] * temp0_68[0]
    zmm2 = 0x3f000000
    zmm2[0] = 0.5f - temp0_71[0]
    zmm2[0] = zmm2[0] * temp0_71[0]
    zmm2[0] = zmm2[0] + temp0_71[0]
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm2[0] = zmm2[0] * temp0_68[0]
    zmm6 = 0x3f000000
    zmm6[0] = 0.5f - zmm2[0]
    zmm6[0] = zmm6[0] * zmm2[0]
    zmm6[0] = zmm6[0] + zmm2[0]
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm4)
    zmm5 = _mm_shuffle_ps(temp0_70, temp0_70, 0)
    zmm6 = _mm_and_ps(temp0_73, zmm5)
    *rcx = _mm_or_ps(_mm_andnot_ps(zmm5, zmm3), zmm6)
    rcx = &rcx[3]
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
