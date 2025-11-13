// 函数: sub_14135dc80
// 地址: 0x14135dc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*(arg1 + 4)) & 0x80000003

if (r8.d s< 0)
    r8 = zx.q(((r8.d - 1) | 0xfffffffc) + 1)

return sub_1410b3fe0(arg2, u"MOTION_BLUR_QUALITY", r8) __tailcall
