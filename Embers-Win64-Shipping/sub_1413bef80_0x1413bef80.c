// 函数: sub_1413bef80
// 地址: 0x1413bef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1414415d0(arg1, arg2)
*(arg1 + 0x140) = 0xffffffff
*(arg1 + 0x144) = 0xffff
sub_1419c75a0(arg1 + 0x138, arg2[3], data_143ec50b0, 0)
int64_t* rbx_1 = arg2[3]
sub_1419c75a0(arg1 + 0x140, rbx_1, u"PrecomputedLightingBuffer", 0)
sub_1419c75a0(arg1 + 0x142, rbx_1, u"IndirectLightingCache", 0)
sub_1419c75a0(arg1 + 0x144, rbx_1, u"LightmapResourceCluster", 0)
return arg1
