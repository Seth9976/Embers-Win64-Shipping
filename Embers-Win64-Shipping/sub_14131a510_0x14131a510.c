// 函数: sub_14131a510
// 地址: 0x14131a510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
uint64_t rdx_1 = zx.q(r8 s/ 3)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rdx_1.d)
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(divs.dp.d(temp4:temp5, 2))
int32_t temp16
int32_t temp17
temp16:temp17 = sx.q(divs.dp.d(temp10:temp11, 2))
sub_1410b3fe0(arg2, u"DIM_REDUCE_MIP_COUNT", zx.q(r8 - (rdx_1 * 3).d + 2))
int64_t r8_3
r8_3.b = mods.dp.d(temp4:temp5, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_HYBRID_SCATTER_FGD", r8_3)
int64_t r8_4
r8_4.b = mods.dp.d(temp10:temp11, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_HYBRID_SCATTER_BGD", r8_4)
int64_t r8_5
r8_5.b = mods.dp.d(temp16:temp17, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_RGB_COLOR_BUFFER", r8_5)
int32_t rbp_1 = divs.dp.d(temp16:temp17, 2) & 0x80000001

if (rbp_1 s< 0)
    rbp_1 = ((rbp_1 - 1) | 0xfffffffe) + 1

int32_t r14
r14.b = rbp_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_DISABLE_OUTPUT_MIP0", zx.q(r14))
return sub_1410b3fe0(arg2, u"COC_TILE_SIZE", 8) __tailcall
