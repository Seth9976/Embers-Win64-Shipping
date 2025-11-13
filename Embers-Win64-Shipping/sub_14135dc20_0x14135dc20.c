// 函数: sub_14135dc20
// 地址: 0x14135dc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_1 = zx.q(*(arg1 + 4)) & 0x80000003

if (r8_1.d s< 0)
    r8_1 = zx.q(((r8_1.d - 1) | 0xfffffffc) + 1)

sub_1410b3fe0(arg2, u"MOTION_BLUR_QUALITY", r8_1)
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEX", 8)
return sub_1410b3fe0(arg2, u"THREADGROUP_SIZEY", 8) __tailcall
