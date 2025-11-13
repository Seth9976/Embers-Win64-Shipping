// 函数: sub_141421a30
// 地址: 0x141421a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(divs.dp.d(temp2:temp3, 2))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_FURTHEST", r8)
int32_t rbx
rbx.b = mods.dp.d(temp8:temp9, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_CLOSEST", zx.q(rbx))
int32_t rbp_1 = divs.dp.d(temp8:temp9, 2) & 0x80000003

if (rbp_1 s< 0)
    rbp_1 = ((rbp_1 - 1) | 0xfffffffc) + 1

return sub_1410b3fe0(arg2, u"DIM_MIP_LEVEL_COUNT", zx.q(rbp_1 + 1)) __tailcall
