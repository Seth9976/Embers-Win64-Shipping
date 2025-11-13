// 函数: sub_1414c02e0
// 地址: 0x1414c02e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0xffff
__builtin_memset(arg1 + 0x11a, 0, 0x16)
*(arg1 + 0x130) = arg3
sub_141396480(arg2, arg1 + 0x118)
sub_1419c6ab0(arg1 + 0x11a, arg2[3], u"LowResColorTexelSize", 0)
sub_1419c7530(arg1 + 0x120, arg2[3], u"LowResDepthTexture", 0)
sub_1419c7530(arg1 + 0x124, arg2[3], u"LowResColorTexture", 0)
sub_1419c7530(arg1 + 0x128, arg2[3], u"BilinearClampedSampler", 0)
sub_1419c7530(arg1 + 0x12c, arg2[3], u"PointClampedSampler", 0)
return arg1
