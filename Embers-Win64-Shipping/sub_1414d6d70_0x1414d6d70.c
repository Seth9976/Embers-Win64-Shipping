// 函数: sub_1414d6d70
// 地址: 0x1414d6d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(divs.dp.d(temp2:temp3, 2))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DYNAMICALLY_SHADOWED", r8)
int64_t r8_1
r8_1.b = mods.dp.d(temp8:temp9, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"INVERSE_SQUARED_FALLOFF", r8_1)
int32_t rdi_1 = divs.dp.d(temp8:temp9, 2) & 0x80000001

if (rdi_1 s< 0)
    rdi_1 = ((rdi_1 - 1) | 0xfffffffe) + 1

int32_t rsi
rsi.b = rdi_1 == 1
return sub_1405d3490(arg2 + 0x2a8, u"USE_TEMPORAL_REPROJECTION", zx.q(rsi)) __tailcall
