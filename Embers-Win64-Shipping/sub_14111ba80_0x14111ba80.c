// 函数: sub_14111ba80
// 地址: 0x14111ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0xffff
__builtin_memset(arg1 + 0x11a, 0, 0x1e)
__builtin_memset(arg1 + 0x138, 0, 0x24)
sub_141396480(arg2, arg1 + 0x118)
sub_1410edbe0(arg1 + 0x11a, arg2[3])
sub_1407862f0(arg1 + 0x138, arg2[3], u"TileConeAxisAndCos")
sub_1407862f0(arg1 + 0x140, arg2[3], u"TileConeDepthRanges")
sub_1419c6ab0(arg1 + 0x14e, arg2[3], u"NumGroups", 0)
sub_1419c6ab0(arg1 + 0x148, arg2[3], u"ViewDimensions", 0)
sub_1419c7530(arg1 + 0x154, arg2[3], u"DistanceFieldNormalTexture", 0)
sub_1419c7530(arg1 + 0x158, arg2[3], u"DistanceFieldNormalSampler", 0)
return arg1
