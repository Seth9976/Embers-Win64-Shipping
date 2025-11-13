// 函数: sub_141eafcf0
// 地址: 0x141eafcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *arg9
float zmm7[0x4] = *(arg9 + 4)
zmm6[0] = zmm6[0] f- *arg8
zmm7[0] = zmm7[0] f- arg8[1]
int128_t zmm8
zmm8.d = (*(arg9 + 8)).d f- arg8[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] + zmm8.d f* zmm8.d

if (zmm7[0] == 1f)
    goto label_141eafe11

float var_48

if (zmm7[0] >= 9.99999994e-09f)
    uint128_t zmm3 = zmm7
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3.d)
    float zmm2[0x4] = 0x3f000000
    zmm3.d = zmm3.d f* 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm3.d * temp0_1[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm3.d = zmm3.d f* temp0_1[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f f- zmm3.d)
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm8.d = zmm8.d f* temp0_1[0]
label_141eafe11:
    int32_t var_40_1 = zmm8.d
    float var_44_1 = zmm7[0]
    var_48 = zmm6[0]
else
    float zmm1 = data_143dbb1fc
    var_48 = data_143dbb1f8[0]
    float var_40 = data_143dbb200[0]
    float var_44 = zmm1

if (not(0f f>= *(arg4 + 0x34)))
    arg4[2].d = sub_1417c9220(arg4, &var_48)

int32_t result = sub_141ebeee0(arg2, arg4, arg7, arg5, arg6, arg8, arg9, arg10, arg11, arg12, arg13)
*arg1 = result == 0
return result
