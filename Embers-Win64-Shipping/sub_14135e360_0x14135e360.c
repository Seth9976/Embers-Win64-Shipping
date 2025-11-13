// 函数: sub_14135e360
// 地址: 0x14135e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 4)
uint64_t r8_1 = zx.q(rax) & 0x80000001

if (r8_1.d s< 0)
    r8_1 = zx.q(((r8_1.d - 1) | 0xfffffffe) + 1)

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax)
int32_t rax_3 = (temp3 - temp2) s>> 1
uint64_t rdx_2 = zx.q(rax_3 s/ 3)
int32_t rsi_1 = rdx_2.d & 0x80000001

if (rsi_1 s< 0)
    rsi_1 = ((rsi_1 - 1) | 0xfffffffe) + 1

int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rdx_2.d)
int32_t rax_9 = (temp7 - temp6) s>> 1
int32_t rdi_1 = rax_9 & 0x80000001

if (rdi_1 s< 0)
    rdi_1 = ((rdi_1 - 1) | 0xfffffffe) + 1

int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(rax_9)
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q((temp9 - temp8) s>> 1)
sub_1410b3fe0(arg2, u"SUBSURFACE_PASS", r8_1)
sub_1410b3fe0(arg2, u"SUBSURFACE_QUALITY", zx.q(rax_3 - (rdx_2 * 3).d))
sub_1410b3fe0(arg2, u"SUBSURFACE_SAMPLER_TYPE", zx.q(rsi_1))
sub_1410b3fe0(arg2, u"SUBSURFACE_TYPE", zx.q(rdi_1))
int64_t r8_7
r8_7.b = mods.dp.d(temp10:temp11, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"SUBSURFACE_HALF_RES", r8_7)
int32_t rbp_1 = divs.dp.d(temp10:temp11, 2) & 0x80000001

if (rbp_1 s< 0)
    rbp_1 = ((rbp_1 - 1) | 0xfffffffe) + 1

int32_t rsi_4
rsi_4.b = rbp_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"SUBSURFACE_FORCE_SEPARABLE", zx.q(rsi_4))
sub_1410b3fe0(arg2, u"SUBSURFACE_RADIUS_SCALE", 0x400)
sub_1410b3fe0(arg2, u"SUBSURFACE_KERNEL_SIZE", 3)
sub_1410b3fe0(arg2, u"SUBSURFACE_BURLEY_COMPUTE", 1)
sub_1410b3fe0(arg2, u"ENABLE_VELOCITY", 1)
return sub_1405d3490(arg2 + 0x2a8, u"SUBSURFACE_GROUP_SIZE", 8) __tailcall
