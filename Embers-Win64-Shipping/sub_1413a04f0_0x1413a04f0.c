// 函数: sub_1413a04f0
// 地址: 0x1413a04f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(divs.dp.d(temp2:temp3, 2))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"USE_ATTENUATION_TERM", r8)
int32_t rbx
rbx.b = mods.dp.d(temp8:temp9, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ENABLE_TWO_SIDED_GEOMETRY", zx.q(rbx))
return sub_1410b3fe0(arg2, DIM_DEFERRED_MATERIAL_MODE", zx.q(divs.dp.d(temp8:temp9, 2) s% 3))
    __tailcall
