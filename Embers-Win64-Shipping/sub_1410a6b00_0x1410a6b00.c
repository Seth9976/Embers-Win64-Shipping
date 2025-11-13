// 函数: sub_1410a6b00
// 地址: 0x1410a6b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 4) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

int64_t r8
r8.b = rax_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"VISUALIZE_LIGHT_CULLING", r8)
sub_1410b3fe0(arg2, u"LOCAL_LIGHT_DATA_STRIDE", 6)
sub_1410b3fe0(arg2, u"NUM_CULLED_LIGHTS_GRID_STRIDE", zx.q(data_1439b6304))
return sub_1410b3fe0(arg2, u"NUM_CULLED_GRID_PRIMITIVE_TYPES", zx.q(data_1439b6308)) __tailcall
