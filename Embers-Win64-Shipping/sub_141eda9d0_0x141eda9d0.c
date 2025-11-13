// 函数: sub_141eda9d0
// 地址: 0x141eda9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x1f2) & 0x10) == 0 || arg4 == 0 || (*(*arg4 + 0x3f0))(arg4) == 0)
    return 

float zmm2 = 9.99999994e-09f
float zmm3[0x4] = 0x3f000000
float zmm0[0x4] = *(*(arg1 + 0xb0) + 0x1d0)
float zmm6[0x4] = *(arg4 + 0x1d0)
float zmm7[0x4] = zmm6
zmm7[0] = zmm7[0] - zmm0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm6[0] = zmm6[0] - temp0_1[0]
float zmm12[0x4] = data_143dbb200
zmm7[0] = zmm7[0] * zmm7[0]
float zmm13[0x4] = 0x3f800000
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + 0.0625f
float arg_8
float zmm11[0x4]

if (not(zmm6[0] != 1f))
    zmm11 = 0x3e800000
else if (zmm6[0] >= 9.99999994e-09f)
    zmm3 = zx.o(0)
    float zmm5_1[0x4] = 0x3f000000
    zmm3[0] = zmm6[0]
    float temp0_3[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm3[0] = zmm3[0] * temp0_3[0]
    temp0_3[0] = temp0_3[0] * (0.5f - zmm3[0])
    zmm2 = 9.99999994e-09f
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm3[0] = zmm3[0] * temp0_3[0]
    zmm5_1[0] = 0.5f - zmm3[0]
    zmm3 = 0x3f000000
    temp0_3[0] = temp0_3[0] * zmm5_1[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    zmm11 = temp0_3
    arg_8 = temp0_3[0]
    zmm11[0] = zmm11[0] * 0.25f
    zmm7[0] = zmm7[0] * temp0_3[0]
    zmm6[0] = zmm6[0] * temp0_3[0]
else
    zmm7 = data_143dbb1f8
    zmm11 = zmm12
    zmm6 = data_143dbb1fc

float zmm10[0x4] = *(arg1 + 0xc8)
float zmm8[0x4] = *(arg1 + 0xc4)
zmm10[0] = zmm10[0] * zmm10[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm8[0] = zmm8[0] + zmm10[0]
int64_t var_a8
float zmm1[0x4]

if (zmm8[0] != 1f)
    if (zmm8[0] >= zmm2)
        float temp0_5[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
        zmm2 = zmm3[0]
        zmm8[0] = zmm8[0] * zmm3[0]
        temp0_5[0] = temp0_5[0] * temp0_5[0]
        zmm8[0] = zmm8[0] * temp0_5[0]
        temp0_5[0] = temp0_5[0] * (zmm2 - zmm8[0])
        temp0_5[0] = temp0_5[0] + temp0_5[0]
        temp0_5[0] = temp0_5[0] * temp0_5[0]
        zmm8[0] = zmm8[0] * temp0_5[0]
        zmm3[0] = zmm3[0] - zmm8[0]
        temp0_5[0] = temp0_5[0] * zmm3[0]
        temp0_5[0] = temp0_5[0] + temp0_5[0]
        arg_8 = temp0_5[0]
        zmm8[0] = zmm8[0] * temp0_5[0]
        zmm10[0] = zmm10[0] * temp0_5[0]
        zmm12 = zx.o(0)
        zmm1 = zmm10
    else
        zmm8 = data_143dbb1f8
        zmm1 = data_143dbb1fc
else if (0f f!= *(arg1 + 0xcc))
    zmm12 = zx.o(0)
    zmm1 = zmm10
else
    zmm0 = zx.o(*(arg1 + 0xc4))
    zmm12 = *(arg1 + 0xcc)
    var_a8 = zmm0.q
    zmm8 = var_a8.d
    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

zmm7[0] = zmm7[0] + zmm8[0]
zmm11[0] = zmm11[0] + zmm12[0]
zmm6[0] = zmm6[0] + zmm1[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] * 0.5f
zmm12 = zmm6
zmm11[0] = zmm11[0] * zmm11[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm12[0] = zmm12[0] * 0.5f
zmm7[0] = zmm7[0] + zmm6[0]
zmm11[0] = zmm11[0] * 0.5f
zmm7[0] = zmm7[0] + zmm11[0]
zmm7[0] = zmm7[0] * 0.25f
float zmm4_1[0x4]

if (not(zmm7[0] <= 9.99999994e-09f))
    zmm4_1 = 0x3f000000
    zmm3 = zx.o(0)
    zmm3[0] = zmm7[0]
    float temp0_6[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_6[0] = temp0_6[0] * temp0_6[0]
    zmm3[0] = zmm3[0] * temp0_6[0]
    temp0_6[0] = temp0_6[0] * (0.5f - zmm3[0])
    temp0_6[0] = temp0_6[0] + temp0_6[0]
    temp0_6[0] = temp0_6[0] * temp0_6[0]
    zmm3[0] = zmm3[0] * temp0_6[0]
    zmm4_1[0] = 0.5f - zmm3[0]
    temp0_6[0] = temp0_6[0] * zmm4_1[0]
    temp0_6[0] = temp0_6[0] + temp0_6[0]
    arg_8 = temp0_6[0]
    zmm7[0] = zmm7[0] * temp0_6[0]
    zmm12[0] = zmm12[0] * temp0_6[0]
    zmm11[0] = zmm11[0] * temp0_6[0]

arg_8.q = 0
int64_t rbx_1

if (arg5 == 0xffffffff)
    rbx_1 = arg_8.q
else
    rbx_1 = *sub_141f5e650(arg4, &arg_8, arg5)

zmm6 = *(arg1 + 0x21c)

if ((*(arg1 + 0x1f2) & 0x20) != 0)
    int32_t r8
    r8.b = 1
    void* rax_6 = (*(*arg4 + 0x6a8))(arg4, rbx_1, r8)
    
    if (rax_6 != 0)
        zmm13 = sub_142216b90(rax_6)
    
    zmm6[0] = zmm6[0] * zmm13[0]

zmm4_1 = *(arg1 + 0x224)

if (not(zmm4_1[0] > 0f))
    zmm4_1 = 0x7f7fffff

zmm2 = *(arg1 + 0x220)

if (not(zmm2 > 0f))
    zmm2 = -3.40282347e+38f

zmm0 = *(arg1 + 0xc8)
zmm1 = *(arg1 + 0xc4)
zmm1[0] = zmm1[0] * zmm1[0]
zmm0[0] = zmm0[0] * zmm0[0]
zmm1[0] = zmm1[0] + zmm0[0]
float temp0_7[0x4] = _mm_sqrt_ss(0, zmm1[0])
temp0_7[0] = temp0_7[0] * zmm6[0]

if (not(temp0_7[0] < zmm2))
    zmm2 = _mm_min_ss(temp0_7[0], zmm4_1[0])

zmm11[0] = zmm11[0] * zmm2
zmm7[0] = zmm7[0] * zmm2
zmm12[0] = zmm12[0] * zmm2
float var_90_1 = zmm11[0]
int64_t rax_8 = *arg4
var_a8 = (_mm_unpacklo_ps(zmm7, zmm12[0].q)).q
(*(rax_8 + 0x5a0))(arg4, &var_a8, rbx_1, 0, var_a8, var_90_1)
