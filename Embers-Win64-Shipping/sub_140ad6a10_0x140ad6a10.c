// 函数: sub_140ad6a10
// 地址: 0x140ad6a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = arg6
*arg1 = _mm_min_ss(arg3[0], zmm10[0])[0]
*arg2 = _mm_max_ss(arg3[0], zmm10[0])[0]

if (arg9 == 0)
    return 

arg3[0] = arg3[0] * 6f
zmm10[0] = zmm10[0] * 6f
float zmm7[0x4] = arg8
int128_t zmm12 = arg5
zmm7[0] = zmm7[0] f- zmm12.d
arg4[0] = arg4[0] * zmm7[0]
zmm7[0] = zmm7[0] f* arg7
arg4[0] = arg4[0] * 4f
arg4[0] = arg4[0] + zmm7[0]
arg9.d = zmm7[0]
zmm7[0] = zmm7[0] + zmm7[0]
arg4[0] = arg4[0] + arg3[0]
arg4[0] = arg4[0] * 3f
arg4[0] = arg4[0] + zmm7[0]
arg4[0] = arg4[0] + arg3[0]
arg4[0] = arg4[0] - zmm10[0]
zmm10[0] = zmm10[0] - arg4[0]
arg4[0] = arg4[0] * 4f
zmm10[0] = zmm10[0] * zmm10[0]
arg4[0] = arg4[0] * arg4[0]
zmm10[0] = zmm10[0] - arg4[0]

if (zmm10[0] <= 0f || __andps_xmmxud_memxud(arg4, data_142d3f770)[0] <= 9.99999994e-09f)
    return 

float temp0_3[0x4] = _mm_sqrt_ss(0, zmm10[0])
int128_t zmm11
zmm11.d = 0.5f / arg4[0]
temp0_3[0] = temp0_3[0] - zmm10[0]
temp0_3[0] = temp0_3[0] f* zmm11.d
zmm7[0] = zmm7[0] * temp0_3[0]
zmm7[0] = zmm7[0] f+ zmm12.d
float zmm0[0x4]
float zmm8[0x4]

if (zmm7[0] f<= zmm12.d || zmm7[0] f>= arg8)
    zmm8 = zmm7
else
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    temp0_3[0] = temp0_3[0] * 3f
    temp0_3[0] = temp0_3[0] - temp0_3[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    temp0_3[0] = temp0_3[0] - temp0_3[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    zmm8 = arg9.d
    temp0_3[0] = temp0_3[0] - temp0_3[0]
    temp0_3[0] = temp0_3[0] * zmm8[0]
    temp0_3[0] = temp0_3[0] - temp0_3[0]
    temp0_3[0] = temp0_3[0] * arg4[0]
    temp0_3[0] = temp0_3[0] + 1f
    temp0_3[0] = temp0_3[0] * zmm10[0]
    temp0_3[0] = temp0_3[0] * arg3[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    zmm0 = *arg1
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    *arg1 = _mm_min_ss(zmm0[0], temp0_3[0])[0]
    *arg2 = __maxss_xmmss_memss(temp0_3[0], *arg2)[0]

float zmm6[0x4] = zmm10 ^ data_142d3f780
zmm6[0] = zmm6[0] - temp0_3[0]
zmm6[0] = zmm6[0] f* zmm11.d
zmm7[0] = zmm7[0] * zmm6[0]
zmm7[0] = zmm7[0] f+ zmm12.d

if (zmm7[0] f<= zmm12.d || zmm7[0] f>= arg8)
    return 

zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] + zmm6[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] * 3f
zmm6[0] = zmm6[0] - zmm6[0]
zmm6[0] = zmm6[0] + zmm6[0]
zmm6[0] = zmm6[0] - zmm6[0]
zmm6[0] = zmm6[0] + zmm6[0]
zmm6[0] = zmm6[0] - zmm6[0]
zmm6[0] = zmm6[0] * zmm8[0]
zmm6[0] = zmm6[0] - zmm6[0]
zmm6[0] = zmm6[0] * arg4[0]
zmm6[0] = zmm6[0] + 1f
zmm6[0] = zmm6[0] * zmm10[0]
zmm6[0] = zmm6[0] * arg3[0]
zmm6[0] = zmm6[0] + zmm6[0]
zmm0 = *arg1
zmm6[0] = zmm6[0] + zmm6[0]
zmm6[0] = zmm6[0] + zmm6[0]
*arg1 = _mm_min_ss(zmm0[0], zmm6[0])[0]
*arg2 = __maxss_xmmss_memss(zmm6[0], *arg2)[0]
