// 函数: sub_142747580
// 地址: 0x142747580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg2
float zmm11[0x4] = *(arg1 + 0x1c0)
int64_t r8_1 = sx.q(arg2[1].d) << 6
float zmm15[0x4] = zmm11 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
void* r8_2 = r8_1 + r9
float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
float zmm13[0x4] = temp0 ^ 0x80000000
float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
float zmm14[0x4] = temp0_1 ^ 0x80000000
float var_d4 = zmm13[0]
float var_d0 = zmm14[0]
float var_cc = temp0_2[0]

if (r9 != r8_2)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    float zmm10[0x4]
    float var_58_1[0x4] = zmm10
    float zmm12[0x4] = zmm15[0].o
    float zmm0[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
    float zmm1[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
    float zmm3[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
    float var_d8
    var_d8.o = zmm0
    float var_c8_1[0x4] = zmm1
    float var_b8_1[0x4] = zmm3
    float temp0_6[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
    
    do
        float zmm2[0x4] = *(r9 + 0x10)
        zmm9 = *(r9 + 0x20)
        zmm8 = *(arg1 + 0x1e0)
        float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
        float temp0_9[0x4] = _mm_mul_ps(zmm1, zmm2)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
        float temp0_11[0x4] = __mulps_xmmps_memps(temp0_8, data_143f74190)
        float temp0_12[0x4] = _mm_mul_ps(temp0_10, zmm3)
        float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
        float temp0_14[0x4] = _mm_add_ps(temp0_11, temp0_9)
        float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_6)
        float temp0_16[0x4] = __mulps_xmmps_memps(temp0_12, data_143f74180)
        float temp0_17[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
        float temp0_18[0x4] = __mulps_xmmps_memps(temp0_15, data_143f74170)
        float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_16)
        zmm1 = *(arg1 + 0x1d0)
        float temp0_20[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        temp0_17[0] = temp0_17[0] - temp0_20[0]
        float temp0_21[0x4] = _mm_add_ps(temp0_19, temp0_18)
        zmm9[0] = zmm9[0] - zmm1[0]
        float temp0_22[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
        float temp0_23[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_22[0] = temp0_22[0] - temp0_23[0]
        temp0_17[0] = temp0_17[0] * zmm15[0]
        temp0_17[0] = temp0_17[0] * zmm14[0]
        zmm9[0] = zmm9[0] * zmm14[0]
        temp0_22[0] = temp0_22[0] * zmm13[0]
        temp0_22[0] = temp0_22[0] - temp0_17[0]
        temp0_22[0] = temp0_22[0] * zmm15[0]
        zmm9[0] = zmm9[0] - temp0_22[0]
        zmm9[0] = zmm9[0] * zmm13[0]
        temp0_22[0] = temp0_22[0] + temp0_22[0]
        temp0_17[0] = temp0_17[0] - zmm9[0]
        zmm9[0] = zmm9[0] + zmm9[0]
        temp0_22[0] = temp0_22[0] * temp0_2[0]
        temp0_17[0] = temp0_17[0] + temp0_17[0]
        temp0_22[0] = temp0_22[0] + zmm9[0]
        zmm9[0] = zmm9[0] * zmm14[0]
        temp0_22[0] = temp0_22[0] * zmm14[0]
        temp0_22[0] = temp0_22[0] * zmm13[0]
        temp0_17[0] = temp0_17[0] * zmm13[0]
        temp0_17[0] = temp0_17[0] - zmm9[0]
        temp0_17[0] = temp0_17[0] * temp0_2[0]
        temp0_17[0] = temp0_17[0] * zmm15[0]
        temp0_17[0] = temp0_17[0] + temp0_22[0]
        zmm9[0] = zmm9[0] * zmm15[0]
        temp0_17[0] = temp0_17[0] + temp0_22[0]
        temp0_22[0] = temp0_22[0] - temp0_17[0]
        zmm9[0] = zmm9[0] * temp0_2[0]
        zmm9[0] = zmm9[0] - temp0_22[0]
        temp0_17[0] = temp0_17[0] / zmm8[0]
        float temp0_24[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        zmm9[0] = zmm9[0] + temp0_17[0]
        zmm9[0] = zmm9[0] + temp0_17[0]
        float temp0_25[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
        temp0_22[0] = temp0_22[0] + zmm9[0]
        zmm9[0] = zmm9[0] / temp0_25[0]
        temp0_22[0] = temp0_22[0] / temp0_24[0]
        float temp0_26[0x4] = _mm_unpacklo_ps(temp0_17, zmm9[0].q)
        int64_t rax_1 = sx.q(*r9)
        r9 += 0x40
        zmm0 = data_14399f670
        zmm3 = data_14399f668
        int64_t rdx_1 = sx.q(arg1[0x92].d) + 0x45
        float temp0_28[0x4] = _mm_unpacklo_ps(temp0_26, _mm_unpacklo_ps(temp0_22, 0)[0].q)
        zmm2 = data_14399f66c
        float temp0_29[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
        zmm0 = var_d8.o
        float (* rcx_2)[0x4] = (rax_1 + 1) * 0x30 + arg1[rdx_1 * 2]
        zmm1 = var_c8_1
        rcx_2[2] = _mm_unpacklo_ps(temp0_29, _mm_unpacklo_ps(zmm2, 0)[0].q)
        zmm3 = var_b8_1
        *rcx_2 = temp0_21
        rcx_2[1] = temp0_28
    while (r9 != r8_2)

arg1[0xb5].b |= 0x40
sub_141ee8690(arg1)
sub_141ee8470(arg1)
jump(*(*arg1 + 0x908))
