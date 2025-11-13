// 函数: sub_14135e770
// 地址: 0x14135e770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r8 s/ 7)
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(divs.dp.d(temp4:temp5, 2))
int32_t rdx_7 = temp10 & 3
int32_t rax_4 = temp11 + rdx_7
int32_t temp12
int32_t temp13
temp12:temp13 = sx.q(rax_4 s>> 2)
sub_1410b3fe0(arg2, u"TAA_PASS_CONFIG", zx.q(r8 s% 7))
int64_t r8_2
r8_2.b = mods.dp.d(temp4:temp5, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"TAA_FAST", r8_2)
sub_1410b3fe0(arg2, u"TAA_SCREEN_PERCENTAGE_RANGE", zx.q((rax_4 & 3) - rdx_7))
int64_t r8_4
r8_4.b = mods.dp.d(temp12:temp13, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"TAA_UPSAMPLE_FILTERED", r8_4)
int32_t rbp_1 = divs.dp.d(temp12:temp13, 2) & 0x80000001

if (rbp_1 s< 0)
    rbp_1 = ((rbp_1 - 1) | 0xfffffffe) + 1

int32_t r15
r15.b = rbp_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"TAA_DOWNSAMPLE", zx.q(r15))
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEX", 8)
return sub_1410b3fe0(arg2, u"THREADGROUP_SIZEY", 8) __tailcall
