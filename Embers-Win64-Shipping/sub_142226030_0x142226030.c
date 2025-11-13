// 函数: sub_142226030
// 地址: 0x142226030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm1[0x4] = *(arg2 + 0xc)
zmm1[0] = zmm1[0] f- *(arg4 + 0xc)
float zmm5 = *(arg1 + 0x10) f- *(arg3 + 0x10)
int128_t zmm6
zmm6.d = (*(arg1 + 0x14)).d f- *(arg3 + 0x14)
int128_t zmm7
zmm7.d = (*(arg1 + 0x18)).d f- *(arg3 + 0x18)

if (zmm1[0] f!= 0f)
    zmm1 = __andps_xmmxud_memxud(zmm1, data_142d3f770)
else
    zmm1 = 0x3b51b717

uint32_t zmm4[0x4] = 0x3f800000
float zmm0[0x4] = arg5
zmm4[0] = 1f f/ zmm1[0]
int32_t zmm2 = float.s(*(arg6 + 0x18))
float zmm3[0x4] = zmm4
zmm3[0] = zmm3[0] * zmm5
zmm4[0] = zmm4[0] f* zmm6.d
zmm4[0] = zmm4[0] f* zmm7.d
zmm3[0] = zmm3[0] * zmm0[0]
zmm4[0] = zmm4[0] f* zmm0[0]
zmm4[0] = zmm4[0] f* zmm0[0]
zmm3[0] = zmm3[0] f/ zmm2
zmm4[0] = zmm4[0] f/ zmm2
zmm4[0] = zmm4[0] f/ zmm2
float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, zmm4[0].q)
uint32_t result = zmm4[0]
*(arg6 + 0x28) = temp0_2.q
*(arg6 + 0x30) = result
return result
