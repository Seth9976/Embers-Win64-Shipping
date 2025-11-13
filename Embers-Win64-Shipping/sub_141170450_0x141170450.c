// 函数: sub_141170450
// 地址: 0x141170450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0
__builtin_memset(arg1 + 0x11c, 0, 0x1c)
int64_t* rbx = arg2[3]
sub_1419c7530(arg1 + 0x118, rbx, u"SrcTexture", 0)
sub_1419c7530(arg1 + 0x11c, rbx, u"DstTexture", 0)
sub_1419c6ab0(arg1 + 0x120, rbx, u"SrcRectMin", 0)
sub_1419c6ab0(arg1 + 0x126, rbx, u"SrcRectMax", 0)
sub_1419c6ab0(arg1 + 0x12c, rbx, u"DstExtent", 0)
sub_1419c6ab0(arg1 + 0x132, rbx, u"TransformType", 0)
*(arg1 + 0x138) = 0
sub_1419c7530(arg1 + 0x138, arg2[3], u"FilterTexture", 0)
return arg1
