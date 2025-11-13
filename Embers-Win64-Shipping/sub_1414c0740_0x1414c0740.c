// 函数: sub_1414c0740
// 地址: 0x1414c0740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0
*(arg1 + 0x11c) = 0
__builtin_memset(arg1 + 0x11e, 0, 0x30)
*(arg1 + 0x14e) = 0xffff
__builtin_memset(arg1 + 0x156, 0, 0x18)
sub_1419c6ab0(arg1 + 0x118, arg2[3], u"MinZ", 0)
sub_1419c6ab0(arg1 + 0x11e, arg2[3], u"ViewSpaceBoundingSphere", 0)
sub_1419c6ab0(arg1 + 0x124, arg2[3], u"ViewToVolumeClip", 0)
sub_1414c3c80(arg1 + 0x12a, arg2[3])
return arg1
