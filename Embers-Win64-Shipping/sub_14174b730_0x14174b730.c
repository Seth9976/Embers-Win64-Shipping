// 函数: sub_14174b730
// 地址: 0x14174b730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4]
float var_38[0x4] = zmm8
int128_t zmm9
int128_t var_48 = zmm9
int128_t zmm10
int128_t var_58 = zmm10
int128_t zmm11 = arg4
int128_t zmm12 = arg5
*arg9 = 0xffffffff
float zmm5[0x4] = *(arg1 + 0x10)
arg4 = *(arg1 + 0x14)
zmm5[0] = zmm5[0] f- *arg2
arg4.d = arg4.d f- arg2[1]
float zmm4[0x4] = *(arg1 + 0x18)
zmm4[0] = zmm4[0] f- arg2[2]
int128_t zmm7
zmm7.d = zmm12.d f+ *(arg1 + 0x1c)
zmm5[0] = zmm5[0] * zmm5[0]
int128_t zmm6
zmm6.d = zmm7.d f* zmm7.d
float zmm2 = arg4.d f* arg4.d + zmm5[0] + zmm4[0] * zmm4[0]
int32_t* result

if (zmm2 f>= zmm6.d)
    zmm9 = *(arg3 + 4)
    zmm8 = *arg3
    zmm10 = *(arg3 + 8)
    zmm5[0] = zmm5[0] * zmm8[0]
    arg4.d = arg4.d f* zmm9.d
    zmm4[0] = zmm4[0] f* zmm10.d
    zmm5[0] = zmm5[0] f+ arg4.d
    zmm5[0] = zmm5[0] + zmm4[0]
    zmm5 ^= 0x80000000
    float zmm0[0x4] = zmm5
    zmm0[0] = zmm0[0] * zmm5[0]
    zmm0[0] = zmm0[0] - (zmm2 f- zmm6.d)
    
    if (not(zmm0[0] < 0f))
        zmm5 ^= 0x80000000
        
        if (not(zmm0[0] < 9.99999975e-05f))
            float temp0_1[0x4] = _mm_sqrt_ss(zmm0[0], zmm0[0])
            zmm5[0] = zmm5[0] - temp0_1[0]
    
    if (zmm0[0] < 0f || zmm5[0] < 0f || zmm5[0] f> zmm11.d)
        result.b = 0
    else
        zmm0 = 0x3f800000
        zmm0[0] = 1f f/ zmm7.d
        zmm8[0] = zmm8[0] * zmm5[0]
        zmm9.d = zmm9.d f* zmm5[0]
        zmm8[0] = zmm8[0] f+ *arg2
        zmm10.d = zmm10.d f* zmm5[0]
        zmm9.d = zmm9.d f+ arg2[1]
        zmm10.d = zmm10.d f+ arg2[2]
        zmm8[0] = zmm8[0] f- *(arg1 + 0x10)
        arg4.d = zmm9.d f- *(arg1 + 0x14)
        zmm2 = zmm10.d f- *(arg1 + 0x18)
        *arg6 = zmm5[0]
        arg4.d = arg4.d f* zmm0[0]
        zmm2 = zmm2 * zmm0[0]
        zmm8[0] = zmm8[0] * zmm0[0]
        zmm8[0] = zmm8[0] f* zmm12.d
        zmm9.d = zmm9.d f- arg4.d f* zmm12.d
        zmm10.d = zmm10.d f- zmm2 f* zmm12.d
        zmm8[0] = zmm8[0] - zmm8[0]
        *arg7 = (_mm_unpacklo_ps(zmm8, zmm9.q)).q
        arg7[1].d = zmm10.d
        *arg8 = (_mm_unpacklo_ps(zmm8, arg4.q)).q
        float var_80_1
        arg8[1].d = var_80_1
        result.b = 1
else
    *arg6 = 0
    result.b = 1

return result
