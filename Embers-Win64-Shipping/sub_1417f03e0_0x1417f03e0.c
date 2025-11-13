// 函数: sub_1417f03e0
// 地址: 0x1417f03e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_48[0x4] = arg5
float var_58[0x4] = arg6
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
*arg3 = 0
*arg7 = 0
int64_t* rdi = *(data_143f5b298 + 0xb08)
void var_c8
void var_b8

if (rdi != 0 && *(**rdi)(rdi, &var_c8) == *arg2)
    int32_t rax_10
    
    if ((*(*rdi + 0x50))(rdi, zx.q(arg2[1].d), &var_b8, arg8) == 0)
        *arg8 = data_143dbb1f8.q
        arg8[1].d = data_143dbb200
        *arg4 = data_143dbb208
        rax_10 = data_143dbb210
    else
        *arg3 = 1
        *arg7 = (*(*rdi + 0x20))(rdi)
        int64_t* rax_9 = sub_140acd070(&var_c8, &var_b8)
        *arg4 = *rax_9
        rax_10 = rax_9[1].d
    
    arg4[1].d = rax_10

int64_t* rcx_4 = *(data_143f5b298 + 0xb08)
float var_98[0x4]
float zmm3[0x4]

if (rcx_4 == 0)
    arg5 = data_143dbb0c0
    arg6 = data_143dbb0d0
    zmm3 = data_143dbb0e0
    var_98 = arg5
    float var_88_1[0x4] = arg6
    float var_78_1[0x4] = zmm3
else
    (*(*rcx_4 + 0x78))(rcx_4, &var_98)
    float var_78[0x4]
    zmm3 = var_78
    float var_88[0x4]
    arg6 = var_88
    arg5 = var_98

float zmm2[0x4] = *(arg8 + 4)
float temp0[0x4] = _mm_unpacklo_ps(*arg8, arg8[1].d.q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
float temp0_2[0x4] = _mm_shuffle_ps(arg5, arg5, 0xd2)
float temp0_4[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0, temp0_1[0].q), zmm3)
float temp0_5[0x4] = _mm_shuffle_ps(arg5, arg5, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(arg5, arg5, 0xff)
uint128_t zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_2)
float temp0_11[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_5), zmm0)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_12)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_2)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_4)
float temp0_21[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_16, temp0_5), zmm0), temp0_17), arg6)
int32_t var_c0 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa).d
*arg8 = (_mm_unpacklo_ps(temp0_21, _mm_shuffle_ps(temp0_21, temp0_21, 0x55)[0].q)).q
arg8[1].d = var_c0
float (* rax_15)[0x4] = sub_140ade170(arg4, &var_b8)
float zmm2_1[0x4] = var_98
float temp0_25[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float zmm3_1[0x4] = *rax_15
float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b), temp0_25)
float temp0_28[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm3_1)
float temp0_31[0x4] = __mulps_xmmps_memps(temp0_27, data_143ef94e0)
float temp0_32[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
float temp0_33[0x4] = _mm_add_ps(temp0_31, temp0_30)
float temp0_35[0x4] = _mm_mul_ps(temp0_28, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
float temp0_37[0x4] = _mm_mul_ps(temp0_32, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
float temp0_38[0x4] = __mulps_xmmps_memps(temp0_35, data_143ef94d0)
float temp0_39[0x4] = __mulps_xmmps_memps(temp0_37, data_143ef94c0)
float var_a8[0x4] = _mm_add_ps(_mm_add_ps(temp0_33, temp0_38), temp0_39)
uint64_t* rax_16
int512_t zmm6
int512_t zmm7
rax_16, zmm6, zmm7 = sub_140adf5d0(&var_a8, &var_c8)
*arg4 = *rax_16
int32_t result = rax_16[1].d
arg4[1].d = result
__security_check_cookie(rax_1 ^ &var_e8)
zmm6.o = var_48
zmm7.o = var_58
return result
