// 函数: sub_1427fcdb0
// 地址: 0x1427fcdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_48[0x4]
int128_t* rax_1 = (*(*arg1 + 0x48))(arg1, &var_48)
float zmm6[0x4] = *rax_1
float zmm3 = *(rax_1 + 0xc)

if (zmm6[0] == 0f)
    var_48 = data_142d3f660
else
    zmm6[0] = zmm6[0] * zmm6[0]
    float zmm2[0x4] = 0x3f800000
    zmm2[0] = 1f / _mm_sqrt_ss(0, zmm3 * zmm3 + zmm6[0])[0]
    zmm3 = zmm3 * zmm2[0]
    float zmm1 = zmm2[0] * zmm6[0]
    zmm2[0] = zmm2[0] * 0f
    var_48[0] = zmm1
    var_48[3] = zmm3
    var_48[1] = zmm2[0]
    var_48[2] = zmm2[0]

float result =
    acosf(_mm_min_ss(__maxss_xmmss_memss(var_48[3][0], 0xbf800000)[0], 0x3f800000)[0]) * 2f

if (not(zmm6[0] >= 0f))
    result = 6.28318548f - result

if (result <= 3.14159274f)
    return result

return result + -6.28318548f
