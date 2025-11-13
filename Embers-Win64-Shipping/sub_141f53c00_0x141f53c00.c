// 函数: sub_141f53c00
// 地址: 0x141f53c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm9[0x4] = zx.o(0)
int64_t var_58
float var_50
float zmm0[0x4]

if (arg3 != 1)
    var_58 = *arg2
    var_50 = *(arg2 + 8)
else
    zmm6 = *(arg1 + 0x1e0)
    zmm0 = *(arg2 + 8)
    float temp0_1[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
    float temp0_2[0x4] = __mulps_xmmps_memps(data_143f3b980, *(arg1 + 0x1c0))
    float temp0_5[0x4] = __subps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, zmm0[0].q), temp0_1[0].q), *(arg1 + 0x1d0))
    float temp0_6[0x4] = _mm_rcp_ps(zmm6)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    float zmm8[0x4] = __andps_xmmxud_memxud(temp0_5, data_143f3b880)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_9)
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_7)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
    float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
    float temp0_16[0x4] = _mm_mul_ps(temp0_6, temp0_6)
    float temp0_17[0x4] = _mm_add_ps(temp0_6, temp0_6)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm6)
    float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_18)
    float temp0_21[0x4] = _mm_sub_ps(temp0_17, temp0_19)
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_7)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
    float temp0_25[0x4] = _mm_mul_ps(temp0_21, temp0_21)
    float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
    float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm6)
    float temp0_29[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f3b860), data_143f3b970, 2)
    float temp0_30[0x4] = _mm_sub_ps(temp0_26, temp0_27)
    float temp0_33[0x4] =
        _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_9))
    zmm6 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
    float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm6)
    var_58.d = temp0_36[0]
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
    var_50 = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)[0]
    var_58:4.d = temp0_37[0]

if (arg1[0x82].d != 0)
    zmm9 = *(sx.q(arg1[0x82].d) * 0x2c + arg1[0x81] - 0x2c)
    zmm9[0] = zmm9[0] + 1f

int64_t rsi = sx.q(arg1[0x82].d)
int32_t rax_4 = (rsi + 1).d
arg1[0x82].d = rax_4

if (rax_4 s> *(arg1 + 0x414))
    sub_140ac0cd0(&arg1[0x81])

int32_t* rcx_3 = rsi * 0x2c + arg1[0x81]
*(rcx_3 + 4) = var_58
rcx_3[3] = var_50
*rcx_3 = zmm9[0]
*(rcx_3 + 0x10) = data_143dbb1f8.q
rcx_3[6] = data_143dbb200
*(rcx_3 + 0x1c) = data_143dbb1f8.q
rcx_3[9] = data_143dbb200
rcx_3[0xa].b = 1
int64_t rsi_1 = sx.q(arg1[0x85].d)
int32_t rax_8 = (rsi_1 + 1).d
arg1[0x85].d = rax_8

if (rax_8 s> *(arg1 + 0x42c))
    sub_1405c5060(&arg1[0x84])

int32_t* rcx_7 = rsi_1 * 0x50 + arg1[0x84]
int32_t var_50_1 = 0x3f800000
*rcx_7 = zmm9[0]
*(rcx_7 + 0x10) = data_14399f720
*(rcx_7 + 0x20) = data_14399f720
*(rcx_7 + 0x30) = data_14399f720
rcx_7[0x10].b = 1
int64_t rsi_2 = sx.q(arg1[0x88].d)
int32_t rax_9 = (rsi_2 + 1).d
arg1[0x88].d = rax_9

if (rax_9 s> *(arg1 + 0x444))
    sub_140ac0cd0(&arg1[0x87])

int32_t* rcx_10 = rsi_2 * 0x2c + arg1[0x87]
*(rcx_10 + 4) = 0x3f800000
rcx_10[3] = 0x3f800000
*rcx_10 = zmm9[0]
*(rcx_10 + 0x10) = data_143dbb1f8.q
rcx_10[6] = data_143dbb200
*(rcx_10 + 0x1c) = data_143dbb1f8.q
rcx_10[9] = data_143dbb200
rcx_10[0xa].b = 1
int64_t* result = (*(*arg1 + 0x868))(arg1)

if (result != 0)
    result = (*(*result + 0x270))(result, zmm9)

if (*(arg1 + 0x4e2) != 0)
    zmm0 = *(arg1 + 0x4e4)
    zmm0[0] = zmm0[0] + 1f
    *(arg1 + 0x4e4) = zmm0[0]

if (arg4 == 0)
    return result

return sub_141f77550(arg1) __tailcall
