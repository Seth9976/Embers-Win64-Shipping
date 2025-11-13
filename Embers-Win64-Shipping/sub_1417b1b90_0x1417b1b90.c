// 函数: sub_1417b1b90
// 地址: 0x1417b1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void** var_128
sub_1417048d0(&var_128, 3, 0)
bool cond:0 = *(arg1 + 0x70) == 0
int32_t rax_2 = arg2[1].d
void*** var_e8
int64_t* rcx_1 = &var_e8
int64_t zmm0 = *arg2
int128_t zmm6 = data_142d3f660
float zmm5[0x4] = data_14399f668
float zmm2[0x4] = data_14399f66c
int32_t var_110 = rax_2
int32_t var_100 = rax_2
void*** var_f8 = &var_128
int128_t var_98
int128_t* var_f0 = &var_98
var_e8 = &var_128
float temp0[0x4] = _mm_unpacklo_ps(zmm2, 0)
int64_t var_118 = zmm0
int32_t var_140
int32_t* var_e0 = &var_140
float temp0_1[0x4] = _mm_unpacklo_ps(zmm5, data_14399f670)
zmm0 = *arg2
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
int128_t var_68
int128_t* var_d8 = &var_68
int64_t var_108 = zmm0
int32_t var_138
int32_t* var_c8 = &var_138
int32_t var_148 = 0x7f7fffff
void**** var_c0 = &var_f8
int64_t temp0_3 = _mm_shuffle_ps(zx.o(0), zx.o(0), 0xaa)
float temp0_4[0x4] = _mm_shuffle_ps(zx.o(0), zx.o(0), 0x55)
int32_t* var_b8 = &var_148
float temp0_7[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zx.o(0), temp0_3), _mm_unpacklo_ps(temp0_4, 0)[0].q)
int64_t* var_b0 = &var_108
var_128 = &data_142fc46f0
int32_t var_10c = 0
var_68 = zmm6
int128_t var_58 = zx.o(0)
float var_48[0x4] = temp0_2
var_138 = 0x3f800000
int32_t var_134 = 0x3f800000
int32_t var_130 = 0x3f800000
var_140 = 0
var_98 = zmm6
float var_88[0x4] = temp0_7
float var_78[0x4] = temp0_2
void* var_d0 = arg1
int64_t r8
int64_t var_a8 = r8

if (cond:0)
    sub_141784f30(rcx_1, arg1 + 0x60)
else
    sub_1417897b0(rcx_1, arg1 + 0x50)

int128_t zmm6_1 = var_148
var_128 = &data_142fc46f0
sub_141706890(&var_128)
int512_t result
result.o = zmm6_1
__security_check_cookie(rax_1 ^ &var_168)
return result
