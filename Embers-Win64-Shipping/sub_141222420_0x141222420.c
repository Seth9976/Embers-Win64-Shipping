// 函数: sub_141222420
// 地址: 0x141222420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x158)

if (result == 0)
    return result

sub_1414415d0(result, arg1)
*(result + 0x140) = 0xffff
*(result + 0x142) = 0xffff
*(result + 0x144) = 0xffff
__builtin_memset(result + 0x146, 0, 0x12)
int64_t* rbx = arg1[3]
sub_1419c75a0(result + 0x140, rbx, u"PrecomputedLightingBuffer", 0)
sub_1419c75a0(result + 0x142, rbx, u"IndirectLightingCache", 0)
sub_1419c75a0(result + 0x144, rbx, u"LightmapResourceCluster", 0)
sub_1419c6ab0(result + 0x146, arg1[3], u"BuiltLightingAndSelectedFlags", 0)
sub_1419c6ab0(result + 0x14c, arg1[3], u"LightMapResolutionScale", 0)
sub_1419c6ab0(result + 0x152, arg1[3], u"LightMapDensityDisplayOptions", 0)
sub_1419c75a0(result + 0x138, arg1[3], data_143e822e0, 0)
return result
