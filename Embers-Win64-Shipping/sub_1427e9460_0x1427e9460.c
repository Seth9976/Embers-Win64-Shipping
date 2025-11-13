// 函数: sub_1427e9460
// 地址: 0x1427e9460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_28[0x4]
int128_t* rax_1 = (*(*arg1 + 0x48))(arg1, &var_28)
float zmm4[0x4] = *rax_1
float zmm5 = *(rax_1 + 0xc)

if (zmm4[0] == 0f)
    var_28 = data_142d3f660
else
    float zmm2[0x4] = 0x3f800000
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm2[0] = 1f / _mm_sqrt_ss(0, zmm5 * zmm5 + zmm4[0])[0]
    zmm5 = zmm5 * zmm2[0]
    float zmm1 = zmm2[0] * zmm4[0]
    zmm2[0] = zmm2[0] * 0f
    var_28[0] = zmm1
    var_28[3] = zmm5
    var_28[1] = zmm2[0]
    var_28[2] = zmm2[0]

float zmm0[0x4] = var_28[3]

if (not(var_28[0] >= 0f))
    zmm0 ^= data_142d3f780

float result =
    acosf(__minss_xmmss_memss(__maxss_xmmss_memss(zmm0[0], 0xbf800000)[0], 0x3f800000)[0]) * 2f

if (result < 3.14159274f)
    return result

return result - 6.28318548f
