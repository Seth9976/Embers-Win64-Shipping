// 函数: sub_141b072b0
// 地址: 0x141b072b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint128_t var_68
sub_141f3cf60(arg3, &var_68)
float var_58[0x4]
float var_c0 = _mm_shuffle_ps(var_58, var_58, 0xaa)[0]
float zmm0[0x4] = var_68
float temp0_1[0x4] = _mm_shuffle_ps(var_58, var_58, 0x55)
float var_78[0x4] = zmm0
_mm_unpacklo_ps(var_58, temp0_1[0].q)
float var_a0 = var_c0
int64_t var_c8
int64_t zmm7_1 = sub_140adf5d0(&var_78, &var_c8)
arg2[4].b &= 0xfc
uint64_t var_9c = var_c8
float var_48[0x4]
double zmm1_1[0x2] = _mm_shuffle_ps(var_48, var_48, 0x55)
int32_t var_b4 = _mm_shuffle_ps(var_48, var_48, 0xaa).d
float var_94 = var_c0
float temp0_5[0x4] = _mm_unpacklo_ps(var_48, zmm1_1[0])
void*** rax_4 = sub_140a82f30(0x30, 8)
*arg2 = rax_4
void*** rcx_2 = rax_4
char rax_5 = arg2[4].b | 1
arg2[4].b = rax_5
int128_t zmm0_2
zmm0_2.q = zmm7_1
double temp0_6[0x2] = _mm_unpacklo_pd(var_9c:4.o, temp0_5[0].q)

if ((rax_5 & 2) != 0)
    rcx_2 = arg2

*(rcx_2 + 8) = zmm0_2
*rcx_2 = &data_143059f98
*(rcx_2 + 0x18) = temp0_6
rcx_2[5].d = var_b4
__security_check_cookie(rax_1 ^ &var_e8)
return arg2
