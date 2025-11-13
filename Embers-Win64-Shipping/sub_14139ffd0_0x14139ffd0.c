// 函数: sub_14139ffd0
// 地址: 0x14139ffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r8 s/ 0x21)
sub_1410b3fe0(arg2, u"STATIC_SAMPLE_COUNT", zx.q(r8 s% 0x21))
int64_t r8_2
r8_2.b = mods.dp.d(temp4:temp5, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"USE_COMBINE_ADDITIVE", r8_2)
int32_t rdi_1 = divs.dp.d(temp4:temp5, 2) & 0x80000001

if (rdi_1 s< 0)
    rdi_1 = ((rdi_1 - 1) | 0xfffffffe) + 1

int32_t rbp
rbp.b = rdi_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"USE_MANUAL_UV_BORDER", zx.q(rbp))
sub_1410b3fe0(arg2, u"SAMPLE_COUNT_MAX", 0x80)
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEX", 8)
return sub_1410b3fe0(arg2, u"THREADGROUP_SIZEY", 8) __tailcall
