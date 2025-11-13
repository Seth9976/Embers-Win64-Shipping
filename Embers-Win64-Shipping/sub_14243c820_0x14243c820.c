// 函数: sub_14243c820
// 地址: 0x14243c820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result[0x4] = zx.o(0)

if (not(arg2 <= 0f))
    float result_1[0x4] = 0x3f800000
    result_1[0] = 1f / arg2
    result_1[0] = result_1[0] f* *arg1
    arg2 = result_1[0] f* arg1[1]
    *arg1 = result_1[0]
    result_1[0] = result_1[0] f* arg1[2]
    arg1[1] = arg2
    arg1[2] = result_1[0]
    result_1[0] = result_1[0] f* arg1[3]
    result_1[0] = result_1[0] f* arg1[4]
    result_1[0] = result_1[0] f* arg1[5]
    result = result_1
    result[0] = result[0] * result_1[0]
    result_1[0] = result_1[0] * result_1[0]
    arg2 = result_1[0] * result_1[0]
    result_1[0] = result_1[0] + result[0]
    arg1[3] = result_1[0]
    arg1[4] = result_1[0]
    arg1[5] = result_1[0]
    result_1[0] = result_1[0] + arg2
    
    if (not(result_1[0] <= 9.99999994e-09f))
        float zmm3 = result_1[0]
        float result_2[0x4] = _mm_rsqrt_ss(result_1[0], zmm3)
        float zmm2[0x4] = 0x3f000000
        zmm3 = zmm3 * 0.5f
        result_2[0] = result_2[0] * result_2[0]
        zmm2[0] = 0.5f - zmm3 * result_2[0]
        result_2[0] = result_2[0] * zmm2[0]
        result_2[0] = result_2[0] + result_2[0]
        result = result_2
        result[0] = result[0] * (0.5f - zmm3 * result_2[0] * result_2[0])
        result_2[0] = result_2[0] + result[0]
        result_1[0] = result_1[0] * result_2[0]
        result_1[0] = result_1[0] * result_2[0]
        result_1[0] = result_1[0] * result_2[0]
        arg1[3] = result_1[0]
        arg1[4] = result_1[0]
        arg1[5] = result_1[0]

return result
