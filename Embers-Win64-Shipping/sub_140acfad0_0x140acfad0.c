// 函数: sub_140acfad0
// 地址: 0x140acfad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg4 + 4)
float zmm6[0x4] = *(arg4 + 8)
float zmm7[0x4] = *arg4
int128_t* rax = arg5
float zmm13[0x4] = *(arg3 + 4)
zmm2[0] = zmm2[0] - zmm13[0]
int128_t zmm14 = *(arg3 + 8)
float zmm3[0x4] = *(rax + 4)
zmm6[0] = zmm6[0] f- zmm14.d
float zmm1 = *(rax + 8)
zmm3[0] = zmm3[0] - zmm13[0]
float zmm4[0x4] = *rax
zmm1 = zmm1 f- zmm14.d
float zmm8[0x4] = zmm2
float zmm15[0x4] = *arg3
zmm7[0] = zmm7[0] - zmm15[0]
zmm6[0] = zmm6[0] * zmm3[0]
zmm4[0] = zmm4[0] - zmm15[0]
zmm8[0] = zmm8[0] * zmm1
zmm6[0] = zmm6[0] * zmm4[0]
zmm8[0] = zmm8[0] - zmm6[0]
zmm2[0] = zmm2[0] * zmm4[0]
zmm7[0] = zmm7[0] * zmm3[0]
zmm7[0] = zmm7[0] * zmm1
zmm7[0] = zmm7[0] - zmm2[0]
zmm6[0] = zmm6[0] - zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm1 = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] + zmm8[0]
zmm6[0] = zmm6[0] + zmm1

if (zmm6[0] > 9.99999994e-09f)
    float zmm9[0x4]
    float zmm10[0x4]
    float zmm11[0x4]
    
    if (not(zmm6[0] != 1f))
        zmm10 = zmm8
        zmm11 = zmm6
        zmm9 = zmm7
    else if (zmm6[0] >= 9.99999994e-09f)
        zmm10 = zmm8
        zmm11 = zmm6
        zmm2 = 0x3f000000
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
        zmm6[0] = zmm6[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm2[0] = 0.5f - zmm6[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * zmm2[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm6[0] = zmm6[0] * temp0_1[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * (0.5f - zmm6[0])
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm9 = temp0_1
        arg5.d = temp0_1[0]
        zmm9[0] = zmm9[0] * zmm7[0]
        zmm10[0] = zmm10[0] * temp0_1[0]
        zmm11[0] = zmm11[0] * temp0_1[0]
    else
        zmm10 = data_143dbb1f8
        zmm11 = data_143dbb1fc
        zmm9 = data_143dbb200
    
    zmm1 = *(arg2 + 8)
    zmm2 = *(arg2 + 4)
    zmm14.d = zmm14.d f- zmm1
    zmm3 = *arg2
    zmm13[0] = zmm13[0] - zmm2[0]
    zmm4 = *(arg4 + 4)
    zmm15[0] = zmm15[0] - zmm3[0]
    zmm6[0] = zmm6[0] * zmm11[0]
    zmm4[0] = zmm4[0] - zmm2[0]
    zmm8[0] = zmm8[0] * zmm10[0]
    zmm9[0] = zmm9[0] * zmm7[0]
    zmm7 = *arg4
    zmm6[0] = zmm6[0] + zmm8[0]
    zmm8 = *rax
    zmm7[0] = zmm7[0] - zmm3[0]
    float arg_20 = zmm4[0]
    zmm8[0] = zmm8[0] - zmm3[0]
    zmm6[0] = zmm6[0] + zmm9[0]
    float zmm0[0x4] = *(rax + 4)
    zmm0[0] = zmm0[0] - zmm2[0]
    float zmm5 = 1f / zmm6[0]
    zmm6 = *(arg4 + 8)
    arg5.d = zmm0[0]
    zmm6[0] = zmm6[0] - zmm1
    zmm0 = *(rax + 8)
    zmm0[0] = zmm0[0] - zmm1
    zmm1 = zmm14.d
    zmm14.d = zmm14.d f* zmm8[0]
    zmm4[0] = zmm4[0] * zmm0[0]
    float arg_18 = zmm0[0]
    zmm6[0] = zmm6[0] f* arg5.d
    zmm6[0] = zmm6[0] * zmm8[0]
    zmm4[0] = zmm4[0] - zmm6[0]
    zmm7[0] = zmm7[0] * arg_18
    zmm6[0] = zmm6[0] - zmm7[0]
    zmm4[0] = zmm4[0] * zmm10[0]
    zmm0 = arg_20
    zmm0[0] = zmm0[0] * zmm8[0]
    zmm6[0] = zmm6[0] * zmm11[0]
    zmm4[0] = zmm4[0] + zmm6[0]
    zmm6 = arg5.d
    zmm1 = zmm1 * zmm6[0]
    zmm7[0] = zmm7[0] * zmm6[0]
    zmm7[0] = zmm7[0] - zmm0[0]
    zmm13[0] = zmm13[0] * arg_18
    zmm13[0] = zmm13[0] * zmm8[0]
    zmm1 = zmm1 - zmm13[0]
    zmm7[0] = zmm7[0] * zmm9[0]
    zmm15[0] = zmm15[0] * zmm6[0]
    zmm15[0] = zmm15[0] * arg_18
    zmm4[0] = zmm4[0] + zmm7[0]
    zmm1 = zmm1 * zmm10[0]
    zmm13[0] = zmm13[0] - zmm15[0]
    zmm15[0] = zmm15[0] f- zmm14.d
    zmm4[0] = zmm4[0] * zmm5
    zmm13[0] = zmm13[0] * zmm9[0]
    int128_t zmm12
    zmm12.d = 1f - zmm4[0]
    zmm15[0] = zmm15[0] * zmm11[0]
    *arg1 = zmm4[0]
    zmm1 = (zmm1 + zmm15[0] + zmm13[0]) * zmm5
    zmm12.d = zmm12.d f- zmm1
    arg1[1] = zmm1
    arg1[2] = zmm12.d
else
    *arg1 = 0
    arg1[2] = 0

return arg1
