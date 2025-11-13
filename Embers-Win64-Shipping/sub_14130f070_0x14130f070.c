// 函数: sub_14130f070
// 地址: 0x14130f070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg2 + 0x10e8)
int32_t rax

if (rcx s>= 4)
    rax = 0x10
    
    if (rcx s< 0x10)
        rax = rcx
else
    rax = 4

arg1[3] = rax
float zmm12[0x4] = *(arg2 + 0x10e0)
float temp0[0x4] = _mm_max_ss((*(arg2 + 0x10e4))[0], 0)

if (not(zmm12[0] > temp0[0]))
    *arg1 = 0
    *(arg1 + 0xc) = 0
    arg1[1] = 0x3f800000
    arg1[2] = 0x3f800000
    return 0

bool cond:0 = temp0[0] != 0f
float zmm7[0x4] = 0x40490fdb
zmm7[0] = 3.14159274f f/ _mm_cvtepi32_ps(zx.o(rax)).d
int64_t result

if (cond:0)
    zmm12[0] = zmm12[0] / temp0[0]
    *arg1 = 2
    float zmm0_3[0x4] = sinf(zmm7[0])
    float zmm1[0x4] = zmm0_3
    float arg_8 = zmm0_3[0]
    zmm0_3 = 0xbf800000
    zmm1[0] = zmm1[0] / zmm12[0]
    
    if (not(zmm1[0] < -1f))
        zmm0_3 = __minss_xmmss_memss(zmm1[0], 0x3f800000)
    
    float zmm0_4[0x4] = asinf(zmm0_3[0])
    float zmm8[0x4] = cosf(zmm0_4[0])
    float zmm9[0x4] = cosf(zmm7[0])
    float zmm0_6[0x4] = zx.o(0)
    zmm12[0] = zmm12[0] * 1f
    zmm8[0] = zmm8[0] * zmm12[0]
    zmm0_6[0] = zmm0_4[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm8[0] = zmm8[0] - zmm9[0]
    zmm12[0] = zmm12[0] * zmm0_4[0]
    uint32_t zmm0_7[0x4]
    int512_t zmm6_2
    float zmm7_2
    int32_t zmm8_1
    float zmm9_1
    float zmm10_1[0x4]
    float zmm11_1
    uint32_t zmm12_1[0x4]
    float zmm13_2
    float zmm14_1
    zmm0_7, zmm6_2, zmm7_2, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_2, zmm14_1 =
        __libm_sse2_sincosf_(zmm0_6)
    zmm10_1[0] = zmm10_1[0] f* zmm8_1
    zmm6_2.o = zx.o(0)
    zmm0_7[0] = zmm0_7[0] f* zmm10_1[0]
    zmm7_2 = zmm7_2 f- zmm0_7[0]
    zmm12_1[0] = zmm12_1[0] f- 1f
    float zmm1_2[0x4] = zmm12_1
    zmm1_2[0] = zmm1_2[0] f* zmm12_1[0]
    zmm12_1[0] = zmm12_1[0] f* 0.5f
    zmm1_2[0] = zmm1_2[0] * 0.25f
    zmm10_1[0] = zmm10_1[0] - zmm1_2[0]
    float temp0_5[0x4] = _mm_sqrt_ss(0, zmm10_1[0])
    zmm6_2.o = _mm_sqrt_ss(0, zmm14_1 / ((zmm7_2 + zmm9_1 * arg_8) * zmm13_2))
    float zmm0_8
    float zmm6_3
    zmm0_8, result, zmm6_3 = sub_140a3f4a0(zmm12_1, temp0_5)
    arg1[4] = zmm0_8
    float zmm1_3 = zmm6_3 f* zmm12_1[0]
    zmm12_1[0] = zmm12_1[0] f- zmm11_1
    arg1[5] = zmm1_3
    arg1[1] = zmm6_3
    arg1[6] = zmm6_3 * zmm11_1
    zmm12_1[0] = zmm12_1[0] f* zmm6_3
    arg1[2] = zmm12_1[0]
else
    *arg1 = 1
    float zmm0_1[0x4]
    float zmm7_1[0x4]
    int32_t zmm13_1
    zmm0_1, zmm7_1, zmm13_1 = __libm_sse2_sincosf_(zmm7)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
    temp0_2[0] = temp0_2[0] * zmm0_1[0]
    arg1[4] = 0
    temp0_2[0] = temp0_2[0] f* zmm13_1
    temp0_2[0] = temp0_2[0] * 0.318309873f
    float zmm6_1 = 1f / _mm_sqrt_ss(0, temp0_2[0])[0]
    arg1[1] = zmm6_1
    float zmm0_2
    zmm0_2, result = cosf(zmm7_1[0])
    arg1[2] = zmm0_2 * zmm6_1

return result
