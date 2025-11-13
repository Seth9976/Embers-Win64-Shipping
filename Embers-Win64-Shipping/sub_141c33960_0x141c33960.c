// 函数: sub_141c33960
// 地址: 0x141c33960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx_3 = zx.d(arg2)
uint32_t zmm2[0x4] = arg1

if (arg2 == 0)
    return 

if (rcx_3 == 1)
    zmm2[0] = zmm2[0] f* 0.0500000007f
    return powf(0x41200000[0], zmm2[0]) __tailcall

arg1 = 0x3f800000
uint32_t zmm1[0x4]

if (rcx_3 == 2)
    zmm2[0] = zmm2[0] f* 3.14159274f
    zmm2[0] = zmm2[0] f- 1.57079637f
    zmm2[0] = zmm2[0] f* 0.636619747f
    zmm1 = __andps_xmmxud_memxud(zmm2, data_142d3f770)
    zmm1[0] = zmm1[0] f* 0.318309873f
    arg1[0] = 1f f- zmm1[0]
    arg1[0] = arg1[0] f* zmm2[0]
    arg1[0] = arg1[0] f+ 0.5f
    _mm_max_ss(arg1[0], 0)
    return 

if (rcx_3 != 3)
    return 

zmm2[0] = zmm2[0] f* 1.57079637f
zmm2[0] = zmm2[0] f* 1.27323949f
zmm1 = __andps_xmmxud_memxud(zmm2, data_142d3f770)
zmm1[0] = zmm1[0] f* 0.318309873f
arg1[0] = 1f f- zmm1[0]
arg1[0] = arg1[0] f* zmm2[0]
_mm_max_ss(arg1[0], 0)
