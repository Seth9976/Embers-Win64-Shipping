// 函数: sub_141f49c70
// 地址: 0x141f49c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_38[0x4] = arg5
float var_48[0x4] = arg6
float var_58[0x4] = arg7
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint128_t zmm0 = zx.o(*arg2)
int64_t* rcx = arg1[0x18]
int32_t rax_2 = arg2[1].d
float zmm2[0x4]
float zmm9[0x4]

if (rcx == 0 || (*(arg1 + 0x14c) & 4) != 0)
    zmm9 = data_143f3b3e0
else
    float var_a8[0x4]
    (*(*rcx + 0x408))(rcx, &var_a8, arg1[0x19], 0)
    zmm0 = arg2[1].d
    zmm2 = *(arg2 + 4)
    arg7 = *arg2
    float temp0_1[0x4] = __mulps_xmmps_memps(var_a8, data_143f3b3f0)
    zmm9 = data_143f3b3e0
    float var_98[0x4]
    float temp0_5[0x4] = __subps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(arg7, zmm0.q), _mm_unpacklo_ps(zmm2, 0)[0].q), var_98)
    float var_88[0x4]
    uint32_t zmm5[0x4] = _mm_rcp_ps(var_88)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    arg7 = __andps_xmmxud_memxud(temp0_5, data_143f3b4c0)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0xc9), temp0_9)
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0xd2), temp0_7)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
    float temp0_15[0x4] = _mm_sub_ps(temp0_13, zmm0)
    zmm0 = _mm_mul_ps(zmm5, zmm5)
    zmm5 = _mm_add_ps(zmm5, zmm5)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
    zmm0 = _mm_mul_ps(zmm0, var_88)
    float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_18)
    zmm5 = _mm_sub_ps(zmm5, zmm0)
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_7)
    arg6 = _mm_add_ps(temp0_20, arg7)
    zmm0 = _mm_mul_ps(zmm5, zmm5)
    zmm5 = _mm_add_ps(zmm5, zmm5)
    zmm0 = _mm_mul_ps(zmm0, var_88)
    float temp0_29[0x4] = __cmpps_xmmps_memps_immb(_mm_and_ps(var_88, zmm9), data_143f3b530, 2)
    zmm5 = _mm_sub_ps(zmm5, zmm0)
    float temp0_33[0x4] =
        _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_9))
    arg5 = _mm_and_ps(temp0_29, zmm5 ^ zx.o(0)) ^ zmm5
    float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, arg6), arg5)
    rax_2 = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa).d
    zmm0 = _mm_unpacklo_ps(temp0_36, _mm_shuffle_ps(temp0_36, temp0_36, 0x55)[0].q)

uint64_t var_c8 = zmm0.q
zmm0 = zx.o(arg1[0x25])
bool cond:0 = zmm0.d f!= arg1[0x36].d
int32_t var_c0_2 = rax_2
int32_t rax_4 = arg1[0x26].d
uint64_t var_d8 = zmm0.q

if (cond:0 || var_d8:4.d.d f!= *(arg1 + 0x1b4) || not(rax_4.d f== arg1[0x37].d))
    arg6 = data_143f3b410
    float zmm4[0x4] = zx.o(arg1[0x25])
    zmm0 = zmm4
    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    float temp0_43[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_4[0].q), _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)[0].q)
    uint32_t temp0_44[0x4] = _mm_and_ps(arg6, zmm9)
    zmm2 = data_143f3b420
    float temp0_45[0x4] = _mm_div_ps(temp0_43, arg6)
    var_d8 = zmm4.q
    float temp0_47[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_45))
    float temp0_52[0x4] = _mm_sub_ps(temp0_43, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(temp0_45, zmm9), 2), temp0_47 ^ temp0_45)
                ^ temp0_47, 
            arg6))
    float temp0_55[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_44), _mm_min_ps(temp0_52, temp0_44))
    float temp0_56[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_55, 2)
    float temp0_57[0x4] = _mm_add_ps(temp0_55, arg6)
    arg7 = _mm_and_ps(temp0_56, temp0_57 ^ temp0_55) ^ temp0_57
    zmm0 = _mm_cmpeq_ps(data_143f3b400, arg7, 1)
    zmm2 = _mm_and_ps(_mm_sub_ps(arg7, arg6) ^ arg7, zmm0) ^ arg7
    int32_t var_d0_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    arg1[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    arg1[0x37].d = var_d0_2
    float var_b8[0x4]
    float (* rax_6)[0x4]
    rax_6, arg6, arg7 = sub_140ade170(&arg1[0x36], &var_b8)
    *(arg1 + 0x1a0) = *rax_6

var_d8.o = *(arg1 + 0x1a0)
int64_t result
int512_t zmm6
int512_t zmm7
int512_t zmm8
float zmm10[0x4]
result, zmm6, zmm7, zmm8 =
    sub_141f48240(arg1, &var_c8, &var_d8, arg3, arg6, arg7, zmm9, zmm10, arg4, arg8)
__security_check_cookie(rax_1 ^ &var_108)
zmm6.o = var_38
zmm7.o = var_48
zmm8.o = var_58
return result
