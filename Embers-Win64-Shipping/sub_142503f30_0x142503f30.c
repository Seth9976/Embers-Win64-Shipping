// 函数: sub_142503f30
// 地址: 0x142503f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint32_t zmm3[0x4] = data_143f65c20
float zmm1[0x4] = zmm3
int128_t var_58 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f65be0)
zmm1[0].q = zx.o(0) u>> 0x40
float var_68[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
uint32_t var_48[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

float (* rax_3)[0x4] = *(arg2 + 0x38)
float (* rdi)[0x4] = &var_68

if (rax_3 != 0)
    rdi = rax_3

int32_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
int32_t var_74
int32_t var_70
float temp0_4[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(var_78, var_70[0].q), _mm_unpacklo_ps(var_74, 0)[0].q)
*(arg2 + 0x20) = rsi + rax_5
float temp0_5[0x4] = __mulps_xmmps_memps(temp0_4, rdi[2])
float zmm5[0x4] = *rdi
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_7)
float temp0_12[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_13[0x4] = _mm_sub_ps(temp0_11, temp0_9)
float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_13)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, temp0_14)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), temp0_6)
zmm3 = _mm_shuffle_ps(temp0_14, temp0_14, 0xd2)
float temp0_19[0x4] = _mm_add_ps(temp0_15, temp0_5)
zmm3 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, temp0_7), temp0_17), temp0_19), 
    rdi[1])
float result = _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
*arg3 = (_mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55)[0].q)).q
arg3[1].d = result
__security_check_cookie(rax_1 ^ &var_98)
return result
