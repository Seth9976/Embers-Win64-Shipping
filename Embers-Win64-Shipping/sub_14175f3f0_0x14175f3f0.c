// 函数: sub_14175f3f0
// 地址: 0x14175f3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = nullptr

if (*(arg1 + 0xc) u>= 1)
    r10 = arg1

uint128_t zmm0

if (r10 == 0)
    zmm0 = data_142d3f660
else
    zmm0 = *(*(*r10 + 0x218) + sx.q(r10[1].d) * 0x10)

uint128_t zmm4 = *arg3
float zmm5[0x4] = zmm0.d ^ 0x80000000
float zmm1[0x4] = zmm0:4.d ^ 0x80000000
float zmm3 = zmm0:0xc.d
float zmm2[0x4] = zmm0:8.d ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0)
temp0[0] = zmm1[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_2[0] = zmm2[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_3[0] = zmm3
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x1b), zmm0)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x4e)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), temp0_4)
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_6, data_143ef7c70)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xb1)
float temp0_12[0x4] = _mm_add_ps(temp0_10, zmm0)
float temp0_14[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm4, zmm4, 0x55))
float temp0_16[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143ef7c60)
float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, data_143ef7c50)
float temp0_20[0x4] = _mm_add_ps(_mm_add_ps(temp0_12, temp0_17), temp0_18)
temp0_4[0] = temp0_20[0]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xff)
temp0_4[1] = temp0_21[0]
temp0_4[2] = temp0_22[0]
temp0_4[3] = temp0_23[0]
uint128_t var_98
uint128_t zmm6
uint128_t zmm7
int128_t zmm9

if (r10 == 0)
    zmm7 = zx.o(0)
    zmm9 = zx.o(0)
    zmm6 = zx.o(0)
else
    int64_t rdx = sx.q(r10[1].d) * 3
    int64_t rcx_1 = *(*r10 + 0x200)
    zmm0 = zx.o(*(rcx_1 + (rdx << 2)))
    var_98:8.d = *(rcx_1 + (rdx << 2) + 8)
    zmm7 = var_98:8.d
    var_98.q = zmm0.q
    zmm9 = var_98.d
    zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

int64_t* arg_8 = arg1
zmm0.d = temp0_22.d f* zmm6.d
zmm3 = temp0_20[0] f* zmm6.d
zmm4.d = temp0_22.d f* zmm9.d
temp0_21[0] = temp0_21[0] f* zmm7.d
temp0_21[0] = temp0_21[0] f- zmm0.d
zmm0.d = temp0_20.d f* zmm7.d
zmm4.d = zmm4.d f- zmm0.d
zmm0.d = temp0_21.d f* zmm9.d
temp0_21[0] = temp0_21[0] + temp0_21[0]
zmm3 = zmm3 f- zmm0.d
temp0_23[0] = temp0_23[0] * temp0_21[0]
zmm4.d = zmm4.d f+ zmm4.d
temp0_22[0] = temp0_22[0] * temp0_21[0]
temp0_23[0] = temp0_23[0] f+ zmm9.d
temp0_21[0] = temp0_21[0] * temp0_21[0]
zmm0.d = temp0_22.d f* zmm4.d
zmm3 = zmm3 + zmm3
temp0_21[0] = temp0_21[0] * zmm3
temp0_21[0] = temp0_21[0] f- zmm0.d
zmm0.d = temp0_20.d f* zmm3
temp0_20[0] = temp0_20[0] f* zmm4.d
temp0_21[0] = temp0_21[0] + temp0_23[0]
temp0_22[0] = temp0_22[0] f- zmm0.d
temp0_23[0] = temp0_23[0] * zmm3
zmm0 = *(arg2 + 8)
temp0_20[0] = temp0_20[0] - temp0_21[0]
temp0_23[0] = temp0_23[0] f* zmm4.d
temp0_23[0] = temp0_23[0] f+ zmm7.d
zmm7.d = (*arg2).d f- temp0_21[0]
temp0_23[0] = temp0_23[0] f+ zmm6.d
zmm6 = *(arg2 + 4)
temp0_20[0] = temp0_20[0] + temp0_23[0]
temp0_22[0] = temp0_22[0] + temp0_23[0]
zmm0.d = zmm0.d f- temp0_20[0]
zmm6.d = zmm6.d f- temp0_22[0]
var_98:8.d = zmm0.d
uint64_t* rax_5 = sub_141746340(&arg_8)
zmm0 = _mm_unpacklo_ps(zmm7, zmm6.q)
arg_8 = arg1
*rax_5 = zmm0.q
rax_5[1].d = var_98:8.d
uint128_t* result = sub_141749180(&arg_8)
*result = temp0_4
return result
