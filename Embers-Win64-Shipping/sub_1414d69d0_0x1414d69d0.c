// 函数: sub_1414d69d0
// 地址: 0x1414d69d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(divs.dp.d(temp2:temp3, 2))
int32_t temp14
int32_t temp15
temp14:temp15 = sx.q(divs.dp.d(temp8:temp9, 2))
int32_t temp20
int32_t temp21
temp20:temp21 = sx.q(divs.dp.d(temp14:temp15, 2))
int32_t temp26
int32_t temp27
temp26:temp27 = sx.q(divs.dp.d(temp20:temp21, 2))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"MULTISCATTERING_APPROX_ENABLED", r8)
int64_t r8_1
r8_1.b = mods.dp.d(temp8:temp9, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"FASTSKY_ENABLED", r8_1)
int64_t r8_2
r8_2.b = mods.dp.d(temp14:temp15, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"FASTAERIALPERSPECTIVE_ENABLED", r8_2)
int64_t r8_3
r8_3.b = mods.dp.d(temp20:temp21, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"SOURCE_DISK_ENABLED", r8_3)
int64_t r8_4
r8_4.b = mods.dp.d(temp26:temp27, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"SECOND_ATMOSPHERE_LIGHT_ENABLED", r8_4)
int32_t r14_1 = divs.dp.d(temp26:temp27, 2) & 0x80000001

if (r14_1 s< 0)
    r14_1 = ((r14_1 - 1) | 0xfffffffe) + 1

int32_t r15
r15.b = r14_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"RENDERSKY_ENABLED", zx.q(r15))
return sub_1410b3fe0(arg2, u"PER_PIXEL_NOISE", 1) __tailcall
