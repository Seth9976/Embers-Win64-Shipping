// 函数: sub_14131a2d0
// 地址: 0x14131a2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
uint64_t rdx_2 = zx.q(r8 s/ 5)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rdx_2.d)
sub_1410b3fe0(arg2, u"DIM_LAYER_PROCESSING", zx.q(r8 - (rdx_2 * 5).d))
int64_t r8_2
r8_2.b = mods.dp.d(temp4:temp5, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_BOKEH_SIMULATION", r8_2)
int32_t rdi_1 = divs.dp.d(temp4:temp5, 2) & 0x80000001

if (rdi_1 s< 0)
    rdi_1 = ((rdi_1 - 1) | 0xfffffffe) + 1

int32_t rsi
rsi.b = rdi_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_SCATTER_OCCLUSION", zx.q(rsi))
return sub_1410b3fe0(arg2, u"COC_TILE_SIZE", 8) __tailcall
