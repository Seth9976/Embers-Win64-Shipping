// 函数: sub_141c34f50
// 地址: 0x141c34f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = 0x40c90fdb
zmm6[0] = 6.28318548f f/ *(arg1 + 0x18)
zmm6[0] = zmm6[0] f* *(arg1 + 0x20)
float result_9[0x4]
float result_10[0x4]
result_9, result_10 = __libm_sse2_sincosf_(zmm6)
float result_5[0x4] = result_9
float result_11[0x4] = _mm_shuffle_ps(result_9, result_9, 1)
result_9 = *(arg1 + 0x24)
result_9[0] = result_9[0] * 0.346573591f
result_9[0] = result_9[0] * result_10[0]
result_9[0] = result_9[0] / result_5[0]
float result[0x4] = sinhf(result_9[0])
float result_8[0x4] = result
int32_t rax_1 = *(arg1 + 8) - 1
result_8[0] = result_8[0] * result_5[0]
float result_6[0x4]
float result_12[0x4]

if (rax_1 u> 6)
    result_10 = 0x3f800000
    result_5 = 0x3f800000
    result_5[0] = 1f - result_11[0]
    result_6 = result_5
label_141c35257:
    result_6[0] = result_6[0] * 0.5f
    result_12 = result_6
label_141c35264:
    result_11[0] = result_11[0] * -2f
    goto label_141c3526c

float result_1[0x4]
float result_2[0x4]
float result_3[0x4]
float result_7[0x4]

switch (rax_1)
    case 0
        result_10 = 0x3f800000
        result_6 = result_11
        result_5 = 0xbf800000
        result_6[0] = result_6[0] + 1f
        result_5[0] = -1f - result_11[0]
        goto label_141c35257
    case 1
        result_10 = 0x3f800000
        result_12 = result_8 ^ data_142d3f780
        result_6 = result_8
        result_5 = zx.o(0)
        goto label_141c35264
    case 2
        result_10 = 0x3f800000
        result_5 = result_11
        result_5[0] = result_5[0] * -2f
        result_6 = 0x3f800000
        result_12 = 0x3f800000
        result_11 = result_5
    label_141c3526c:
        result_1 = result_8
        result_7 = result_10
        result_1[0] = result_1[0] + result_10[0]
        result_7[0] = result_7[0] - result_8[0]
    case 3
        result_1 = *(arg1 + 0x28)
        result_1[0] = result_1[0] * 0.0250000004f
        result = powf(0x41200000[0], result_1[0])
        result_10 = 0x3f800000
        result[0] = result[0] * result_8[0]
        result_5 = result_11
        result_5[0] = result_5[0] * -2f
        result_12 = 0x3f800000
        result_6 = result
        result_12[0] = 1f - result[0]
        result_6[0] = result_6[0] + 1f
        result_8[0] = result_8[0] / result[0]
        result_11 = result_5
        goto label_141c3526c
    case 4
        result_1 = *(arg1 + 0x28)
        result_1[0] = result_1[0] * 0.0250000004f
        result = powf(0x41200000[0], result_1[0])
        result_10 = 0x3f800000
        result_3 = result
        float result_4[0x4] = result
        result_1 = result
        result_1[0] = result_1[0] + result_3[0]
        result_2 = result
        result_4[0] = result_4[0] - 1f
        result_2[0] = result_2[0] + 1f
        result_7 = result_4
        result_12 = result_2
        float zmm5_1 = _mm_sqrt_ss(0, result_1[0]) * result_5[0]
        result = result_2
        result_7[0] = result_7[0] * result_11[0]
        result_5 = result_4
        result_4[0] = result_4[0] * -2f
        result_12[0] = result_12[0] - result_7[0]
        result[0] = result[0] * result_11[0]
        result_7[0] = result_7[0] + result_2[0]
        result_5[0] = result_5[0] - result[0]
        result_6 = result_12
        result[0] = result[0] + result[0]
        result_6[0] = result_6[0] + zmm5_1
        result_12[0] = result_12[0] - zmm5_1
        result_5[0] = result_5[0] * result_1[0]
        result_1 = result_7
        result_4[0] = result_4[0] - result[0]
        result_6[0] = result_6[0] * result_3[0]
        result_12[0] = result_12[0] * result_3[0]
        result_1[0] = result_1[0] + zmm5_1
        result_7[0] = result_7[0] - zmm5_1
        result_11 = result_4
    case 5
        result_1 = *(arg1 + 0x28)
        result_1[0] = result_1[0] * 0.0250000004f
        result = powf(0x41200000[0], result_1[0])
        result_10 = 0x3f800000
        result_2 = result
        result_3 = result
        result[0] = result[0] + result_2[0]
        result_7 = result
        result_3[0] = result_3[0] - 1f
        result_7[0] = result_7[0] + 1f
        float temp0_1 = _mm_sqrt_ss(0, result[0])
        result = result_7
        float zmm4_1 = temp0_1 * result_5[0]
        result_3[0] = result_3[0] * result_11[0]
        result[0] = result[0] * result_11[0]
        result_12 = result_3
        result_12[0] = result_12[0] + result_7[0]
        result_7[0] = result_7[0] - result_3[0]
        result_5 = result
        result_5[0] = result_5[0] + result_3[0]
        result_3[0] = result_3[0] - result[0]
        result_6 = result_12
        result_12[0] = result_12[0] - zmm4_1
        result_1 = result_7
        result_6[0] = result_6[0] + zmm4_1
        result_5[0] = result_5[0] * result_2[0]
        result_1[0] = result_1[0] + zmm4_1
        result_3[0] = result_3[0] + result_3[0]
        result_12[0] = result_12[0] * result_2[0]
        result_7[0] = result_7[0] - zmm4_1
        result_5[0] = result_5[0] * -2f
        result_11 = result_3
        result_6[0] = result_6[0] * result_2[0]
    case 6
        result_10 = 0x3f800000
        result_12 = result_8
        result_6 = 0x3f800000
        result_12[0] = result_12[0] + 1f
        result_5 = result_11
        result_6[0] = 1f - result_8[0]
        result_5[0] = result_5[0] * -2f
        result_1 = result_12
        result_7 = result_6
        result_11 = result_5

result_10[0] = result_10[0] / result_1[0]
int32_t i = 0
result_6[0] = result_6[0] * result_10[0]
result_5[0] = result_5[0] * result_10[0]
result_12[0] = result_12[0] * result_10[0]
result_11[0] = result_11[0] * result_10[0]
result_7[0] = result_7[0] * result_10[0]

if (*(arg1 + 0x1c) s> 0)
    int64_t rcx_2 = 0
    
    do
        rcx_2 += 0x30
        i += 1
        *(rcx_2 + *(arg1 + 0x10) - 0x28) = result_6[0]
        *(rcx_2 + *(arg1 + 0x10) - 0x24) = result_5[0]
        *(rcx_2 + *(arg1 + 0x10) - 0x20) = result_12[0]
        *(rcx_2 + *(arg1 + 0x10) - 0x1c) = result_11[0]
        *(rcx_2 + *(arg1 + 0x10) - 0x18) = result_7[0]
    while (i s< *(arg1 + 0x1c))

return result
