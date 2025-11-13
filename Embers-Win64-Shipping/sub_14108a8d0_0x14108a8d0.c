// 函数: sub_14108a8d0
// 地址: 0x14108a8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1414415d0(arg1, arg2)
*(arg1 + 0x140) = 0xffff
*(arg1 + 0x142) = 0xffff
*(arg1 + 0x144) = 0xffff
*(arg1 + 0x146) = 0xffff
int64_t* rbx = arg2[3]
sub_1419c75a0(arg1 + 0x140, rbx, u"PrecomputedLightingBuffer", 0)
sub_1419c75a0(arg1 + 0x142, rbx, u"IndirectLightingCache", 0)
sub_1419c75a0(arg1 + 0x144, rbx, u"LightmapResourceCluster", 0)
sub_141090e80(arg2[3], arg1 + 0x138)
sub_1419c75a0(arg1 + 0x146, arg2[3], u"ReflectionCapture", 0)
return arg1
