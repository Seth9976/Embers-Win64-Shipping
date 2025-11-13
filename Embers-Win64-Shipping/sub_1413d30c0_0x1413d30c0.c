// 函数: sub_1413d30c0
// 地址: 0x1413d30c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_14399f6f0
float zmm11[0x4] = data_1439b6c08
float zmm12[0x4] = data_1439b6c0c
*arg1 = data_14399f6e0
float zmm0[0x4] = data_14399f700
float zmm13[0x4] = data_1439b6c10
arg1[1] = zmm1
float zmm6[0x4] = zmm13
zmm1 = data_14399f710
float zmm14[0x4] = zmm11
arg1[2] = zmm0
float zmm15[0x4] = zmm12
arg1[3] = zmm1
float arg_10 = zmm6[0]

if (arg2 u> 5)
    int32_t var_f0
    zmm13 = var_f0
    int32_t var_f4
    zmm12 = var_f4
    int32_t var_f8
    zmm11 = var_f8
else
    switch (arg2)
        case 0
            zmm11 = data_1439b6bf8
            zmm12 = data_1439b6bfc
            zmm13 = data_1439b6c00
        case 1
            zmm11 = data_1439b6bf8 ^ 0x80000000
            zmm12 = data_1439b6bfc ^ 0x80000000
            zmm13 = data_1439b6c00 ^ 0x80000000
        case 2
            zmm6 = data_1439b6c20 ^ 0x80000000
            zmm14 = data_1439b6c18 ^ 0x80000000
            arg_10 = zmm6[0]
            zmm15 = data_1439b6c1c ^ 0x80000000
        case 3
            zmm6 = data_1439b6c20
            zmm11 ^= 0x80000000
            zmm14 = data_1439b6c18
            zmm12 ^= 0x80000000
            zmm15 = data_1439b6c1c
            zmm13 ^= 0x80000000
            arg_10 = zmm6[0]
        case 4
            zmm11 = data_1439b6c18
            zmm12 = data_1439b6c1c
            zmm13 = data_1439b6c20
        case 5
            zmm11 = data_1439b6c18 ^ 0x80000000
            zmm12 = data_1439b6c1c ^ 0x80000000
            zmm13 = data_1439b6c20 ^ 0x80000000

int32_t zmm2 = data_143dbb1f8
int32_t zmm4 = data_143dbb1fc
int32_t zmm3 = data_143dbb200
zmm6[0] = zmm6[0] * zmm12[0]
int32_t var_dc = 0
zmm13[0] = zmm13[0] * zmm15[0]
int32_t var_cc = 0
zmm6[0] = zmm6[0] * zmm11[0]
int32_t var_bc = 0
zmm13[0] = zmm13[0] - zmm6[0]
zmm14[0] = zmm14[0] f* zmm2
zmm14[0] = zmm14[0] * zmm12[0]
zmm13[0] = zmm13[0] * zmm14[0]
zmm6[0] = zmm6[0] - zmm13[0]
zmm15[0] = zmm15[0] * zmm11[0]
zmm14[0] = zmm14[0] - zmm15[0]
zmm6[0] = zmm6[0] f* zmm4
zmm13[0] = zmm13[0] f* zmm2
zmm14[0] = zmm14[0] f* zmm3
zmm6[0] = zmm6[0] + zmm13[0]
zmm15[0] = zmm15[0] f* zmm4
zmm6[0] = zmm6[0] + zmm14[0]
zmm14[0] = zmm14[0] + zmm15[0]
zmm6[0] = zmm6[0] f* zmm3
zmm12[0] = zmm12[0] f* zmm4
zmm14[0] = zmm14[0] + zmm6[0]
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
zmm11[0] = zmm11[0] f* zmm2
zmm13[0] = zmm13[0] f* zmm3
zmm11[0] = zmm11[0] + zmm12[0]
temp0[0] = zmm14[0]
float var_e8[0x4]
var_e8[0] = zmm13[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float temp0_2[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xe1)
temp0_2[0] = zmm14[0]
zmm11[0] = zmm11[0] + zmm13[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_3[0] = zmm11[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float var_d8[0x4]
var_d8[0] = zmm6[0]
*arg1 = temp0_4
float temp0_5[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
float var_c8[0x4]
var_c8[0] = zmm14[0]
temp0_5[0] = zmm15[0]
float temp0_6[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_1[0] = zmm11[0]
temp0_7[0] = zmm12[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
temp0_8[0] = 0x3f800000
arg1[1] = temp0_9
temp0_6[0] = arg_10[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
temp0_11[0] = zmm13[0]
arg1[2] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
arg1[3] = temp0_10
return arg1
