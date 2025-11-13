// 函数: sub_141ee9460
// 地址: 0x141ee9460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = arg5
int32_t rax = arg3[1].d
*arg2 = *arg3
arg2[1].d = rax

if (zmm2.d f<= 0f)
    return arg2

int64_t rax_1 = *arg1
uint128_t zmm0
zmm0.d = zmm2.d f* *arg4
float zmm1 = zmm2.d f* arg4[1]
zmm2.d = zmm2.d f* arg4[2]
zmm0.d = zmm0.d f+ *arg2
zmm1 = zmm1 f+ *(arg2 + 4)
zmm2.d = zmm2.d f+ arg2[1].d
*arg2 = zmm0.d
*(arg2 + 4) = zmm1
arg2[1].d = zmm2.d
void* rax_2 = (*(rax_1 + 0x430))()
uint128_t zmm10 = *(arg2 + 4)
uint128_t zmm9 = *arg2
int128_t zmm11 = arg2[1].d
uint32_t temp0[0x4] = __andps_xmmxud_memxud(*(rax_2 + 0x258), data_142d3f770)
zmm0.d = zmm9.d f* zmm9.d
zmm2.d = zmm10.d f* zmm10.d
zmm2.d = zmm2.d f+ zmm0.d
zmm0.d = temp0.d f* temp0[0]
zmm2.d = zmm2.d f+ zmm11.d f* zmm11.d

if (zmm2.d f<= zmm0.d)
    return arg2

uint128_t zmm6 = arg4[2]
uint128_t zmm7 = *arg4
uint128_t zmm12 = arg4[1]
zmm2.d = zmm7.d f* zmm7.d
zmm0.d = zmm12.d f* zmm12.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm6.d f* zmm6.d
uint128_t zmm3

if (not(zmm2.d f!= 1f))
    zmm0 = zx.o(*arg4)
    zmm6 = arg4[2]
    zmm7 = zmm0.d
    zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm2.d f>= 9.99999994e-09f)
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
    zmm3.d = zmm2.d f* 0.5f
    zmm0.d = temp0_2.d f* temp0_2[0]
    zmm2.d = 0.5f - zmm3.d f* zmm0.d
    zmm0.d = temp0_2.d f* zmm2.d
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm3.d = zmm3.d f* temp0_2[0] * temp0_2[0]
    zmm0.d = temp0_2.d f* (0.5f f- zmm3.d)
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm12.d = zmm12.d f* temp0_2[0]
    zmm7.d = zmm7.d f* temp0_2[0]
    zmm3 = zmm12
    zmm6.d = zmm6.d f* temp0_2[0]
else
    zmm7 = data_143dbb1f8
    zmm3 = data_143dbb1fc
    zmm6 = data_143dbb200

zmm2.d = zmm10.d f* zmm3.d
zmm0.d = zmm9.d f* zmm7.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm11.d f* zmm6.d

if (not(zmm2.d f<= temp0[0]))
    zmm0.d = zmm9.d f- data_143dbb1f8
    zmm2.d = zmm10.d f- data_143dbb1fc
    zmm0.d = zmm0.d f* zmm7.d
    zmm2.d = zmm2.d f* zmm3.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ (zmm11.d f- data_143dbb200) f* zmm6.d
    zmm0.d = zmm2.d f* zmm7.d
    zmm7.d = zmm7.d f* temp0[0]
    zmm9.d = zmm9.d f- zmm0.d
    zmm0.d = zmm3.d f* zmm2.d
    zmm3.d = zmm3.d f* temp0[0]
    zmm10.d = zmm10.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm2.d
    zmm9.d = zmm9.d f+ zmm7.d
    zmm6.d = zmm6.d f* temp0[0]
    zmm11.d = zmm11.d f- zmm0.d
    zmm10.d = zmm10.d f+ zmm3.d
    zmm11.d = zmm11.d f+ zmm6.d
    *arg2 = (_mm_unpacklo_ps(zmm9, zmm10.q)).q
    arg2[1].d = zmm11.d

return arg2
