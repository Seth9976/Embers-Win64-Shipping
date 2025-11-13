// 函数: sub_141356ee0
// 地址: 0x141356ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4] = *(arg2 + 0x1bc)
float arg_10 = *(arg2 + 0x194)
float var_128 = (*(arg2 + 0x198))[0]
float var_124 = (*(arg2 + 0x19c))[0]

if (zmm12[0] >= 0f)
    zmm12 = _mm_min_ss(zmm12[0], 0x40000000)
else
    zmm12 = zx.o(0)

float zmm14[0x4] = *(arg2 + 0x1f0)
float zmm6[0x4] = *(arg2 + 0x1c0)
int128_t zmm7 = *(arg2 + 0x1d4)
float zmm8[0x4] = *(arg2 + 0x1e8)

if (zmm14[0] >= 0f)
    zmm14 = _mm_min_ss(zmm14[0], 0x3f800000)
else
    zmm14 = zx.o(0)

float zmm1[0x4] = *(arg2 + 0x1fc)
zmm14[0] = zmm14[0] + 1f

if (zmm1[0] >= 1f)
    zmm1 = __minss_xmmss_memss(zmm1[0], 0x40800000)
else
    zmm1 = 0x3f800000

float zmm0_1[0x4] = powf(2f, zmm1[0])
zmm1 = *(arg2 + 0x1f4)
float var_110 = zmm0_1[0]

if (zmm1[0] >= 0f)
    zmm1 = _mm_min_ss(zmm1[0], 0x3f800000)
else
    zmm1 = zx.o(0)

zmm0_1 = 0x3cb851ec
float zmm13[0x4] = 0x3f800000
zmm13[0] = 1f - zmm1[0]
zmm13[0] = zmm13[0] * 0.180000007f

if (not(zmm13[0] < 0.0225000009f))
    zmm0_1 = 0x3e2ccccd

if (zmm13[0] < 0.0225000009f || not(zmm13[0] < 0.168750003f))
    zmm13 = zmm0_1

zmm1 = *(arg2 + 0x1f8)

if (zmm1[0] >= 0f)
    zmm1 = _mm_min_ss(zmm1[0], 0x3f800000)
else
    zmm1 = zx.o(0)

zmm0_1 = 0x3f800000
zmm0_1[0] = 1f - zmm1[0]
zmm1 = 0x3f800000
float temp0_6[0x4] = __maxss_xmmss_memss(zmm0_1[0], 0x3d000000)
temp0_6[0] = temp0_6[0] * 0.819999993f
zmm1[0] = 1f - temp0_6[0]
zmm0_1 = *(arg2 + 0x1b4)
float var_120 = zmm1[0]
float arg_18

if (zmm0_1[0] >= 0f)
    arg_18 = _mm_min_ss(zmm0_1[0], 0x3f800000)[0]
else
    arg_18 = zx.o(0)[0]

float zmm15[0x4] = *(arg2 + 0x1b8)

if (zmm15[0] >= 0f)
    zmm15 = _mm_min_ss(zmm15[0], 0x3f800000)
else
    zmm15 = zx.o(0)

zmm1 = *(arg2 + 0x1c4)
zmm6[0] = zmm6[0] + 4.76837158e-07f
float zmm3[0x4] = *(arg2 + 0x1c8)
zmm6[0] = zmm6[0] + zmm1[0]
float zmm4[0x4] = *(arg2 + 0x1d0)
float zmm2[0x4] = 0x3f800000
float zmm5[0x4] = *(arg2 + 0x19c)
zmm5[0] = zmm5[0] + 4.76837158e-07f
zmm6[0] = zmm6[0] + 4.76837158e-07f
zmm6[0] = zmm6[0] + zmm3[0]
zmm2[0] = 1f / zmm6[0]
zmm4[0] = zmm4[0] f+ zmm7.d
zmm1[0] = zmm1[0] * zmm2[0]
zmm6[0] = zmm6[0] * zmm2[0]
zmm7.d = zmm7.d f+ 4.76837158e-07f
zmm2[0] = zmm2[0] * zmm3[0]
zmm3 = *(arg2 + 0x1e4)
zmm4[0] = zmm4[0] + 4.76837158e-07f
float var_108 = zmm1[0]
zmm1 = 0x3f800000
float var_104 = zmm2[0]
zmm2 = *(arg2 + 0x1d8)
float var_10c = zmm6[0]
zmm4[0] = zmm4[0] + zmm2[0]
zmm1[0] = 1f / zmm4[0]
zmm7.d = zmm7.d f* zmm1[0]
zmm1[0] = zmm1[0] * zmm4[0]
zmm4 = *(arg2 + 0x198)
zmm1[0] = zmm1[0] * zmm2[0]
zmm4[0] = zmm4[0] + 4.76837158e-07f
zmm2 = *(arg2 + 0x1e0)
float var_100 = zmm1[0]
zmm3[0] = zmm3[0] + zmm2[0]
float var_f8 = zmm1[0]
zmm1 = 0x3f800000
int32_t var_fc = zmm7.d
zmm3[0] = zmm3[0] + zmm8[0]
zmm8[0] = zmm8[0] + 4.76837158e-07f
zmm3[0] = zmm3[0] + 4.76837158e-07f
zmm1[0] = 1f / zmm3[0]
zmm8[0] = zmm8[0] * zmm1[0]
zmm1[0] = zmm1[0] * zmm2[0]
zmm4[0] = zmm4[0] * 0.715200007f
float var_f4 = zmm1[0]
zmm1[0] = zmm1[0] * zmm3[0]
zmm5[0] = zmm5[0] * 0.0722000003f
zmm3 = *(arg2 + 0x194)
zmm3[0] = zmm3[0] + 4.76837158e-07f
float var_f0 = zmm1[0]
float var_ec = zmm8[0]
zmm3[0] = zmm3[0] * 0.212599993f
zmm4[0] = zmm4[0] + zmm3[0]
zmm0_1 = 0x3f800000
zmm4[0] = zmm4[0] + zmm5[0]
zmm0_1[0] = 1f / zmm4[0]
zmm0_1[0] = zmm0_1[0] * zmm3[0]
zmm3 = *(arg2 + 0x1a4)
zmm3[0] = zmm3[0] - arg_10
float var_118 = zmm0_1[0]
zmm0_1[0] = zmm0_1[0] * zmm4[0]
zmm4 = *(arg2 + 0x1a8)
zmm4[0] = zmm4[0] - var_128
zmm3[0] = zmm3[0] * zmm15[0]
zmm0_1[0] = zmm0_1[0] * zmm5[0]
zmm3[0] = zmm3[0] + arg_10
float arg_8 = zmm0_1[0]
float var_e8 = zmm0_1[0]
zmm4[0] = zmm4[0] * zmm15[0]
zmm3[0] = zmm3[0] + 4.76837158e-07f
zmm5 = *(arg2 + 0x1ac)
zmm3[0] = zmm3[0] * 0.212599993f
arg_10 = 0f
float var_11c = 0f
zmm5[0] = zmm5[0] - var_124
zmm4[0] = zmm4[0] + var_128
zmm6[0] = zmm6[0] + var_100
zmm5[0] = zmm5[0] * zmm15[0]
zmm15 = zx.o(0)
zmm4[0] = zmm4[0] + 4.76837158e-07f
zmm6[0] = zmm6[0] + var_f4
zmm5[0] = zmm5[0] + var_124
zmm4[0] = zmm4[0] * 0.715200007f
zmm5[0] = zmm5[0] + 4.76837158e-07f
int128_t zmm9 = zx.o(0)
zmm4[0] = zmm4[0] + zmm3[0]
zmm0_1 = 0x3f800000
zmm5[0] = zmm5[0] * 0.0722000003f
zmm4[0] = zmm4[0] + zmm5[0]
zmm0_1[0] = 1f / zmm4[0]
zmm2 = var_f8
float zmm11[0x4] = zmm0_1
zmm0_1[0] = zmm0_1[0] * zmm4[0]
zmm4 = zx.o(0)
zmm0_1[0] = zmm0_1[0] * zmm5[0]
zmm5 = zx.o(0)
zmm11[0] = zmm11[0] * zmm3[0]
zmm3 = zx.o(0)
float var_114 = zmm0_1[0]
zmm1 = var_108
float var_124_1 = zmm0_1[0]
zmm1[0] = zmm1[0] f+ zmm7.d
zmm7 = zx.o(0)
zmm6[0] = zmm6[0] * 0.333333343f
zmm2[0] = zmm2[0] + var_104
zmm1[0] = zmm1[0] + var_f0
zmm2[0] = zmm2[0] + zmm8[0]
zmm8 = zx.o(0)
zmm1[0] = zmm1[0] * 0.333333343f
zmm2[0] = zmm2[0] * 0.333333343f
zmm0_1 = arg_18
float var_e4 = zmm1[0]
float var_128_1 = zmm2[0]
zmm0_1[0] = zmm0_1[0] * 13.6063995f
float var_e0 = zmm0_1[0]
zmm0_1[0] = zmm0_1[0] * 45.7728004f
zmm0_1[0] = zmm0_1[0] * 4.62080002f
float var_dc = zmm0_1[0]
zmm2 = var_114
arg_18 = zmm0_1[0]
zmm0_1 = var_118
zmm11[0] = zmm11[0] - zmm0_1[0]
zmm2[0] = zmm2[0] - arg_8
float var_d8 = zmm11[0]
zmm11 = var_124_1
float var_114_1 = zmm2[0]
zmm2 = var_e8
zmm11[0] = zmm11[0] - zmm2[0]
float var_124_2 = zmm11[0]

if (arg3 != 0)
    zmm3 = var_128_1
    zmm0_1 = var_fc
    zmm9.d = var_108.d f- zmm1[0]
    zmm15 = var_104
    zmm0_1[0] = zmm0_1[0] - zmm1[0]
    zmm4 = var_10c
    zmm15[0] = zmm15[0] - zmm3[0]
    zmm5 = var_100
    zmm4[0] = zmm4[0] - zmm6[0]
    zmm5[0] = zmm5[0] - zmm6[0]
    zmm8 = var_ec
    zmm9.d = zmm9.d f* zmm12[0]
    zmm0_1[0] = zmm0_1[0] * zmm12[0]
    zmm15[0] = zmm15[0] * zmm12[0]
    zmm9.d = zmm9.d f+ zmm1[0]
    zmm4[0] = zmm4[0] * zmm12[0]
    zmm0_1[0] = zmm0_1[0] + zmm1[0]
    zmm1 = var_f8
    zmm15[0] = zmm15[0] + zmm3[0]
    zmm5[0] = zmm5[0] * zmm12[0]
    zmm1[0] = zmm1[0] - zmm3[0]
    arg_10 = zmm0_1[0]
    zmm4[0] = zmm4[0] + zmm6[0]
    zmm7.d = var_f0.d f- var_e4
    zmm5[0] = zmm5[0] + zmm6[0]
    zmm1[0] = zmm1[0] * zmm12[0]
    zmm8[0] = zmm8[0] - var_128_1
    zmm7.d = zmm7.d f* zmm12[0]
    zmm1[0] = zmm1[0] + zmm3[0]
    zmm3 = var_f4
    zmm3[0] = zmm3[0] - zmm6[0]
    zmm8[0] = zmm8[0] * zmm12[0]
    zmm7.d = zmm7.d f+ var_e4
    var_11c = zmm1[0]
    zmm3[0] = zmm3[0] * zmm12[0]
    zmm8[0] = zmm8[0] + var_128_1
    zmm3[0] = zmm3[0] + zmm6[0]
    
    if (arg4 == 0)
        zmm6 = var_118
        zmm4[0] = zmm4[0] * zmm6[0]
        zmm9.d = zmm9.d f* zmm6[0]
        zmm15[0] = zmm15[0] * zmm6[0]
        zmm6 = arg_8
        zmm0_1[0] = zmm0_1[0] * zmm6[0]
        zmm1[0] = zmm1[0] * zmm6[0]
        arg_10 = zmm0_1[0]
        zmm5[0] = zmm5[0] * zmm6[0]
        var_11c = zmm1[0]
        zmm3[0] = zmm3[0] * zmm2[0]
        zmm7.d = zmm7.d f* zmm2[0]
        zmm8[0] = zmm8[0] * zmm2[0]
else if (arg4 == 0)
    zmm7 = arg_8
    zmm3 = zmm0_1
    zmm8 = zmm2

zmm12 = 0x3e3851ec
zmm2 = 0x3f800000
zmm14[0] = zmm14[0] * 0.180000007f
zmm1 = 0x3f800000
zmm1[0] = 1f / zmm14[0]
zmm12[0] = 0.180000007f - zmm14[0]
zmm1[0] = zmm1[0] * zmm12[0]
zmm2[0] = 1f - zmm12[0]
zmm2[0] = zmm2[0] * zmm1[0]
zmm2[0] = zmm2[0] + zmm1[0]
zmm2[0] = zmm2[0] * zmm13[0]
zmm2[0] = zmm2[0] * var_120
zmm2[0] = zmm2[0] - zmm1[0]
zmm2[0] = zmm2[0] - zmm1[0]
zmm6 = zmm2
zmm6[0] = zmm6[0] * zmm14[0]
zmm13 = zmm2[0]
zmm2[0] = zmm2[0] * zmm14[0]
zmm6[0] = zmm6[0] + zmm12[0]
zmm14 = 0x3f800000
zmm13[0] = zmm13[0] - zmm2[0]
zmm2[0] = zmm2[0] + zmm12[0]
zmm14[0] = 1f - zmm2[0]
zmm12 = zmm2
zmm1 = var_110
zmm12[0] = zmm12[0] - zmm6[0]
zmm1[0] = zmm1[0] - zmm13[0]
zmm12[0] = zmm12[0] / zmm13[0]
zmm1[0] = zmm1[0] * zmm12[0]
zmm1[0] = zmm1[0] - zmm14[0]
zmm1[0] = zmm1[0] / zmm1[0]
zmm14[0] = zmm14[0] / zmm1[0]
zmm2[0] = zmm2[0] * zmm12[0]
float var_110_1 = zmm14[0]
zmm14[0] = zmm14[0] * zmm13[0]
zmm1[0] = zmm1[0] * zmm12[0]
float var_128_2 = zmm2[0]
zmm2[0] = zmm2[0] - zmm6[0]
float zmm10[0x4] = zmm14 ^ data_142d3f780
zmm14[0] = zmm14[0] / zmm1[0]
float var_120_2 = zmm10[0]
zmm2[0] = zmm2[0] / var_128_2
zmm14[0] = zmm14[0] - zmm13[0]

if (arg5 == 0)
    zmm12 = zx.o(0)
    zmm6 = zx.o(0)
label_141357636:
    zmm0_1 = zx.o(0)
    zmm1 = zx.o(0)
    zmm2 = zx.o(0)
else
    bool cond:5_1 = zmm2[0] == 0f
    zmm6[0] = zmm6[0] - var_128_2
    arg5.d = zmm6[0]
    
    if (cond:5_1)
        zmm6 = 0x3f800000
        goto label_141357636
    
    zmm6[0] = zmm6[0] / zmm2[0]
    zmm2[0] = zmm2[0] * zmm12[0]
    zmm0_1 = zmm6 ^ data_142d3f780
    zmm6[0] = zmm6[0] / zmm2[0]
    zmm1 = arg5.d

*(arg1 + 0x1c) = 0x3f800000
*(arg1 + 0x2c) = 0x3f800000
*(arg1 + 0x3c) = 0x3f800000
*(arg1 + 0x4c) = 0x3f800000
*(arg1 + 0x5c) = 0x3f800000
float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
*(arg1 + 0x6c) = 0x3f800000
temp0_9[0] = zmm9.d
float temp0_10[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
float temp0_11[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
temp0_11[0] = zmm7.d
*(arg1 + 0x7c) = 0x3f800000
temp0_12[0] = zmm6[0]
float temp0_13[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc6)
temp0_13[0] = zmm15[0]
float temp0_15[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
temp0_14[0] = zmm8[0]
temp0_15[0] = zmm13[0]
float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x27)
temp0_16[0] = zmm0_1[0]
float temp0_17[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
temp0_17[0] = zmm12[0]
temp0_10[0] = arg_10[0]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x27)
temp0_18[0] = zmm14[0]
float temp0_19[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
temp0_19[0] = var_11c[0]
float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x27)
temp0_21[0] = zmm1[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x39)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x39)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x39)
float var_138[0x4] = temp0_20
float var_138_1[0x4] = temp0_23
float var_138_2[0x4] = temp0_22
temp0_24[2].q = 0
temp0_24[0] = var_110_1[0]
*arg1 = temp0_20
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xe1)
temp0_25[0] = var_120_2[0]
arg1[1] = temp0_23
float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xe1)
arg1[4] = temp0_26
temp0_26[3] = 0
temp0_26[0] = var_e0[0]
arg1[2] = temp0_22
float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xe1)
temp0_27[0] = var_dc[0]
arg1[3] = temp0_24
float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc6)
temp0_28[0] = arg_18[0]
float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
arg1[5] = temp0_29
temp0_29[3] = 0
temp0_29[0] = var_118[0]
float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xe1)
temp0_30[0] = arg_8[0]
float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc6)
temp0_31[0] = var_e8[0]
float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc9)
arg1[6] = temp0_32
temp0_32[3] = 0
temp0_32[0] = var_d8[0]
float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xe1)
temp0_33[0] = var_114_1[0]
float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc6)
temp0_34[0] = var_124_2[0]
arg1[7] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
return arg1
