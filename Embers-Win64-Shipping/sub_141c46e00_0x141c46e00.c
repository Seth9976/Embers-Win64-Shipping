// 函数: sub_141c46e00
// 地址: 0x141c46e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[0xf]
arg1[0xa] = arg3

if ((result.b & 1) != 0)
    result &= 0xfffffffe
    arg1[0xa] = 0
    arg1[0xf] = result
    arg3 = 0

arg2[0] = arg2[0] f- *arg1

if (not(__andps_xmmxud_memxud(arg2, data_142d3f770)[0] f<= 9.99999994e-09f))
    float temp0_1[0x4] = _mm_min_ss(arg1[0xd][0], arg2[0])
    uint32_t zmm4[0x4] = 0x3f800000
    int128_t zmm6
    zmm6.d = 1f f/ arg1[0xc]
    *arg1 = temp0_1[0]
    arg2 = 0x3f800000
    temp0_1[0] = temp0_1[0] * 3.14159274f
    temp0_1[0] = temp0_1[0] f* zmm6.d
    uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(temp0_1, data_142d3f770)
    temp0_2[0] = temp0_2[0] f* 0.318309873f
    temp0_1[0] = temp0_1[0] + 1.57079637f
    zmm4[0] = 1f f- temp0_2[0]
    uint32_t temp0_3[0x4] = __andps_xmmxud_memxud(temp0_1, data_142d3f770)
    temp0_3[0] = temp0_3[0] f* 0.318309873f
    zmm4[0] = zmm4[0] f* temp0_1[0]
    arg2[0] = 1f f- temp0_3[0]
    arg2[0] = arg2[0] f* temp0_1[0]
    zmm4[0] = zmm4[0] f/ arg2[0]
    zmm4[0] = zmm4[0] f* arg1[0xc]
    zmm4[0] = zmm4[0] f* zmm6.d
    zmm4[0] = zmm4[0] f+ 1f
    zmm4[0] = zmm4[0] f/ zmm4[0]
    uint32_t zmm0[0x4] = zx.o(0)
    arg1[3] = zmm4[0]
    zmm4[0] = zmm4[0] f- arg1[1]
    zmm0[0] = float.s(arg3)
    zmm4[0] = zmm4[0] f/ zmm0[0]
    arg1[2] = zmm4[0]

if (arg3 s<= 1)
    result = arg1[3]
    arg1[1] = result
    arg1[2] = 0

return result
