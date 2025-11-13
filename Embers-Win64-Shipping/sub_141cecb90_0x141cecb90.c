// 函数: sub_141cecb90
// 地址: 0x141cecb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rax_8 = *arg1
int128_t* var_f0 = arg2
int64_t* var_108
sub_14090aa40(*((*(rax_8 + 0x270))() + 8) + 0x150, &var_108, data_143f35cc8)
int32_t rax_10 = data_143a1c6b0
int32_t rdx_3 = arg1[6].d - *(arg1 + 0x5c) + 8
int32_t var_90 = rax_10
sub_1409d9850(&arg1[5], rdx_3)

for (int64_t i = 0; i s< 8; i += 1)
    int64_t var_e0
    __builtin_memset(&var_e0, 0, 0x20)
    int32_t rax_11 = sub_14090b340(&arg1[5], &var_e0)
    int64_t var_d0
    
    if (var_d0 != 0)
        sub_140a74f90(var_d0)
    
    int64_t rcx_5 = var_e0
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    sub_14090bdf0(&arg1[0x2f], rax_11)
    (&var_90)[i] = rax_11

int64_t* r8_1 = var_108
int128_t* rax_12 = var_f0
float zmm5[0x4] = *rax_12
int128_t zmm9 = *(rax_12 + 4)
int128_t zmm10 = *(rax_12 + 8)
int64_t rax_13 = sx.q(var_90)
float zmm3 = zmm10.d f+ arg3[2]
int64_t zmm4
zmm4.d = zmm9.q.d f- arg3[1]
zmm5[0] = zmm5[0] f- *arg3
zmm5[0] = zmm5[0] f+ *arg3
int64_t rdx_6 = rax_13 * 3
int128_t zmm6
zmm6.d = zmm9.d f+ arg3[1]
float zmm2 = zmm10.d f- arg3[2]
zmm10.d = zmm10.d f- arg3[2]
int64_t rcx_7 = *r8_1[3]
zmm9.d = zmm9.d f- arg3[1]
*(rcx_7 + (rdx_6 << 2)) = (_mm_unpacklo_ps(zmm5, zmm4)).q
float temp0_1[0x4] = _mm_unpacklo_ps(zmm5, zmm6.q)
*(rcx_7 + (rdx_6 << 2) + 8) = zmm3
int64_t rdx_7 = sx.q(rax_10) * 3
int64_t rcx_8 = *r8_1[3]
*(rcx_8 + (rdx_7 << 2)) = temp0_1.q
*(rcx_8 + (rdx_7 << 2) + 8) = zmm3
float temp0_2[0x4] = _mm_unpacklo_ps(zmm5, zmm6.q)
int64_t rdx_8 = sx.q(rax_10) * 3
int64_t rcx_9 = *r8_1[3]
*(rcx_9 + (rdx_8 << 2)) = temp0_2.q
*(rcx_9 + (rdx_8 << 2) + 8) = zmm3
float temp0_3[0x4] = _mm_unpacklo_ps(zmm5, zmm4)
int64_t rdx_9 = sx.q(rax_10) * 3
int64_t rcx_10 = *r8_1[3]
*(rcx_10 + (rdx_9 << 2)) = temp0_3.q
*(rcx_10 + (rdx_9 << 2) + 8) = zmm3
float temp0_4[0x4] = _mm_unpacklo_ps(zmm5, zmm6.q)
int64_t rdx_10 = sx.q(rax_10) * 3
int64_t rcx_11 = *r8_1[3]
*(rcx_11 + (rdx_10 << 2)) = temp0_4.q
*(rcx_11 + (rdx_10 << 2) + 8) = zmm2
float temp0_5[0x4] = _mm_unpacklo_ps(zmm5, zmm4)
int64_t rdx_11 = sx.q(rax_10) * 3
int64_t rcx_12 = *r8_1[3]
int32_t var_100_5 = zmm10.d
*(rcx_12 + (rdx_11 << 2)) = temp0_5.q
*(rcx_12 + (rdx_11 << 2) + 8) = zmm2
int64_t rdx_12 = sx.q(rax_10) * 3
int64_t* rax_32 = r8_1[3]
float temp0_6[0x4] = _mm_unpacklo_ps(zmm5, zmm9.q)
int32_t var_110 = 6
var_108 = arg1
int64_t rcx_13 = *rax_32
int32_t var_100_6 = zmm10.d
int32_t r9
int32_t var_f8 = r9
*(rcx_13 + (rdx_12 << 2)) = temp0_6.q
*(rcx_13 + (rdx_12 << 2) + 8) = var_100_5
float temp0_7[0x4] = _mm_unpacklo_ps(zmm5, zmm6.q)
int32_t var_118 = 7
int64_t rdx_13 = sx.q(rax_10) * 3
int64_t rcx_14 = *r8_1[3]
*(rcx_14 + (rdx_13 << 2)) = temp0_7.q
*(rcx_14 + (rdx_13 << 2) + 8) = var_100_6
var_100_6.q = &var_90
int32_t var_110_1 = 4
int32_t var_118_1 = 5
*arg4 = *sub_141ceb670(&var_108, &var_f0, 0, 1, var_118, var_110)
int32_t var_110_2 = 7
int32_t var_118_2 = 4
*arg5 = *sub_141ceb670(&var_108, &var_f0, 2, 3, var_118_1, var_110_1)
int32_t var_110_3 = 5
int32_t var_118_3 = 6
*arg6 = *sub_141ceb670(&var_108, &var_f0, 1, 2, var_118_2, var_110_2)
int32_t var_110_4 = 2
int32_t var_118_4 = 3
*arg7 = *sub_141ceb670(&var_108, &var_f0, 3, 0, var_118_3, var_110_3)
int32_t var_110_5 = 5
int32_t var_118_5 = 4
*arg8 = *sub_141ceb670(&var_108, &var_f0, 1, 0, var_118_4, var_110_4)
*arg9 = *sub_141ceb670(&var_108, &var_f0, 6, 7, var_118_5, var_110_5)
sub_14099c9d0(&arg1[0x5b], data_143f36130, 1, &data_143dbb1f8, 8)
sub_14099c9d0(&arg1[0x5b], data_143f36138, 1, &data_143dbb1f8, 8)
sub_14099c9d0(&arg1[0x5b], data_143f36140, 1, &data_143dbb1f8, 8)
sub_14099c9d0(&arg1[0x5b], data_143f36148, 1, &data_143dbb1f8, 8)
sub_141cebcc0(&arg1[5], (zx.o(0)).d)
void* result = sub_141cec030(&arg1[5], 3)
__security_check_cookie(rax_1 ^ &var_138)
return result
