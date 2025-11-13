// 函数: sub_1417b5f70
// 地址: 0x1417b5f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
float var_108 = arg5
uint128_t zmm6 = zx.o(*arg12)
int32_t rax_3 = arg12[1].d
uint128_t zmm3
zmm3.d = zmm6.d f* *arg4
int128_t zmm5
zmm5.d = rax_3.d f* arg4[2]
int32_t var_110 = arg10.d
uint64_t var_128 = zmm6.q
float zmm4[0x4] = var_128:4.d
zmm4[0] = zmm4[0] f* arg4[1]
char var_130 = arg11
uint128_t zmm0
zmm0.d = zmm3.d f* zmm3.d
uint128_t zmm2
zmm2.d = zmm4.d f* zmm4[0]
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm5.d f* zmm5.d
float temp0 = _mm_sqrt_ss(0, zmm2.d)
uint64_t var_100

if (not(temp0 <= 1.17549435e-38f))
    zmm0.d = 1f / temp0
    zmm5.d = zmm5.d f* zmm0.d
    zmm3.d = zmm3.d f* zmm0.d
    zmm4[0] = zmm4[0] f* zmm0.d
    int32_t var_e8_1 = zmm5.d
    var_100 = (_mm_unpacklo_ps(zmm3, zmm4[0].q)).q
    int32_t var_f8_1 = var_e8_1

bool cond:0 = *(arg1 + 0x70) == 0
zmm0 = arg3[1]
zmm5 = *arg3
uint64_t* var_b8 = &var_100
zmm2.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f* var_128:4.d
float var_118
float* var_b0 = &var_118
int128_t var_58
int128_t* var_a8 = &var_58
int32_t* var_a0 = &var_110
char* var_98 = &var_130
uint64_t* var_90 = &var_128
float* var_88 = &var_108
zmm3.d = zmm0.d f* zmm6.d
int64_t var_80 = arg6
zmm0.d = _mm_shuffle_ps(zmm0, zmm0, 0xaa).d f* rax_3
zmm4 = zmm3
int64_t var_78 = arg7
zmm3 = data_14399f668
float temp0_4[0x4] = _mm_unpacklo_ps(zmm4, zmm0.q)
zmm0 = data_14399f670
int64_t var_70 = arg8
var_118 = temp0
float temp0_6[0x4] = _mm_unpacklo_ps(temp0_4, _mm_unpacklo_ps(zmm2, 0).q)
int64_t var_68 = arg9
zmm3 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), _mm_unpacklo_ps(data_14399f66c, 0).q)
char result_1
char* var_60 = &result_1
var_58 = zmm5
float var_48[0x4] = temp0_6
uint128_t var_38 = zmm3
result_1 = 0
int64_t var_d8 = arg1
int64_t var_d0 = arg2
int128_t* var_c8 = arg3
int32_t* var_c0 = arg4

if (cond:0)
    sub_141783480(&var_d8)
else
    sub_141787d00(&var_d8)

uint64_t result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_158)
return result
