// 函数: sub_140acee10
// 地址: 0x140acee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int32_t zmm4 = (zx.o(0)).d
int128_t zmm7
int128_t var_28 = zmm7
float zmm5 = arg4
int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9
int128_t zmm10 = arg5
float temp0_1[0x4]

if (not(zmm10.d f<= 0f))
    float zmm0[0x4] = arg2[3]
    zmm6 = *arg3
    zmm7 = *(arg3 + 4)
    float zmm2 = *arg2 f- zmm6.d
    zmm8 = *(arg3 + 8)
    arg4 = arg2[1] f- zmm7.d
    zmm9 = *(arg3 + 0xc)
    float zmm1 = arg2[2] f- zmm8.d
    zmm0[0] = zmm0[0] f- zmm9.d
    zmm0[0] = zmm0[0] * zmm0[0]
    temp0_1 = _mm_sqrt_ss(0, arg4 * arg4 + zmm2 * zmm2 + zmm1 * zmm1 + zmm0[0])

if (zmm10.d f<= 0f || temp0_1[0] < 9.99999975e-05f)
    *arg1 = *arg3
else
    zmm5 = zmm5 f* zmm10.d
    
    if (not(zmm5 < 0f))
        zmm4 = __minss_xmmss_memss(zmm5, 0x3f800000)
    
    zmm6.d = zmm6.d f- *arg2
    zmm7.d = zmm7.d f- arg2[1]
    zmm8.d = zmm8.d f- arg2[2]
    zmm9.d = zmm9.d f- arg2[3]
    zmm6.d = zmm6.d f* zmm4
    zmm7.d = zmm7.d f* zmm4
    zmm6.d = zmm6.d f+ *arg2
    zmm8.d = zmm8.d f* zmm4
    zmm7.d = zmm7.d f+ arg2[1]
    zmm9.d = zmm9.d f* zmm4
    zmm8.d = zmm8.d f+ arg2[2]
    *arg1 = zmm6.d
    zmm9.d = zmm9.d f+ arg2[3]
    (*arg1)[1] = zmm7.d
    (*arg1)[2] = zmm8.d
    (*arg1)[3] = zmm9.d

return arg1
