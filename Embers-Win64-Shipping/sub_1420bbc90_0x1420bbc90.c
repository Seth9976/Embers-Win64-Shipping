// 函数: sub_1420bbc90
// 地址: 0x1420bbc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0_1
uint32_t zmm6_1[0x4]
uint32_t zmm7_1[0x4]
zmm0_1, zmm6_1, zmm7_1 = sub_1420bbc00(arg2[1], arg3[1][0], arg4.d, arg5.d, arg6.d)

if (zmm0_1 >= -180f)
    zmm0_1 = __minss_xmmss_memss(zmm0_1, 0x43340000)
else
    zmm0_1 = -180f

float zmm5 = *arg3
arg1[1] = zmm0_1
uint32_t zmm1[0x4] = zmm6_1
uint32_t zmm3[0x4]

if (not(arg4.d f<= 0f))
    zmm3 = *arg2
    zmm3[0] = zmm3[0] f- zmm5
    uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm3, data_142d3f770)
    temp0_2[0] = temp0_2[0] f/ arg4.d
    
    if (temp0_2[0] f>= 0f)
        zmm3 = _mm_min_ss(temp0_2[0], 0x3f800000)
    else
        zmm3 = zx.o(0)
    
    zmm1 = zmm7_1
    zmm1[0] = zmm1[0] f- zmm6_1[0]
    zmm1[0] = zmm1[0] f* zmm3[0]
    zmm1[0] = zmm1[0] f+ zmm6_1[0]

if (not(zmm1[0] f>= 0f))
    zmm1 = zx.o(0)
else if (not(zmm1[0] f< 1f))
    zmm1 = 0x3f800000

zmm3 = 0x3f800000
zmm3[0] = 1f f- zmm1[0]
zmm1[0] = zmm1[0] f* *arg2
zmm3[0] = zmm3[0] f* zmm5
zmm3[0] = zmm3[0] f+ zmm1[0]

if (zmm3[0] f>= -180f)
    zmm3 = __minss_xmmss_memss(zmm3[0], 0x43340000)
else
    zmm3 = 0xc3340000

zmm5 = arg3[2]
*arg1 = zmm3[0]
zmm3 = arg2[2]

if (not(arg4.d f<= 0f))
    zmm3[0] = zmm3[0] f- zmm5
    uint32_t temp0_5[0x4] = __andps_xmmxud_memxud(zmm3, data_142d3f770)
    temp0_5[0] = temp0_5[0] f/ arg4.d
    
    if (temp0_5[0] f>= 0f)
        zmm1 = _mm_min_ss(temp0_5[0], 0x3f800000)
    else
        zmm1 = zx.o(0)
    
    zmm7_1[0] = zmm7_1[0] f- zmm6_1[0]
    zmm7_1[0] = zmm7_1[0] f* zmm1[0]
    zmm7_1[0] = zmm7_1[0] f+ zmm6_1[0]
    zmm6_1 = zmm7_1

if (not(zmm6_1[0] f>= 0f))
    zmm6_1 = zx.o(0)
else if (not(zmm6_1[0] f< 1f))
    zmm6_1 = 0x3f800000

zmm0_1 = 1f f- zmm6_1[0]
zmm6_1[0] = zmm6_1[0] f* zmm3[0]
zmm0_1 = zmm0_1 * zmm5 f+ zmm6_1[0]

if (zmm0_1 >= -180f)
    arg1[2] = __minss_xmmss_memss(zmm0_1, 0x43340000)
else
    arg1[2] = 0xc3340000

return arg1
