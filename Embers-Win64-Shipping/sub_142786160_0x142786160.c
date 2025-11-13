// 函数: sub_142786160
// 地址: 0x142786160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = arg3
arg3.b = 9
sub_1417048d0(arg1, 3, arg3.b)
*arg1 = &data_142fc55f0
float zmm6[0x4] = *rsi
float zmm7[0x4] = *(rsi + 4)
zmm6[0] = zmm6[0] f- *arg2
zmm7[0] = zmm7[0] f- arg2[1]
float zmm8[0x4] = *(rsi + 8)
zmm8[0] = zmm8[0] f- arg2[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] + zmm8[0]

if (zmm7[0] == 1f)
    goto label_142786292

float var_78
float var_70
float zmm2[0x4]
int64_t zmm4

if (zmm7[0] >= 9.99999994e-09f)
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
    zmm2 = 0x3f000000
    zmm7[0] = zmm7[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm7[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm4.d = 0.5f - zmm7[0]
    temp0_1[0] = temp0_1[0] f* zmm4.d
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
label_142786292:
    var_70 = zmm8[0]
    float var_74_1 = zmm7[0]
    var_78 = zmm6[0]
else
    var_78 = data_143dbb1f8[0]
    var_70 = data_143dbb200[0]
    float var_74 = data_143dbb1fc[0]

arg3.b = 2
sub_1417048d0(&arg1[2], 0, arg3.b)
arg1[2] = &data_142fc47b8
arg3.b = 2
arg1[4] = *arg2
int32_t rax = arg2[2]
*(arg1 + 0x2c) = var_78.q
arg1[5].d = rax
*(arg1 + 0x34) = var_70
zmm7 = *(arg1 + 0x2c) ^ 0x80000000
float var_70_1 = (*(arg1 + 0x34) ^ 0x80000000)[0]
zmm6 = arg1[6].d ^ 0x80000000
sub_1417048d0(&arg1[7], 0, arg3.b)
arg1[7] = &data_142fc47b8
arg1[9] = *rsi
arg1[0xa].d = *(rsi + 8)
*(arg1 + 0x54) = (_mm_unpacklo_ps(zmm7, zmm6[0].q)).q
*(arg1 + 0x5c) = var_70_1
float zmm1[0x4] = *rsi
zmm1[0] = zmm1[0] f- *arg2
zmm2 = *(rsi + 4)
zmm2[0] = zmm2[0] f- arg2[1]
float zmm0[0x4] = *(rsi + 8)
zmm0[0] = zmm0[0] f- arg2[2]
*(arg1 + 0x64) = arg4[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm2[0] = zmm2[0] * zmm2[0]
zmm0[0] = zmm0[0] * zmm0[0]
zmm2[0] = zmm2[0] + zmm1[0]
zmm2[0] = zmm2[0] + zmm0[0]
arg1[0xc].d = _mm_sqrt_ss(0, zmm2[0])[0]
arg1[0xd].d = arg5[0]
*(arg1 + 0x6c) = *arg2
*(arg1 + 0x74) = arg2[2]
arg1[0xf] = *arg2
arg1[0x10].d = arg2[2]
*(arg1 + 0xa) = 1
float temp0_4[0x4] = __minss_xmmss_memss((*(arg1 + 0x6c))[0], *rsi)
float temp0_5[0x4] = __minss_xmmss_memss(arg1[0xe].d[0], *(rsi + 4))
float temp0_6[0x4] = __minss_xmmss_memss((*(arg1 + 0x74))[0], *(rsi + 8))
float temp0_7[0x4] = _mm_unpacklo_ps(temp0_4, temp0_5[0].q)
zmm2 = *(arg1 + 0x7c)
*(arg1 + 0x6c) = temp0_7.q
zmm1 = arg1[0xf].d
zmm0 = arg1[0x10].d
*(arg1 + 0x74) = temp0_6[0]
float temp0_8[0x4] = __maxss_xmmss_memss(zmm1[0], *rsi)
float temp0_9[0x4] = __maxss_xmmss_memss(zmm2[0], *(rsi + 4))
float temp0_10[0x4] = __maxss_xmmss_memss(zmm0[0], *(rsi + 8))
float temp0_11[0x4] = _mm_unpacklo_ps(temp0_8, temp0_9[0].q)
float var_70_3 = temp0_10[0]
arg1[0xf] = temp0_11.q
arg1[0x10].d = var_70_3
float temp0_12[0x4] = __maxss_xmmss_memss((*(arg1 + 0x64))[0], arg1[0xd].d)
zmm2 = *(arg1 + 0x6c)
zmm1 = arg1[0xe].d
zmm2[0] = zmm2[0] - temp0_12[0]
temp0_12[0] = temp0_12[0] f+ arg1[0x10].d
zmm1[0] = zmm1[0] - temp0_12[0]
temp0_12[0] = temp0_12[0] f+ arg1[0xf].d
zmm4.d = temp0_12[0].q.d f+ *(arg1 + 0x7c)
float var_64 = temp0_12[0]
zmm0 = *(arg1 + 0x74)
zmm0[0] = zmm0[0] - temp0_12[0]
float var_70_4 = zmm0[0]
*(arg1 + 0x6c) = (_mm_unpacklo_ps(zmm2, zmm1[0].q)).q
*(arg1 + 0x74) = var_70_4
arg1[0xf] = (_mm_unpacklo_ps(temp0_12, zmm4)).q
arg1[0x10].d = var_64
return arg1
