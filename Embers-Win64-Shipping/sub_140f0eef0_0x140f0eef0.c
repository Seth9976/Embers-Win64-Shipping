// 函数: sub_140f0eef0
// 地址: 0x140f0eef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rcx = *arg5
int32_t var_158
(*(*rcx + 0x38))(rcx, &var_158)
float zmm11[0x4] = *(arg3 + 0x34)
float zmm0[0x4] = *arg11
zmm0[0] = zmm0[0] f* *(arg6 + 0xc0)
int128_t zmm1
zmm1.d = (*(arg11 + 4)).d f* *(arg6 + 0xc4)
int64_t* rcx_1 = *arg5
float zmm6[0x4] = 0x3f800000
zmm6[0] = 1f f/ *(arg7 + 8)
int128_t zmm10 = *(arg3 + 0x3c)
float zmm12[0x4] = var_158
float var_168 = zmm0[0]
zmm0 = *(arg11 + 8)
zmm0[0] = zmm0[0] f* *(arg6 + 0xc8)
int32_t var_164 = zmm1.d
zmm1.d = (*(arg11 + 0xc)).d f* *(arg6 + 0xcc)
float var_154 = zmm11[0]
float var_160 = zmm0[0]
int32_t var_15c = zmm1.d
int64_t rax_4 = *rcx_1
zmm12[0] = zmm12[0] * zmm6[0]
zmm11[0] = zmm11[0] * zmm6[0]
void var_f0
int32_t* rax_5 = (*(rax_4 + 0x18))(rcx_1, &var_f0)
float zmm8[0x4] = *(arg7 + 8)
zmm1 = *(arg7 + 0x20)
int32_t zmm4 = *(arg7 + 0x24)
zmm6[0] = zmm6[0] f* *rax_5
int64_t var_dc = 0
int32_t zmm2 = *(arg7 + 0x1c)
float zmm3[0x4] = *(arg7 + 0x28)
zmm11[0] = zmm11[0] f* zmm4
zmm8[0] = zmm8[0] * zmm12[0]
zmm10.d = zmm10.d f* zmm6[0]
zmm8[0] = zmm8[0] f+ *(arg7 + 0xc)
zmm12[0] = zmm12[0] f* zmm2
zmm12[0] = zmm12[0] f* zmm1.d
zmm12[0] = zmm12[0] + zmm11[0]
zmm8[0] = zmm8[0] * zmm11[0]
zmm3[0] = zmm3[0] * zmm11[0]
zmm12[0] = zmm12[0] f+ *(arg7 + 0x2c)
zmm8[0] = zmm8[0] f+ *(arg7 + 0x10)
zmm12[0] = zmm12[0] + zmm3[0]
int32_t var_144 = zmm1.d
int32_t var_140 = zmm4
float var_13c = zmm3[0]
float var_e8 = zmm8[0]
zmm12[0] = zmm12[0] f+ *(arg7 + 0x30)
float var_e4 = zmm8[0]
float var_e0 = zmm8[0]
float var_d4 = zmm6[0]
int32_t var_d0 = zmm10.d
int128_t var_cc = zmm2.o
int64_t var_bc = (_mm_unpacklo_ps(zmm12, zmm12[0].q)).q
char var_b4
char var_b4_1 = ((*(arg7 + 0x34) & 1) * 2) | (var_b4 & 0xfc)
sub_140db3600(arg9, arg10 + 1, &var_e8, arg6 + 0xd0, (arg12 ^ 1) << 5, &var_168)
float zmm9[0x4] = data_14399f5c0.d
zmm9[0] = zmm9[0] f- *(arg6 + 0xc0)
zmm8 = data_14399f5c0:4.d
zmm8[0] = zmm8[0] f- *(arg6 + 0xc4)
int128_t zmm0_1 = *arg11
float zmm6_1 = data_14399f5c0:8.d f- *(arg6 + 0xc8)
int32_t zmm4_1 = *(arg11 + 0x1c)
float zmm2_1 = zmm8[0]
int64_t* rcx_5 = *arg4
float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
temp0_1[0] = zmm2_1
int128_t var_120
int128_t* var_180 = &var_120
var_120 = zmm0_1
zmm0_1 = arg11[2]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
int128_t var_100 = zmm0_1
temp0_2[0] = zmm6_1
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
zmm0_1.d = 0.600000024f f* zmm4_1
temp0_3[0] = zmm4_1
var_100.d = zmm9[0]
var_100:4.d = zmm8[0]
var_100:8.d = zmm6_1
var_100:0xc.d = zmm0_1.d
float var_110[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
char var_1a8
var_1a8.q = arg6
int64_t result = (*(*rcx_5 + 0x90))(rcx_5, arg2, arg3, arg5, var_1a8, arg7, arg8, arg9, arg10 + 1, 
    var_180, arg12)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
