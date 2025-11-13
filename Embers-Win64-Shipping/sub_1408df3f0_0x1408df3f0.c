// 函数: sub_1408df3f0
// 地址: 0x1408df3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg4 + 0x24) = data_14399f668.q
*(arg4 + 0x2c) = data_14399f670
*(arg4 + 0x18) = data_143dbb1f8.q
*(arg4 + 0x20) = data_143dbb200
void* rdx = arg2[2]
void* rcx

if (*(rdx + 0xa4) != 0)
    rcx = arg2[3]

uint128_t zmm0
int64_t zmm1
uint128_t zmm2
float zmm3[0x4]
float zmm4

if (*(rdx + 0xa4) == 0 || *(rcx + 0xa4) == 0 || *(rdx + 8) != *(rdx + 0x58)
        || *(rcx + 8) != *(rcx + 0x58))
    if (data_14399fa50 u> *(arg1 + 0x164))
        zmm3 = zx.o(0)
    else
        zmm3 = 0x3f800000
    
    zmm4 = 1f - zmm3[0]
    zmm2.d = data_14399f668.d f* zmm3[0]
    zmm1.d = data_14399f66c.d f* zmm3[0]
    zmm0.d = data_14399f670.d f* zmm3[0]
else
    zmm0 = *(arg1 + 0x160)
    zmm4 = 1f
    zmm2.d = zmm0.d f* data_14399f668
    zmm1.d = zmm0.q.d f* data_14399f66c
    zmm0.d = zmm0.d f* data_14399f670

*(arg4 + 0x3c) = (_mm_unpacklo_ps(zmm2, zmm1)).q
*(arg4 + 0x44) = zmm0.d
*(arg4 + 0x30) = data_143dbb1f8.q
*(arg4 + 0x38) = data_143dbb200
*(arg4 + 0x48) = zmm4
int64_t rax_9 = (zx.q(arg2[0x12].d) & 1) + 2
uint64_t var_e8 = *(arg4 + 0x18)
uint64_t var_d8 = *(arg4 + 0x24)
zmm0 = zx.o(*(arg4 + 0x30))
*(arg4 + 8) = &arg2[rax_9 * 4]
uint64_t var_c8 = zmm0.q
uint64_t var_b8 = *(arg4 + 0x3c)
int32_t var_ac = (*(arg4 + 0x48)).d
*(arg4 + 0x10) = &arg2[((zx.q(arg2[0x12].d - 1) & 1) + 2) * 4]
int64_t* rcx_1 = data_143f0f180
int32_t var_e0 = *(arg4 + 0x20)
int32_t var_d0 = *(arg4 + 0x2c)
int32_t var_c0 = *(arg4 + 0x38)
int32_t var_b0 = *(arg4 + 0x44)
int32_t var_128 = 1
void* arg_8
(*(*rcx_1 + 0xf8))(rcx_1, &arg_8, &var_e8, &data_143f40e50, 1, 1)
void* rax_23 = arg_8
void* arg_10 = rax_23

if (rax_23 != 0)
    *(rax_23 + 8) += 1

sub_1405d1550(&arg_8)
sub_1405d1600(arg4 + 0x50, &arg_10)
sub_1405d1550(&arg_10)
sub_1420537f0(&arg2[0x27], *(arg4 + 8), *(arg4 + 0x10), arg4 + 8)
int64_t* rdi = arg6
int64_t* rax_24 = arg6[0xd]

if (rax_24 != 0)
    rdi = rax_24

rdi[2] = &arg2[0x23]
arg6[0xf] = &arg2[0x27]
*(arg6 + 0x9b) = 0
zmm3 = *(arg2 + 0x320)
float zmm6[0x4] = *(arg1 + 0x90)
float zmm5[0x4] = *(arg1 + 0x80)
float zmm7[0x4] = *(arg1 + 0xa0)
float zmm8[0x4] = *(arg1 + 0xb0)
zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm2 = _mm_mul_ps(zmm2, zmm5)
float temp0_5[0x4] = _mm_mul_ps(temp0_2, zmm6)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm8)
uint128_t var_a8 =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm2, temp0_5), _mm_mul_ps(temp0_3, zmm7)), temp0_7)
zmm2 = *(arg2 + 0x330)
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_14[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm6)
float temp0_16[0x4] = _mm_mul_ps(temp0_12, zmm5)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
float temp0_22[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_16, temp0_15), _mm_mul_ps(temp0_14, zmm7)), zmm2)
zmm2 = *(arg2 + 0x340)
uint128_t zmm4_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm6)
float temp0_26[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm4_1 = _mm_mul_ps(zmm4_1, zmm5)
float var_98[0x4] = temp0_22
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
zmm4_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm4_1, temp0_25), _mm_mul_ps(temp0_26, zmm7)), zmm2)
zmm2 = *(arg2 + 0x350)
float temp0_34[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_36[0x4] = _mm_mul_ps(temp0_34, zmm5)
float temp0_37[0x4] = _mm_mul_ps(temp0_35, zmm6)
uint128_t var_88 = zmm4_1
bool rax_26 = *(arg1 + 0x32)
float temp0_38[0x4] = _mm_add_ps(temp0_36, temp0_37)
float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm7)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
var_128.q = arg1 + 0xdc
float var_78[0x4] = _mm_add_ps(_mm_add_ps(temp0_38, temp0_40), zmm2)
sub_1422f21f0(arg5, &var_a8, &var_a8, arg1 + 0xc0, 1, 1, 0, rax_26 - 1 u<= 1, 0)
*rdi = *(arg5 + 0x20)
*(arg1 + 0x15d)
*(arg1 + 0x15c)
int512_t zmm1_2
zmm1_2.o = *(arg1 + 0x158)
void* rax_28 = sub_1408e5610(arg2)
rdi[8].d = *arg3
*(rdi + 0x44) = arg3[1]
rdi[0xa].d = 0
int32_t rax_30 = *(rax_28 + 8) - 1
rdi[5] = arg4 + 8
*(rdi + 0x54) = rax_30
int32_t result = *(arg6 + 0x9c) & 0xfffe007e
*(arg6 + 0x9c) = (zx.d(*(arg1 + 0x35)) & 1) | result
return result
