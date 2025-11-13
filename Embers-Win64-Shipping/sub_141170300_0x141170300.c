// 函数: sub_141170300
// 地址: 0x141170300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0
__builtin_memset(arg1 + 0x11c, 0, 0x28)
int64_t* rbx_1 = arg2[3]
sub_1419c7530(arg1 + 0x118, rbx_1, u"SrcTexture", 0)
sub_1419c7530(arg1 + 0x11c, rbx_1, u"DstTexture", 0)
sub_1419c6ab0(arg1 + 0x120, rbx_1, u"TransformType", 0)
sub_1419c6ab0(arg1 + 0x126, rbx_1, u"SrcRectMin", 0)
sub_1419c6ab0(arg1 + 0x12c, rbx_1, u"SrcRectMax", 0)
sub_1419c6ab0(arg1 + 0x132, rbx_1, u"DstExtent", 0)
sub_1419c6ab0(arg1 + 0x138, rbx_1, u"DstRect", 0)
sub_1419c6ab0(arg1 + 0x13e, rbx_1, u"BrightPixelGain", 0)
return arg1
