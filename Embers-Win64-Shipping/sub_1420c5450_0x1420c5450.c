// 函数: sub_1420c5450
// 地址: 0x1420c5450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm5 = *arg1
uint128_t zmm1 = zx.o(*arg2)
float zmm2[0x4] = *(arg1 + 4)
float zmm8[0x4] = *(arg1 + 8)
float zmm0 = zmm8[0]
float zmm9[0x4] = 0xbf800000
float rax = arg2[1].d
uint128_t zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm2[0] = zmm2[0] * rax
zmm1 = zmm1.d
zmm2[0] = zmm2[0] - zmm0 f* zmm4.d
zmm8[0] = zmm8[0] f* zmm1.d
zmm2[0] = zmm2[0] f* zmm1.d
zmm0 = zmm5.d * rax
zmm5.d = zmm5.d f* zmm4.d
zmm8[0] = zmm8[0] - zmm0
zmm2[0] = zmm2[0] * rax
zmm5.d = zmm5.d f- zmm2[0]
zmm0 = zmm8[0]
float zmm11[0x4] = zmm8
zmm8[0] = zmm8[0] f* arg3[1]
int128_t zmm10
zmm10.d = zmm5.d f* zmm4.d
zmm11[0] = zmm11[0] f* zmm1.d
zmm10.d = zmm10.d f- zmm0 * rax
zmm0 = zmm5.d
zmm5.d = zmm5.d f* arg3[2]
zmm2[0] = zmm2[0] - zmm0 f* zmm1.d
zmm0 = zmm2[0]
zmm2[0] = zmm2[0] f* *arg3
zmm8[0] = zmm8[0] + zmm2[0]
zmm11[0] = zmm11[0] - zmm0 f* zmm4.d
zmm8[0] = zmm8[0] f+ zmm5.d

if (zmm8[0] >= -1f)
    zmm8 = __minss_xmmss_memss(zmm8[0], 0x3f800000)
else
    zmm8 = 0xbf800000

float zmm6[0x4] = 0x42b40000
zmm1.d = 90f - acosf(zmm8[0]) * 57.2957764f
*arg4 = zmm1.d
zmm2[0] = zmm2[0] f* arg3[1]
zmm10.d = zmm10.d f* *arg3
zmm11[0] = zmm11[0] f* arg3[2]
zmm2[0] = zmm2[0] f+ zmm10.d
zmm2[0] = zmm2[0] + zmm11[0]

if (not(zmm2[0] < -1f))
    zmm9 = __minss_xmmss_memss(zmm2[0], 0x3f800000)

float result = acosf(zmm9[0]) * 57.2957764f
zmm6[0] = 90f - result
*arg5 = zmm6[0]
return result
