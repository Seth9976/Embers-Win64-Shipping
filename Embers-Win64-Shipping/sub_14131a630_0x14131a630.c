// 函数: sub_14131a630
// 地址: 0x14131a630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_HYBRID_SCATTER_FGD", r8)
int32_t rbx_1 = divs.dp.d(temp2:temp3, 2) & 0x80000001

if (rbx_1 s< 0)
    rbx_1 = ((rbx_1 - 1) | 0xfffffffe) + 1

int32_t rdi
rdi.b = rbx_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_HYBRID_SCATTER_BGD", zx.q(rdi))
return sub_1410b3fe0(arg2, u"COC_TILE_SIZE", 8) __tailcall
