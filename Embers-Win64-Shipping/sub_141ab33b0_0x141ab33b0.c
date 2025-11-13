// 函数: sub_141ab33b0
// 地址: 0x141ab33b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0 || arg2 s>= *(arg1 + 0x24) - 1)
    return 

int64_t r8_1 = *arg1
float zmm4[0x4] = data_143dbb1fc
float zmm5[0x4] = data_143dbb1f8
float zmm10[0x4] = data_143dbb200
int64_t rdx = sx.q(arg2)
int128_t* rbx_2 = rdx * 0x3c + r8_1
float zmm13[0x4] = *rbx_2
int128_t zmm14 = *(rbx_2 + 4)
int128_t zmm15 = *(rbx_2 + 8)
int64_t rax_3 = rdx * 0x3c
int128_t* rdi_2 = (rdx + 1) * 0x3c + r8_1
float zmm9[0x4] = *(rax_3 + r8_1 - 0x3c)
float zmm6[0x4] = *(rax_3 + r8_1 - 0x38)
zmm9[0] = zmm9[0] - zmm13[0]
float zmm7[0x4] = *(rax_3 + r8_1 - 0x34)
zmm6[0] = zmm6[0] f- zmm14.d
zmm7[0] = zmm7[0] f- zmm15.d
zmm9[0] = zmm9[0] * zmm9[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm9[0]
zmm6[0] = zmm6[0] + zmm7[0]
float arg_10
float zmm2[0x4]

if (not(zmm6[0] == 1f))
    if (zmm6[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
        zmm2 = 0x3f000000
        zmm6[0] = zmm6[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm6[0] = zmm6[0] * temp0_1[0]
        zmm2[0] = 0.5f - zmm6[0]
        temp0_1[0] = temp0_1[0] * zmm2[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm6[0] = zmm6[0] * temp0_1[0]
        zmm4[0] = 0.5f - zmm6[0]
        temp0_1[0] = temp0_1[0] * zmm4[0]
        zmm4 = data_143dbb1fc
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        arg_10 = temp0_1[0]
        temp0_1[0] = temp0_1[0] * zmm9[0]
        zmm6[0] = zmm6[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        zmm9 = temp0_1
        zmm5 = data_143dbb1f8
    else
        zmm9 = zmm5
        zmm6 = zmm4
        zmm7 = zmm10

float zmm1[0x4] = *(rbx_2 + 0x14)
zmm2 = *(rbx_2 + 0x18)
float zmm11[0x4] = *rdi_2
float zmm8[0x4] = *(rdi_2 + 4)
zmm11[0] = zmm11[0] - zmm13[0]
float zmm12[0x4] = *(rdi_2 + 8)
zmm8[0] = zmm8[0] f- zmm14.d
zmm2[0] = zmm2[0] * zmm6[0]
zmm12[0] = zmm12[0] f- zmm15.d
zmm2[0] = zmm2[0] * zmm9[0]
zmm1[0] = zmm1[0] * zmm7[0]
zmm1[0] = zmm1[0] * zmm9[0]
zmm1[0] = zmm1[0] - zmm2[0]
arg_10 = zmm1[0]
float zmm3[0x4] = rbx_2[1].d
zmm3[0] = zmm3[0] * zmm6[0]
zmm3[0] = zmm3[0] * zmm7[0]
zmm3[0] = zmm3[0] - zmm1[0]
zmm12[0] = zmm12[0] * zmm12[0]
zmm2[0] = zmm2[0] - zmm3[0]
zmm11[0] = zmm11[0] * zmm11[0]
float arg_20 = zmm3[0]
float arg_18 = zmm2[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm8[0] = zmm8[0] + zmm11[0]
zmm8[0] = zmm8[0] + zmm12[0]

if (not(zmm8[0] == 1f))
    if (zmm8[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
        zmm2 = 0x3f000000
        zmm8[0] = zmm8[0] * 0.5f
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0]
        zmm2[0] = 0.5f - zmm8[0]
        temp0_2[0] = temp0_2[0] * zmm2[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0]
        zmm4[0] = 0.5f - zmm8[0]
        zmm3 = arg_20
        temp0_2[0] = temp0_2[0] * zmm4[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        zmm11[0] = zmm11[0] * temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0]
        zmm12[0] = zmm12[0] * temp0_2[0]
    else
        zmm11 = zmm5
        zmm8 = zmm4
        zmm12 = zmm10

zmm8[0] = zmm8[0] * arg_18
zmm11[0] = zmm11[0] * arg_10
zmm12[0] = zmm12[0] * zmm3[0]
zmm8[0] = zmm8[0] + zmm11[0]
zmm11[0] = zmm11[0] * zmm9[0]
zmm8[0] = zmm8[0] * zmm6[0]
zmm12[0] = zmm12[0] * zmm7[0]
zmm8[0] = zmm8[0] + zmm12[0]
zmm11[0] = zmm11[0] + zmm8[0]
bool cond:0_1 = zmm8[0] < 0f
zmm11[0] = zmm11[0] + zmm12[0]
float zmm0[0x4]
float rax

if (not(cond:0_1))
    zmm0, rax = cosf(arg1[2].d[0])

if (not(cond:0_1) && zmm11[0] <= zmm0[0])
    return 

float var_bc_1

if (zmm11[0] <= 0f)
    zmm0 = *(rbx_2 + 0xc)
    zmm9[0] = zmm9[0] * zmm0[0]
    zmm6[0] = zmm6[0] * zmm0[0]
    zmm7[0] = zmm7[0] * zmm0[0]
    zmm13[0] = zmm13[0] - zmm9[0]
    zmm14.d = zmm14.d f- zmm6[0]
    zmm15.d = zmm15.d f- zmm7[0]
    zmm0 = _mm_unpacklo_ps(zmm13, zmm14.q)
    var_bc_1 = zmm15.d
else
    float zmm6_1
    float zmm7_1
    float zmm9_1
    int32_t zmm13_1
    int32_t zmm14_1
    int32_t zmm15_1
    zmm0, zmm6_1, zmm7_1, zmm9_1, zmm13_1, zmm14_1, zmm15_1 = __libm_sse2_sincosf_(arg1[2].d)
    int32_t zmm3_1 = *(rbx_2 + 0xc)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
    zmm0[0] = zmm0[0] * arg_10
    int64_t zmm1_1 = zmm0[0].q
    zmm0[0] = zmm0[0] * arg_20
    zmm1_1.d = zmm1_1.d f* arg_18
    zmm9_1 = zmm9_1 * temp0_3[0]
    zmm0[0] = zmm0[0] + zmm7_1 * temp0_3[0]
    zmm6_1 = zmm6_1 * temp0_3[0]
    zmm0[0] = zmm0[0] + zmm9_1
    zmm1_1.d = zmm1_1.d f+ zmm6_1
    zmm0[0] = zmm0[0] f* zmm3_1
    zmm0[0] = zmm0[0] f* zmm3_1
    zmm0[0] = zmm0[0] f+ zmm15_1
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm0[0] = zmm0[0] f+ zmm13_1
    zmm1_1.d = zmm1_1.d f+ zmm14_1
    var_bc_1 = zmm0[0]
    zmm0 = _mm_unpacklo_ps(zmm0, zmm1_1)

*rdi_2 = zmm0.q
*(rdi_2 + 8) = var_bc_1
