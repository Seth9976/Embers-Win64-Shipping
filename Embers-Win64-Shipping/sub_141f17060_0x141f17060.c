// 函数: sub_141f17060
// 地址: 0x141f17060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*arg3 & 2) == 0)
    *arg2 = data_143dbb1f8.q
    arg2[1].d = data_143dbb200
    return arg2

uint128_t zmm2 = *(arg3 + 0x58)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(data_143a2d740, data_142d3f770)

if (not(zmm2.d f> 0f))
    zmm2 = 0x3e000000

zmm2.d = zmm2.d f+ temp0[0]
uint128_t zmm0 = zmm2
uint32_t zmm1[0x4] = zmm2
zmm2.d = zmm2.d f* *(arg3 + 0x30)
zmm0.d = zmm0.d f* *(arg3 + 0x28)
zmm1[0] = zmm1[0] f* *(arg3 + 0x2c)
int32_t var_20 = zmm2.d
int64_t rax_3 = *arg1
zmm0 = _mm_unpacklo_ps(zmm0, zmm1[0].q)
uint64_t var_28 = zmm0.q
(*(rax_3 + 0x4e0))(zmm0, arg2, &var_28)
return arg2
