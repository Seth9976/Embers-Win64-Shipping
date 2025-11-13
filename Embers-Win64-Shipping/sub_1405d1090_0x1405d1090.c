// 函数: sub_1405d1090
// 地址: 0x1405d1090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0
*(arg1 + 0x11c) = 0
__builtin_memset(arg1 + 0x11e, 0, 0x1e)
sub_1419c6ab0(arg1 + 0x118, arg2[3], u"PixelUVSize", 0)
sub_1419c6ab0(arg1 + 0x11e, arg2[3], u"RadialDistortionCoefs", 0)
sub_1419c6ab0(arg1 + 0x124, arg2[3], u"TangentialDistortionCoefs", 0)
sub_1419c6ab0(arg1 + 0x12a, arg2[3], u"DistortedCameraMatrix", 0)
sub_1419c6ab0(arg1 + 0x130, arg2[3], u"UndistortedCameraMatrix", 0)
sub_1419c6ab0(arg1 + 0x136, arg2[3], u"OutputMultiplyAndAdd", 0)
return arg1
