// 函数: sub_1417b67f0
// 地址: 0x1417b67f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
float zmm3[0x4] = 0x3f800000
float zmm4[0x4] = *arg4
float zmm5[0x4] = *(arg4 + 4)
int64_t var_e8 = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
zmm4[0] = zmm4[0] * zmm4[0]
int32_t var_f8 = 0x3f800000
float var_110 = arg10[0]
float var_108 = arg5[0]
float zmm1[0x4] = *(arg4 + 8)
zmm5[0] = zmm5[0] * zmm5[0]
int32_t var_e0 = var_f8
zmm1[0] = zmm1[0] * zmm1[0]
char var_120 = arg11
zmm4[0] = zmm4[0] + zmm5[0]
zmm4[0] = zmm4[0] + zmm1[0]
float temp0_1[0x4] = _mm_sqrt_ss(zmm4[0], zmm4[0])
int64_t var_100

if (not(temp0_1[0] <= 1.17549435e-38f))
    zmm3[0] = 1f / temp0_1[0]
    zmm3[0] = zmm3[0] f* *(arg4 + 8)
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm3[0] = zmm3[0] * zmm5[0]
    float var_d0_1 = zmm3[0]
    var_100 = (_mm_unpacklo_ps(zmm3, zmm3[0].q)).q
    float var_f8_1 = var_d0_1

bool cond:0 = *(arg1 + 0x70) == 0
zmm3 = arg3[1]
zmm5 = *arg3
int64_t* var_a8 = &var_100
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_118
int32_t* var_a0 = &var_118
zmm4 = zmm3
float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 = data_14399f668
float var_48[0x4]
float (* var_98)[0x4] = &var_48
float* var_90 = &var_110
char* var_88 = &var_120
int64_t* var_80 = &var_e8
int32_t* var_78 = &var_108
int64_t var_70 = arg6
var_118 = temp0_1[0]
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_4, 0)
float zmm2[0x4] = data_14399f66c
int64_t var_68 = arg7
float temp0_6[0x4] = _mm_unpacklo_ps(zmm4, temp0_3[0].q)
float zmm0[0x4] = data_14399f670
float temp0_7[0x4] = _mm_unpacklo_ps(temp0_6, temp0_5[0].q)
int64_t var_60 = arg8
int64_t var_58 = arg9
float temp0_10[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
char result_1
char* var_50 = &result_1
var_48 = zmm5
float var_38[0x4] = temp0_7
float var_28[0x4] = temp0_10
result_1 = 0
int64_t var_c8 = arg1
int64_t var_c0 = arg2
float (* var_b8)[0x4] = arg3
int128_t* var_b0 = arg4

if (cond:0)
    sub_141783800(&var_c8)
else
    sub_141788080(&var_c8)

uint64_t result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_148)
return result
