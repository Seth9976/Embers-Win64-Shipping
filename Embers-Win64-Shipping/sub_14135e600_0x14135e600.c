// 函数: sub_14135e600
// 地址: 0x14135e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
uint64_t rdx_1 = zx.q(r8 s/ 3)
int32_t rsi_1 = rdx_1.d & 0x80000001

if (rsi_1 s< 0)
    rsi_1 = ((rsi_1 - 1) | 0xfffffffe) + 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rdx_1.d)
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q((temp5 - temp4) s>> 1)
int32_t temp12
int32_t temp13
temp12:temp13 = sx.q(divs.dp.d(temp6:temp7, 2))
sub_1410b3fe0(arg2, u"SUBSURFACE_RECOMBINE_MODE", zx.q(r8 - (rdx_1 * 3).d))
sub_1410b3fe0(arg2, u"SUBSURFACE_RECOMBINE_QUALITY", zx.q(rsi_1))
int64_t r8_3
r8_3.b = mods.dp.d(temp6:temp7, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"SUBSURFACE_PROFILE_CHECKERBOARD", r8_3)
int64_t r8_4
r8_4.b = mods.dp.d(temp12:temp13, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"SUBSURFACE_HALF_RES", r8_4)
int32_t rbp_1 = divs.dp.d(temp12:temp13, 2) & 0x80000001

if (rbp_1 s< 0)
    rbp_1 = ((rbp_1 - 1) | 0xfffffffe) + 1

int32_t rsi_4
rsi_4.b = rbp_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"SUBSURFACE_FORCE_SEPARABLE", zx.q(rsi_4))
sub_1410b3fe0(arg2, u"SUBSURFACE_RADIUS_SCALE", 0x400)
return sub_1410b3fe0(arg2, u"SUBSURFACE_KERNEL_SIZE", 3) __tailcall
