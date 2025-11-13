// 函数: sub_1410ea270
// 地址: 0x1410ea270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141441490(arg1, arg2)
*(arg1 + 0x130) = 0
*(arg1 + 0x134) = 0
__builtin_memset(arg1 + 0x136, 0, 0x18)
sub_1419c6ab0(arg1 + 0x130, arg2[3], u"SvPositionToDecal", 0)
sub_1419c6ab0(arg1 + 0x136, arg2[3], u"DecalToWorld", 0)
sub_1419c6ab0(arg1 + 0x13c, arg2[3], u"WorldToDecal", 0)
sub_1419c6ab0(arg1 + 0x142, arg2[3], u"DecalOrientation", 0)
sub_1419c6ab0(arg1 + 0x148, arg2[3], u"DecalParams", 0)
return arg1
