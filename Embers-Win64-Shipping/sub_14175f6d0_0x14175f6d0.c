// 函数: sub_14175f6d0
// 地址: 0x14175f6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0] f> 0f
int32_t rax = -1
uint32_t zmm4[0x4] = arg5
uint32_t temp0[0x4] = __andps_xmmxud_memxud(arg2, data_142d3f770)
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(arg3, data_142d3f770)

if (cond:0)
    rax = 1

temp0_1[0] = temp0_1[0] f+ zmm4[0]
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rax))

if (not(temp0[0] f< temp0_1[0]))
    zmm5.d = zmm5.d f* zmm4[0]
    zmm5.d = zmm5.d f+ arg3[0]
    return zmm5

temp0[0] = temp0[0] f+ arg4[0]
zmm5.d = zmm5.d f* arg4[0]

if (not(temp0_1[0] f< temp0[0]))
    zmm5.d = zmm5.d f+ arg2[0]
    return zmm5

arg4[0] = arg4[0] f* arg4[0]
zmm4[0] = zmm4[0] f* zmm4[0]
arg2[0] = arg2[0] f- arg3[0]
zmm5.d = zmm5.d f* zmm4[0]
zmm4[0] = zmm4[0] f* arg2[0]
zmm4[0] = zmm4[0] f+ arg4[0]
arg2[0] = arg2[0] f* arg2[0]
arg4[0] = arg4[0] f* arg3[0]
zmm4[0] = zmm4[0] f- arg2[0]
zmm4[0] = zmm4[0] f+ arg4[0]
arg1 = _mm_sqrt_ss(zmm4[0], zmm4[0])
arg1[0] = arg1[0] f* zmm5.d
arg1[0] = arg1[0] f+ zmm4[0]
arg1[0] = arg1[0] f/ zmm4[0]
return arg1
