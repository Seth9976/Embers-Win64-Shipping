// 函数: sub_14108b140
// 地址: 0x14108b140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0xffff
__builtin_memset(arg1 + 0x11a, 0, 0x18)
*(arg1 + 0x132) = 0
sub_141396480(arg2, arg1 + 0x118)
int64_t* rbx_1 = arg2[3]
sub_1419c7530(arg1 + 0x11a, rbx_1, u"AtmosphereTransmittanceTexture", 0)
sub_1419c7530(arg1 + 0x11e, rbx_1, u"AtmosphereTransmittanceTextureSampler", 0)
sub_1419c7530(arg1 + 0x122, rbx_1, u"AtmosphereIrradianceTexture", 0)
sub_1419c7530(arg1 + 0x126, rbx_1, u"AtmosphereIrradianceTextureSampler", 0)
sub_1419c7530(arg1 + 0x12a, rbx_1, u"AtmosphereInscatterTexture", 0)
sub_1419c7530(arg1 + 0x12e, rbx_1, u"AtmosphereInscatterTextureSampler", 0)
sub_1419c7530(arg1 + 0x132, arg2[3], u"OcclusionTexture", 0)
sub_1419c7530(arg1 + 0x136, arg2[3], u"OcclusionTextureSampler", 0)
return arg1
