// 函数: sub_14204b050
// 地址: 0x14204b050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18[0x4]
float* result = sub_1414cb980(arg2, &var_18, 9.99999994e-09f)
float zmm3 = *arg1 f- arg2[0xc]
float zmm4 = arg1[1] f- arg2[0xd]
float temp0 = __maxss_xmmss_memss(result[1], *result)
float zmm2_1 = arg1[2] f- arg2[0xe]
float temp0_2 =
    _mm_max_ss(__maxss_xmmss_memss(temp0, result[2]) f* arg1[4] f+ arg1[3] + 9.99999975e-05f, 0)
result.b = temp0_2 * temp0_2 >= zmm4 * zmm4 + zmm3 * zmm3 + zmm2_1 * zmm2_1
return result
