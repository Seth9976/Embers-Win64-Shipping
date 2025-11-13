// 函数: sub_1420c71b0
// 地址: 0x1420c71b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t temp0_3[0x4] = __andps_xmmxud_memxud(arg2, data_142d3f770)
arg1 = __andps_xmmxud_memxud(arg1, data_142d3f770)
uint32_t temp0_1 = _mm_max_ss(temp0_3[0], arg1[0])

if (not(temp0_1 f> 9.99999994e-09f))
    return zx.o(0)

arg2 = _mm_min_ss(temp0_3[0], arg1[0])
arg2[0] = arg2[0] f/ temp0_1
arg2[0] = arg2[0] f* arg2[0]
arg2[0] = arg2[0] f+ 1f
float result[0x4] = _mm_sqrt_ss(0, arg2[0])
result[0] = result[0] f* temp0_1
return result
