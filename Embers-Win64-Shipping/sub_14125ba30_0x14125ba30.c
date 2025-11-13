// 函数: sub_14125ba30
// 地址: 0x14125ba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1414415d0(arg1, arg2)
*(arg1 + 0x140) = 0xffff
*(arg1 + 0x142) = 0xffff
*(arg1 + 0x144) = 0xffff
int64_t* rbx = arg2[3]
sub_1419c75a0(arg1 + 0x140, rbx, u"PrecomputedLightingBuffer", 0)
sub_1419c75a0(arg1 + 0x142, rbx, u"IndirectLightingCache", 0)
sub_1419c75a0(arg1 + 0x144, rbx, u"LightmapResourceCluster", 0)
sub_1419c75a0(arg1 + 0x138, arg2[3], data_143e8eba0, 0)
return arg1
