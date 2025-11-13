// 函数: sub_14122dc80
// 地址: 0x14122dc80
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
int32_t temp32
int32_t temp33
temp32:temp33 = sx.q(divs.dp.d(temp26:temp27, 2))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES", r8)
int64_t r8_1
r8_1.b = mods.dp.d(temp8:temp9, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES", r8_1)
int64_t r8_2
r8_2.b = mods.dp.d(temp14:temp15, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"SUPPORT_DFAO_INDIRECT_OCCLUSION", r8_2)
int64_t r8_3
r8_3.b = mods.dp.d(temp20:temp21, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ENABLE_SKY_LIGHT", r8_3)
int64_t r8_4
r8_4.b = mods.dp.d(temp26:temp27, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ENABLE_DYNAMIC_SKY_LIGHT", r8_4)
int64_t r8_5
r8_5.b = mods.dp.d(temp32:temp33, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"APPLY_SKY_SHADOWING", r8_5)
int32_t r15_1 = divs.dp.d(temp32:temp33, 2) & 0x80000001

if (r15_1 s< 0)
    r15_1 = ((r15_1 - 1) | 0xfffffffe) + 1

int32_t r12
r12.b = r15_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"RAY_TRACED_REFLECTIONS", zx.q(r12))
sub_1410b3fe0(arg2, u"MAX_CAPTURES", 0x155)
int64_t rdi_1 = sx.q(*(arg2 + 0xb8))
int32_t rax_13 = (rdi_1 + 1).d
*(arg2 + 0xb8) = rax_13

if (rax_13 s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

*(*(arg2 + 0xb0) + (rdi_1 << 2)) = 4
sub_1410b3fe0(arg2, u"LOCAL_LIGHT_DATA_STRIDE", 6)
sub_1410b3fe0(arg2, u"NUM_CULLED_LIGHTS_GRID_STRIDE", zx.q(data_1439b6304))
return sub_1410b3fe0(arg2, u"NUM_CULLED_GRID_PRIMITIVE_TYPES", zx.q(data_1439b6308)) __tailcall
