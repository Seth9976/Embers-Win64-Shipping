// 函数: sub_1427af560
// 地址: 0x1427af560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg4 + 4)
float zmm3[0x4] = *arg1
float zmm4[0x4] = *(arg1 + 4)
int64_t zmm1 = *(arg4 + 8)
zmm3[0] = zmm3[0] f- *arg3
zmm4[0] = zmm4[0] f- arg3[1]
float zmm6[0x4] = *arg4
float zmm2[0x4] = zmm3
int128_t zmm7
zmm7.d = (*(arg1 + 8)).d f- arg3[2]
float zmm9[0x4] = *arg2
zmm6[0] = zmm6[0] * zmm9[0]
int128_t zmm10 = *(arg2 + 4)
zmm0[0] = zmm0[0] f* zmm10.d
zmm2[0] = zmm2[0] * zmm9[0]
zmm6[0] = zmm6[0] + zmm0[0]
int128_t zmm11 = *(arg2 + 8)
zmm1.d = zmm1.d f* zmm11.d
zmm4[0] = zmm4[0] f* zmm10.d
zmm6[0] = zmm6[0] f+ zmm1.d
zmm1.d = zmm7.q.d f* zmm11.d
zmm2[0] = zmm2[0] + zmm4[0]
zmm6 ^= 0x80000000
zmm6[0] = zmm6[0] * zmm6[0]
zmm2[0] = zmm2[0] f+ zmm1.d
uint32_t zmm8[0x4] = 0x3f800000
zmm8[0] = 1f - zmm6[0]
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm8, data_142d3f770)

if (not(temp0[0] f< 9.99999994e-09f))
    zmm4[0] = zmm4[0] f* *(arg4 + 4)
    zmm3[0] = zmm3[0] f* *arg4
    zmm7.d = zmm7.d f* *(arg4 + 8)
    zmm3[0] = zmm3[0] + zmm4[0]
    zmm4 = zmm2
    zmm4[0] = zmm4[0] * zmm6[0]
    zmm3[0] = zmm3[0] f+ zmm7.d
    zmm3 ^= 0x80000000
    zmm4[0] = zmm4[0] - zmm3[0]

if (temp0[0] f< 9.99999994e-09f || zmm4[0] < 0f)
    zmm4 = zx.o(0)
    zmm3 = zmm2 ^ 0x80000000
else
    zmm1.d = 1f f/ temp0[0]
    zmm3[0] = zmm3[0] * zmm6[0]
    zmm4[0] = zmm4[0] f* zmm1.d
    zmm3[0] = zmm3[0] - zmm2[0]
    zmm3[0] = zmm3[0] f* zmm1.d

zmm1 = zmm4[0].q
zmm9[0] = zmm9[0] * zmm3[0]
zmm10.d = zmm10.d f* zmm3[0]
zmm9[0] = zmm9[0] f+ *arg1
zmm11.d = zmm11.d f* zmm3[0]
zmm10.d = zmm10.d f+ *(arg1 + 4)
zmm11.d = zmm11.d f+ *(arg1 + 8)
*arg5 = (_mm_unpacklo_ps(zmm9, zmm10.q)).q
arg5[1].d = zmm11.d
zmm4[0] = zmm4[0] f* *(arg4 + 8)
zmm4[0] = zmm4[0] f* *arg4
zmm4[0] = zmm4[0] f+ arg3[2]
zmm1.d = zmm1.d f* *(arg4 + 4)
zmm4[0] = zmm4[0] f+ *arg3
zmm1.d = zmm1.d f+ arg3[1]
float var_70_1 = zmm4[0]
*arg7 = (_mm_unpacklo_ps(zmm4, zmm1)).q
arg7[1].d = var_70_1
*arg6 = zmm3[0]
*arg8 = zmm4[0]
return arg8
