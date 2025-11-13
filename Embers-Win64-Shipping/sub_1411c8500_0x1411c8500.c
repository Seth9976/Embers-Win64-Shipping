// 函数: sub_1411c8500
// 地址: 0x1411c8500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141441490(arg1, arg2)
*(arg1 + 0x130) = 0
*(arg1 + 0x138) = 0
__builtin_memset(arg1 + 0x13a, 0, 0x36)
int64_t* rbx_1 = arg2[3]
sub_1419c7530(arg1 + 0x130, rbx_1, u"HeightfieldDescriptions", 0)
sub_1419c6ab0(arg1 + 0x134, rbx_1, u"NumHeightfields", 0)
sub_1411d9b00(arg1 + 0x13a, arg2[3])
sub_1419c6ab0(arg1 + 0x14a, arg2[3], u"LightDirection", 0)
sub_1419c6ab0(arg1 + 0x150, arg2[3], u"LightColor", 0)
sub_1419c6ab0(arg1 + 0x156, arg2[3], u"SkyLightIndirectScale", 0)
sub_1419c7530(arg1 + 0x15c, arg2[3], u"HeightfieldShadowing", 0)
sub_1419c7530(arg1 + 0x160, arg2[3], u"HeightfieldShadowingSampler", 0)
sub_1419c6ab0(arg1 + 0x164, arg2[3], u"WorldToLight", 0)
sub_1419c6ab0(arg1 + 0x16a, arg2[3], u"LightFunctionParameters", 0)
return arg1
