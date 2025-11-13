// 函数: sub_1424f0bc0
// 地址: 0x1424f0bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint32_t zmm2[0x4] = data_143f65c20
float zmm1[0x4] = zmm2
int128_t var_88 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm1[0].q = zx.o(0) u>> 0x40
float var_98[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
uint32_t var_78[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

float (* rax_3)[0x4] = *(arg2 + 0x38)
float (* rdi)[0x4] = &var_98

if (rax_3 != 0)
    rdi = rax_3

int32_t var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
int32_t var_a4
int32_t var_a0
float temp0_4[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(var_a8, var_a0[0].q), _mm_unpacklo_ps(var_a4, 0)[0].q)
*(arg2 + 0x20) = rsi + rax_5
float zmm6[0x4] = rdi[2]
float temp0_5[0x4] = __subps_xmmps_memps(temp0_4, rdi[1])
float temp0_6[0x4] = __mulps_xmmps_memps(data_143f65bd0, *rdi)
float temp0_7[0x4] = _mm_rcp_ps(zmm6)
float zmm8[0x4] = __andps_xmmxud_memxud(temp0_5, data_143f65be0)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xd2)
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_10)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_9)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
float temp0_16[0x4] = _mm_sub_ps(temp0_14, temp0_12)
float temp0_17[0x4] = _mm_mul_ps(temp0_7, temp0_7)
float temp0_18[0x4] = _mm_add_ps(temp0_7, temp0_7)
float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_16)
float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm6)
float temp0_21[0x4] = _mm_mul_ps(temp0_15, temp0_19)
float temp0_22[0x4] = _mm_sub_ps(temp0_18, temp0_20)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd2), temp0_9)
float temp0_25[0x4] = _mm_add_ps(temp0_21, zmm8)
float temp0_26[0x4] = _mm_mul_ps(temp0_22, temp0_22)
float temp0_27[0x4] = _mm_add_ps(temp0_22, temp0_22)
float temp0_28[0x4] = _mm_mul_ps(temp0_26, zmm6)
float temp0_30[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f65b80), data_143f65bc0, 2)
float temp0_31[0x4] = _mm_sub_ps(temp0_27, temp0_28)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_10)
zmm6 = _mm_and_ps(temp0_30, zx.o(0) ^ temp0_31)
zmm2 = _mm_mul_ps(_mm_add_ps(_mm_sub_ps(zmm2, temp0_33), temp0_25), zmm6 ^ temp0_31)
float result = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
*arg3 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
arg3[1].d = result
__security_check_cookie(rax_1 ^ &var_c8)
return result
