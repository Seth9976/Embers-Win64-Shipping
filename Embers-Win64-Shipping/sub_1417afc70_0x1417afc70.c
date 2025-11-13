// 函数: sub_1417afc70
// 地址: 0x1417afc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
bool cond:0 = *(arg1 + 0x70) == 0
int128_t zmm5 = *arg3
int128_t var_48
int128_t* var_a0 = &var_48
float var_c8
int32_t* var_90 = &var_c8
var_c8 = arg4[0]
arg4 = arg3[1]
int32_t var_b8
int32_t* var_78 = &var_b8
float temp0[0x4] = _mm_shuffle_ps(arg4, arg4, 0xaa)
int64_t var_a8
int64_t* var_70 = &var_a8
float zmm4[0x4] = arg4
float temp0_1[0x4] = _mm_shuffle_ps(arg4, arg4, 0x55)
arg4 = data_14399f668
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, 0)
float zmm2[0x4] = data_14399f66c
float temp0_3[0x4] = _mm_unpacklo_ps(zmm4, temp0[0].q)
float zmm0[0x4] = data_14399f670
float temp0_4[0x4] = _mm_unpacklo_ps(temp0_3, temp0_2[0].q)
int64_t var_68 = arg7
int64_t var_60 = arg5
float temp0_7[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(arg4, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
int64_t var_58 = arg6
var_b8 = 0x3f800000
int32_t var_b4 = 0x3f800000
int32_t var_b0 = 0x3f800000
var_48 = zmm5
float var_38[0x4] = temp0_4
float var_28[0x4] = temp0_7
var_a8 = arg2
int64_t var_98 = arg2
int128_t* var_88 = arg3
void* var_80 = arg1
uint64_t result

if (cond:0)
    result = sub_1417849e0(&var_98, arg1 + 0x60)
else
    result = sub_141789260(&var_98, arg1 + 0x50)

__security_check_cookie(rax_1 ^ &var_e8)
return result
