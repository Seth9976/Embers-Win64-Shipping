// 函数: sub_141703820
// 地址: 0x141703820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg2 + 8) | 0x80
uint32_t zmm1 = 0x38d1b717
arg1[1].b = rax
*(arg1 + 9) = rax
*arg1 = &data_142fc4f68
*(arg1 + 0xa) = 0x100
*(arg1 + 0xc) = 1
arg1[2] = arg2
arg1[3] = 0
arg1[4] = 0
arg1[8].d = arg4
__builtin_memcpy(arg1 + 0x44, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
*(arg1 + 0xa) = *(arg1[2] + 0xa)
void* rax_2 = arg1[2]
*(arg1 + 0xb) = *(rax_2 + 0xb)
uint32_t zmm2[0x4] = *arg3

if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f>= 9.99999975e-05f))
    zmm2 = 0x38d1b717

arg1[5].d = zmm2[0]
uint32_t zmm0[0x4] = 0x3f800000
zmm0[0] = 1f f/ zmm2[0]
*(arg1 + 0x34) = zmm0[0]
zmm2 = *(arg3 + 4)

if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f>= 9.99999975e-05f))
    zmm2 = 0x38d1b717

zmm0 = 0x3f800000
*(arg1 + 0x2c) = zmm2[0]
zmm0[0] = 1f f/ zmm2[0]
arg1[7].d = zmm0[0]
uint32_t zmm5[0x4] = *(arg3 + 8)

if (not(_mm_and_ps(zmm5, 0x7fffffff)[0] f< 9.99999975e-05f))
    zmm1 = zmm5[0]

arg1[6].d = zmm1
*(arg1 + 0x3c) = 1f f/ zmm1
int32_t var_28
sub_141731000(rax_2, &var_28)
float zmm2_1[0x4] = var_28
zmm2_1[0] = zmm2_1[0] f* arg1[5].d
int32_t var_1c
float zmm5_1[0x4] = var_1c
int32_t var_20
float zmm0_1[0x4] = var_20
zmm0_1[0] = zmm0_1[0] f* arg1[6].d
int32_t var_24
float zmm1_1[0x4] = var_24
zmm1_1[0] = zmm1_1[0] f* *(arg1 + 0x2c)
float var_30 = zmm0_1[0]
float temp0_3[0x4] = _mm_unpacklo_ps(zmm2_1, zmm1_1[0].q)
*(arg1 + 0x44) = temp0_3.q
arg1[0xa] = temp0_3.q
*(arg1 + 0x4c) = var_30
arg1[0xb].d = var_30
zmm5_1[0] = zmm5_1[0] f* arg1[5].d
float var_18
float zmm3 = var_18 f* *(arg1 + 0x2c)
float var_14
float zmm4 = var_14 f* arg1[6].d
float temp0_4[0x4] = __minss_xmmss_memss(zmm5_1[0], *(arg1 + 0x44))
zmm0_1 = *(arg1 + 0x4c)
float temp0_5[0x4] = _mm_min_ss(arg1[9].d[0], zmm3)
float temp0_6[0x4] = __maxss_xmmss_memss(zmm5_1[0], arg1[0xa].d)
float temp0_7[0x4] = _mm_min_ss(zmm0_1[0], zmm4)
float temp0_8[0x4] = _mm_unpacklo_ps(temp0_4, temp0_5[0].q)
float var_30_1 = temp0_7[0]
float temp0_9[0x4] = _mm_max_ss((*(arg1 + 0x54))[0], zmm3)
zmm0_1 = arg1[0xb].d
*(arg1 + 0x44) = temp0_8.q
float temp0_10[0x4] = _mm_max_ss(zmm0_1[0], zmm4)
*(arg1 + 0x4c) = var_30_1
arg1[0xa] = (_mm_unpacklo_ps(temp0_6, temp0_9[0].q)).q
arg1[0xb].d = temp0_10[0]
return arg1
