// 函数: sub_1410e9d90
// 地址: 0x1410e9d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0xffff
__builtin_memset(arg1 + 0x11a, 0, 0x32)
__builtin_memset(arg1 + 0x14c, 0, 0x6c)
sub_141396480(arg2, arg1 + 0x118)
sub_1410edb20(arg1 + 0x11a, arg2[3])
sub_1410edbe0(arg1 + 0x14c, arg2[3])
sub_1410edd00(arg1 + 0x16a, arg2[3])
int64_t* rbx = arg2[3]
sub_1407862f0(arg1 + 0x184, rbx, u"InterpolatedVertexData")
sub_1407862f0(arg1 + 0x18c, rbx, u"SurfelData")
sub_1407862f0(arg1 + 0x194, rbx, u"VPLFlux")
sub_1419c7530(arg1 + 0x19c, arg2[3], u"TileConeDepthRanges", 0)
sub_1419c6ab0(arg1 + 0x1a0, arg2[3], u"TileListGroupSize", 0)
sub_1419c6ab0(arg1 + 0x1a6, arg2[3], u"VPLGatherRadius", 0)
sub_1419c7530(arg1 + 0x1ac, arg2[3], u"StepBentNormalBuffer", 0)
sub_1407862f0(arg1 + 0x1b0, arg2[3], u"SurfelIrradiance")
return arg1
