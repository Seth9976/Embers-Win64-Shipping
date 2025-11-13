// 函数: sub_1411c8ad0
// 地址: 0x1411c8ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = 0
__builtin_memset(arg1 + 0x122, 0, 0x30)
int64_t* rbx_1 = arg2[3]
sub_1419c7530(arg1 + 0x118, rbx_1, u"HeightfieldDescriptions", 0)
sub_1419c6ab0(arg1 + 0x11c, rbx_1, u"NumHeightfields", 0)
sub_1411d9b00(arg1 + 0x122, arg2[3])
sub_1419c6ab0(arg1 + 0x132, arg2[3], u"WorldToShadow", 0)
sub_1419c6ab0(arg1 + 0x138, arg2[3], u"ShadowmapMinMax", 0)
sub_1419c6ab0(arg1 + 0x13e, arg2[3], u"ShadowDepthBias", 0)
sub_1419c6ab0(arg1 + 0x144, arg2[3], u"CascadeDepthMinMax", 0)
sub_1419c7530(arg1 + 0x14a, arg2[3], u"ShadowDepthTexture", 0)
sub_1419c7530(arg1 + 0x14e, arg2[3], u"ShadowDepthTextureSampler", 0)
return arg1
