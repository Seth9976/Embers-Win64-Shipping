// 函数: sub_141cec9a0
// 地址: 0x141cec9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
zmm5[0] = zmm5[0] f- *arg1
float zmm6[0x4] = *(arg2 + 4)
zmm6[0] = zmm6[0] f- arg1[1]
int128_t zmm7
zmm7.d = (*(arg2 + 8)).d f- arg1[2]
float zmm8[0x4] = *arg3
zmm8[0] = zmm8[0] f- *arg1
float zmm9[0x4] = *(arg3 + 4)
zmm9[0] = zmm9[0] f- arg1[1]
int128_t zmm10
zmm10.d = (*(arg3 + 8)).d f- arg1[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm6[0] = zmm6[0] + zmm5[0]
int128_t zmm11
int128_t var_68 = zmm11
zmm6[0] = zmm6[0] + zmm7.d f* zmm7.d

if (not(zmm6[0] <= 9.99999994e-09f))
    float zmm3 = zmm6[0]
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3)
    float zmm2[0x4] = 0x3f000000
    zmm3 = zmm3 * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm3 * temp0_1[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    float zmm0[0x4] = 0x3f000000
    float zmm1 = temp0_1[0]
    zmm0[0] = 0.5f - zmm3 * temp0_1[0] * temp0_1[0]
    zmm1 = zmm1 * zmm0[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    temp0_1[0] = temp0_1[0] + zmm1
    zmm9[0] = zmm9[0] + zmm8[0]
    zmm5[0] = zmm5[0] * temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm9[0] = zmm9[0] + zmm10.d f* zmm10.d
    zmm7.d = zmm7.d f* temp0_1[0]
    
    if (not(zmm9[0] <= 9.99999994e-09f))
        zmm2 = 0x3f000000
        zmm3 = zmm9[0]
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm9[0], zmm3)
        zmm3 = zmm3 * 0.5f
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm2[0] = 0.5f - zmm3 * temp0_2[0]
        temp0_2[0] = temp0_2[0] * zmm2[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        zmm11.d = 0.5f - zmm3 * temp0_2[0] * temp0_2[0]
        temp0_2[0] = temp0_2[0] f* zmm11.d
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        zmm0 = 0xbf800000
        zmm8[0] = zmm8[0] * temp0_2[0]
        zmm9[0] = zmm9[0] * temp0_2[0]
        zmm5[0] = zmm5[0] * zmm8[0]
        zmm6[0] = zmm6[0] * zmm9[0]
        zmm10.d = zmm10.d f* temp0_2[0]
        zmm5[0] = zmm5[0] + zmm6[0]
        zmm7.d = zmm7.d f* zmm10.d
        zmm5[0] = zmm5[0] f+ zmm7.d
        
        if (not(zmm5[0] < -1f))
            zmm0 = __minss_xmmss_memss(zmm5[0], 0x3f800000)
        
        return acosf(zmm0[0])

return zx.o(0)
