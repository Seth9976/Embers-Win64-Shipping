// 函数: sub_1414d6e20
// 地址: 0x1414d6e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int32_t rdx_1 = temp2 & 0xf
int32_t rax_2 = temp3 + rdx_1
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_2 s>> 4)
sub_1410b3fe0(arg2, u"HISTORY_MISS_SUPER_SAMPLE_COUNT", zx.q((rax_2 & 0xf) - rdx_1 + 1))
int64_t r8_1
r8_1.b = mods.dp.d(temp4:temp5, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"USE_TEMPORAL_REPROJECTION", r8_1)
int32_t rdi_1 = divs.dp.d(temp4:temp5, 2) & 0x80000001

if (rdi_1 s< 0)
    rdi_1 = ((rdi_1 - 1) | 0xfffffffe) + 1

int32_t r14
r14.b = rdi_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"DISTANCE_FIELD_SKY_OCCLUSION", zx.q(r14))
sub_1405d3490(arg2 + 0x2a8, u"THREADGROUP_SIZE_X", 8)
sub_1405d3490(arg2 + 0x2a8, u"THREADGROUP_SIZE_Y", 8)
sub_1405d3490(arg2 + 0x2a8, u"THREADGROUP_SIZE_Z", 1)
sub_1410b3fe0(arg2, u"LOCAL_LIGHT_DATA_STRIDE", 6)
sub_1410b3fe0(arg2, u"NUM_CULLED_LIGHTS_GRID_STRIDE", zx.q(data_1439b6304))
return sub_1410b3fe0(arg2, u"NUM_CULLED_GRID_PRIMITIVE_TYPES", zx.q(data_1439b6308)) __tailcall
