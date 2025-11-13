// 函数: sub_14135dd80
// 地址: 0x14135dd80
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
int32_t temp20
int32_t temp21
temp20:temp21 = sx.q(divs.dp.d(temp14:temp15, 2))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ES2_USE_BLOOM", r8)
int64_t r8_1
r8_1.b = mods.dp.d(temp8:temp9, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ES2_USE_SUN", r8_1)
int64_t r8_2
r8_2.b = mods.dp.d(temp14:temp15, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ES2_USE_DOF", r8_2)
int64_t r8_3
r8_3.b = mods.dp.d(temp20:temp21, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ES2_USE_EYEADAPTATION", r8_3)
int32_t rbp_1 = divs.dp.d(temp20:temp21, 2) & 0x80000001

if (rbp_1 s< 0)
    rbp_1 = ((rbp_1 - 1) | 0xfffffffe) + 1

int32_t r14
r14.b = rbp_1 == 1
return sub_1405d3490(arg2 + 0x2a8, u"METAL_MSAA_HDR_DECODE", zx.q(r14)) __tailcall
