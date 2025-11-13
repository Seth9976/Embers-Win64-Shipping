// 函数: sub_141319fb0
// 地址: 0x141319fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_ROUND_BLADES", r8)
sub_1410b3fe0(arg2, u"DIM_LUT_FORMAT", zx.q(divs.dp.d(temp2:temp3, 2) s% 3))
return sub_1410b3fe0(arg2, u"COC_TILE_SIZE", 8) __tailcall
