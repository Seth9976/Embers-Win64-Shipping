// 函数: sub_1426e2e80
// 地址: 0x1426e2e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    int64_t rax
    rax.b = 1
    return rax

arg2[0] = arg2[0] * 57.2957764f
arg2[0] = arg2[0] f- arg3
int64_t rax_1
uint32_t zmm0_1[0x4]
int32_t zmm7_1
zmm0_1, rax_1, zmm7_1 = sub_140a454f0(arg2, 0x43b40000)

if (not(zmm0_1[0] f>= 0f))
    zmm0_1[0] = zmm0_1[0] f+ 360f

if (not(zmm0_1[0] f<= 180f))
    zmm0_1[0] = zmm0_1[0] f- 360f

uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm0_1, data_142d3f770)
temp0[0] = temp0[0] f- 0.00999999978f
rax_1.b = zmm7_1 f> temp0[0]
return rax_1
