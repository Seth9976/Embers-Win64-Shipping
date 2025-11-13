// 函数: sub_140ede410
// 地址: 0x140ede410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg1
float result = data_1439b38e8
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_142d3f770)
temp0[0] = temp0[0] f+ 1f
result = result * arg2
bool cond:0 = zmm2[0] <= 0f
temp0[0] = temp0[0] f/ data_1439b38e4
uint32_t zmm3[0x4] = __maxss_xmmss_memss(temp0[0], 0x3f800000)
zmm3[0] = zmm3[0] f* result

if (cond:0)
    zmm2[0] = zmm2[0] f+ zmm3[0]
    *arg1 = _mm_min_ss(zmm2[0], 0)[0]
    return result

zmm2[0] = zmm2[0] f- zmm3[0]
*arg1 = _mm_max_ss(zmm2[0], 0)[0]
return result
