// 函数: sub_1413eed90
// 地址: 0x1413eed90
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
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ENABLE_TWO_SIDED_GEOMETRY", r8)
int64_t r8_1
r8_1.b = mods.dp.d(temp8:temp9, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ENABLE_MATERIALS", r8_1)
int32_t rbx
rbx.b = mods.dp.d(temp14:temp15, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DECOUPLE_SAMPLE_GENERATION", zx.q(rbx))
int32_t r14_1 = divs.dp.d(temp14:temp15, 2) & 0x80000001

if (r14_1 s< 0)
    r14_1 = ((r14_1 - 1) | 0xfffffffe) + 1

return sub_1410b3fe0(arg2, u"USE_HAIR_LIGHTING", zx.q(r14_1)) __tailcall
