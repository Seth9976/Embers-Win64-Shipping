// 函数: sub_14175ec80
// 地址: 0x14175ec80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg3
int64_t* r8 = nullptr

if (*(arg2 + 0xc) u>= 1)
    r8 = arg2

int96_t var_88 = arg3[1][0].12
float zmm0[0x4]

if (r8 == 0)
    zmm0 = data_142d3f660
else
    zmm0 = *(*(*r8 + 0x218) + sx.q(r8[1].d) * 0x10)

float var_98[0x4] = zmm0
float zmm3[0x4] = var_98[0] ^ 0x80000000
zmm0 = var_98[1] ^ 0x80000000
float zmm2[0x4] = var_98[3]
float zmm1[0x4] = var_98[2] ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm0[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
temp0_1[0] = zmm1[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_3[0] = zmm2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
int96_t var_98_1 = temp0_4[0].12
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0), temp0_2)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm4)
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_6, data_143ef7c70)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm4, zmm4, 0x4e))
float temp0_16[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(zmm4, zmm4, 0xb1))
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143ef7c60)
float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, data_143ef7c50)
float temp0_20[0x4] = _mm_add_ps(_mm_add_ps(temp0_12, temp0_17), temp0_18)
int128_t zmm5

if (r8 == 0)
    zmm5 = zx.o(0)
    zmm1 = zx.o(0)
    zmm4 = zx.o(0)
else
    int64_t rdx_2 = sx.q(r8[1].d) * 3
    int64_t rcx_1 = *(*r8 + 0x200)
    zmm0 = zx.o(*(rcx_1 + (rdx_2 << 2)))
    var_98_1:8.d = *(rcx_1 + (rdx_2 << 2) + 8)
    zmm4 = var_98_1:8.d
    var_98_1.q = zmm0.q
    zmm5 = var_98_1.d
    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

zmm3 = var_88.d
float zmm11[0x4] = var_88:4.d
zmm3[0] = zmm3[0] f- zmm5.d
float zmm12[0x4] = var_88:8.d
zmm11[0] = zmm11[0] - zmm1[0]
zmm12[0] = zmm12[0] - zmm4[0]

if (r8 == 0)
    zmm0 = data_142d3f660
else
    zmm0 = *(*(*r8 + 0x218) + sx.q(r8[1].d) * 0x10)

int128_t zmm9 = zmm0[1] ^ 0x80000000
int128_t zmm10 = zmm0[0] ^ 0x80000000
zmm5 = zmm0[2] ^ 0x80000000
*arg1 = temp0_20
zmm2 = zmm0[3]
zmm3[0] = zmm3[0] f* zmm5.d
zmm11[0] = zmm11[0] f* zmm10.d
zmm11[0] = zmm11[0] f* zmm5.d
zmm12[0] = zmm12[0] f* zmm9.d
zmm12[0] = zmm12[0] - zmm11[0]
zmm12[0] = zmm12[0] f* zmm10.d
zmm3[0] = zmm3[0] - zmm12[0]
zmm3[0] = zmm3[0] f* zmm9.d
zmm12[0] = zmm12[0] + zmm12[0]
zmm11[0] = zmm11[0] - zmm3[0]
zmm3[0] = zmm3[0] + zmm3[0]
zmm12[0] = zmm12[0] * zmm2[0]
zmm11[0] = zmm11[0] + zmm11[0]
zmm12[0] = zmm12[0] + zmm3[0]
zmm3[0] = zmm3[0] f* zmm5.d
zmm12[0] = zmm12[0] f* zmm5.d
zmm12[0] = zmm12[0] f* zmm9.d
zmm11[0] = zmm11[0] f* zmm9.d
zmm11[0] = zmm11[0] - zmm3[0]
zmm11[0] = zmm11[0] * zmm2[0]
zmm11[0] = zmm11[0] f* zmm10.d
zmm11[0] = zmm11[0] + zmm12[0]
zmm3[0] = zmm3[0] * zmm2[0]
zmm11[0] = zmm11[0] + zmm12[0]
zmm12[0] = zmm12[0] - zmm11[0]
zmm0 = data_14399f670
zmm3[0] = zmm3[0] f* zmm10.d
zmm3[0] = zmm3[0] + zmm11[0]
zmm3[0] = zmm3[0] - zmm12[0]
zmm12[0] = zmm12[0] + zmm3[0]
zmm3[0] = zmm3[0] + zmm11[0]
float temp0_22[0x4] = _mm_unpacklo_ps(zmm12, 0)
float temp0_24[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11, zmm3[0].q), temp0_22[0].q)
zmm2 = data_14399f66c
arg1[1] = temp0_24
arg1[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
return arg1
