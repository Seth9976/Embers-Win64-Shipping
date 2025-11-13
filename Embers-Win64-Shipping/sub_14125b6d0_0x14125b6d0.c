// 函数: sub_14125b6d0
// 地址: 0x14125b6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1414415d0(arg1, arg2)
*(arg1 + 0x140) = 0xffff
*(arg1 + 0x142) = 0xffff
*(arg1 + 0x144) = 0xffff
*(arg1 + 0x146) = 0xffffffff
__builtin_memset(arg1 + 0x14a, 0, 0x48)
int64_t* rbx_1 = arg2[3]
sub_1419c75a0(arg1 + 0x140, rbx_1, u"PrecomputedLightingBuffer", 0)
sub_1419c75a0(arg1 + 0x142, rbx_1, u"IndirectLightingCache", 0)
sub_1419c75a0(arg1 + 0x144, rbx_1, u"LightmapResourceCluster", 0)
sub_1419c75a0(arg1 + 0x138, arg2[3], data_143e8eba0, 0)
sub_1419c75a0(arg1 + 0x146, arg2[3], data_143f55890, 0)
sub_1419c75a0(arg1 + 0x148, arg2[3], data_143f555d0, 0)
sub_1419c7530(arg1 + 0x14a, arg2[3], u"ReflectionCubemap0", 0)
sub_1419c7530(arg1 + 0x156, arg2[3], u"ReflectionCubemapSampler0", 0)
sub_1419c7530(arg1 + 0x14e, arg2[3], u"ReflectionCubemap1", 0)
sub_1419c7530(arg1 + 0x15a, arg2[3], u"ReflectionCubemapSampler1", 0)
sub_1419c7530(arg1 + 0x152, arg2[3], u"ReflectionCubemap2", 0)
sub_1419c7530(arg1 + 0x15e, arg2[3], u"ReflectionCubemapSampler2", 0)
sub_1419c6ab0(arg1 + 0x162, arg2[3], u"ReflectionAverageBrigtness", 0)
sub_1419c6ab0(arg1 + 0x168, arg2[3], u"ReflectionPositionsAndRadii", 0)
sub_1419c6ab0(arg1 + 0x16e, arg2[3], u"LightPositionAndInvRadius", 0)
sub_1419c6ab0(arg1 + 0x174, arg2[3], u"LightColorAndFalloffExponent", 0)
sub_1419c6ab0(arg1 + 0x17a, arg2[3], u"NumDynamicPointLights", 0)
sub_1419c6ab0(arg1 + 0x186, arg2[3], u"SpotLightAngles", 0)
sub_1419c6ab0(arg1 + 0x180, arg2[3], u"SpotLightDirectionAndSpecularScale", 0)
sub_1419c6ab0(arg1 + 0x18c, arg2[3], u"CSMDebugHint", 0)
return arg1
