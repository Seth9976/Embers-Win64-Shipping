// 函数: sub_141fe03c0
// 地址: 0x141fe03c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* rcx_1 = data_143f0f180
int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
int128_t var_108 = zx.o(0)
int32_t var_e4 = rax_3
int32_t var_f8 = 1
int128_t var_f4 = data_143dbb1e0
char var_e0 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
uint64_t var_148
(*(*rcx_1 + 0x580))(rcx_1, &var_148, &data_143f02b98, zx.q(*arg1), *(arg1 + 4), arg1[1].d, arg4, 1, 
    8, &var_108)
sub_1405d1600(arg5, &var_148)
sub_14081c9d0(&var_148)
uint128_t zmm3 = data_14399f668
uint128_t zmm1 = zx.o(*(arg1 + 4))
int64_t zmm2 = data_14399f66c
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*arg1))
zmm1 = _mm_cvtepi32_ps(zmm1)
zmm3.d = zmm3.d f/ zmm0_1.d
zmm0_1 = _mm_cvtepi32_ps(zx.o(arg1[1].d))
zmm2.d = zmm2.d f/ zmm1.d
zmm1.d = data_14399f670.d f/ zmm0_1.d
arg5[1] = (_mm_unpacklo_ps(zmm3, zmm2)).q
arg5[2].d = zmm1.d
*(arg5 + 0x14) = *arg2
arg5[3].d = arg2[1]
*(arg5 + 0x1c) = arg2[2]
arg5[4].d = *arg3
*(arg5 + 0x24) = arg3[1]
arg5[5].d = arg3[2]
int64_t rdx_2 = data_143dbb188.q
int32_t rax_13 = data_143dbb190
int32_t r10_1 = arg1[1].d
uint32_t rcx_5 = (rdx_2 u>> 0x20).d
uint32_t var_134 = rcx_5
uint32_t var_128 = rcx_5
var_148 = *arg1
int32_t var_138 = rdx_2.d
int32_t var_130 = rax_13
int32_t var_12c = rdx_2.d
int32_t var_124 = rax_13
int64_t* rcx_6 = data_143f0f180
int32_t var_120 = var_148.d
int32_t var_170
var_170.q = &var_138
uint32_t var_11c = (var_148 u>> 0x20).d
int32_t var_118 = r10_1
uint128_t var_c8
int64_t result = (*(*rcx_6 + 0x530))(rcx_6, &var_c8, &data_143f02b98, *arg5, 0, var_170)
*arg6 = var_c8
uint128_t var_b8
arg6[1] = var_b8
uint128_t var_a8
arg6[2] = var_a8
uint128_t var_98
arg6[3] = var_98
uint128_t var_88
arg6[4] = var_88
uint128_t var_78
arg6[5] = var_78
uint128_t var_68
arg6[6] = var_68
uint128_t var_58
arg6[7] = var_58
int64_t var_48
arg6[8].q = var_48
__security_check_cookie(rax_1 ^ &var_198)
return result
