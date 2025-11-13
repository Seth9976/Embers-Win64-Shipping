// 函数: sub_1420bbc00
// 地址: 0x1420bbc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result[0x4] = 0x3f800000
uint32_t zmm7[0x4] = arg1

if (not(arg3 <= 0f))
    arg1[0] = arg1[0] f- arg2
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(arg1, data_142d3f770)
    temp0_1[0] = temp0_1[0] f/ arg3
    uint32_t zmm5[0x4]
    
    if (temp0_1[0] f>= 0f)
        zmm5 = _mm_min_ss(temp0_1[0], 0x3f800000)
    else
        zmm5 = zx.o(0)
    
    arg1 = arg5
    arg1[0] = arg1[0] f- arg4
    arg1[0] = arg1[0] f* zmm5[0]
    arg1[0] = arg1[0] f+ arg4
    arg4 = arg1[0]

if (not(arg4 f>= 0f))
    arg4 = (zx.o(0)).d
else if (not(arg4 f< 1f))
    arg4 = 0x3f800000

result[0] = 1f f- arg4
arg4 = arg4 f* zmm7[0]
result[0] = result[0] f* arg2
result[0] = result[0] f+ arg4
return result
