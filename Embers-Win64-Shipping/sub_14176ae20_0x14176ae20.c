// 函数: sub_14176ae20
// 地址: 0x14176ae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdx = &arg1[0xb]
int32_t var_68[0x4]
void var_58
void var_48
float zmm6[0x4] = sub_141779320(&arg1[0xa], rdx, &var_68, &var_58, &var_48)
float zmm4[0x4] = arg1[0xb]
int32_t zmm7 = (zx.o(0)).d
float zmm5[0x4] = arg1[0xa][0] ^ 0x80000000
float zmm1[0x4] = (*arg1)[0x29] ^ 0x80000000
float zmm2[0x4] = (*arg1)[0x2a] ^ 0x80000000
float zmm3 = (*arg1)[0x2b]
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
temp0[0] = zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_2[0] = zmm2[0]
*arg2 = 0
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_3[0] = zmm3
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0), temp0_1)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm4)
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_6, data_143ef7c70)
float var_38[0x4] = temp0_4
float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm4, zmm4, 0x4e))
float temp0_16[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(zmm4, zmm4, 0xb1))
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143ef7c60)
float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, data_143ef7c50)
int96_t var_38_1 = _mm_add_ps(_mm_add_ps(temp0_12, temp0_17), temp0_18)[0].12

if (arg6 != 0)
    if (not((*(arg4 + 0x2c))[0] > 0f))
        *arg5
    
    rdx, zmm6, zmm7 = sub_14176def0(arg1, rdx, &var_68)
    *arg2 += 1

if (arg7 != 0)
    if (not((*(arg4 + 0x2c))[0] f> zmm7))
        *arg5
    
    int64_t rdx_1
    int512_t zmm1_1
    int512_t zmm3_1
    int128_t zmm6_1
    rdx_1, zmm1_1, zmm3_1, zmm6_1 = sub_14176def0(arg1, rdx, &var_58)
    zmm3_1.o = var_38_1:8.d
    zmm1_1.o = zmm6_1
    sub_14176def0(arg1, rdx_1, &var_48)
    *arg2 += 2
    int512_t zmm6_2
    zmm6_2.o = zmm6

return arg2
