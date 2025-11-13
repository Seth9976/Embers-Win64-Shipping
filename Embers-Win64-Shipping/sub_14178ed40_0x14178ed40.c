// 函数: sub_14178ed40
// 地址: 0x14178ed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_20 = arg4[0]
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
bool cond:0 = *(arg1 + 0x70) == 0
float zmm0[0x4] = arg3[1]
int128_t zmm5 = *arg3
int64_t var_98 = arg2
zmm0[0] = zmm0[0] f* *arg8
int128_t* var_88 = arg3
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
temp0[0] = temp0[0] f* arg8[1]
int64_t var_a8 = arg2
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
temp0_1[0] = temp0_1[0] f* arg8[2]
int32_t* var_90 = &arg_20
arg4 = data_14399f668
int32_t* var_78 = arg8
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, 0)
int64_t* var_70 = &var_a8
float temp0_3[0x4] = _mm_unpacklo_ps(zmm0, temp0_1[0].q)
zmm0 = data_14399f670
float temp0_4[0x4] = _mm_unpacklo_ps(temp0_3, temp0_2[0].q)
int64_t var_68 = arg7
float temp0_5[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
int64_t var_60 = arg5
float var_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(arg4, zmm0[0].q), temp0_5[0].q)
int128_t var_48 = zmm5
float var_38[0x4] = temp0_4
int128_t* var_a0 = &var_48
void* var_80 = arg1
int64_t var_58 = arg6

if (cond:0)
    uint64_t rax_7 = sub_141784f30(&var_98, arg1 + 0x60)
    __security_check_cookie(rax_1 ^ &var_c8)
    return rax_7

uint64_t rax_6 = sub_1417897b0(&var_98, arg1 + 0x50)
__security_check_cookie(rax_1 ^ &var_c8)
return rax_6
