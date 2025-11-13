// 函数: sub_141092020
// 地址: 0x141092020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x238)

if (result == 0)
    return 0

sub_1419925c0(result, arg1)
*(result + 0x118) = 0xffff
sub_14108bb70(result + 0x11a)
__builtin_memset(result + 0x212, 0, 0x22)
sub_141396000(result + 0x11a, arg1[3])
sub_141396480(arg1, result + 0x118)
sub_1419c6ab0(result + 0x212, arg1[3], u"ScreenSpaceAOParams", 0)
sub_1419c6ab0(result + 0x220, arg1[3], u"HZBRemapping", 0)
sub_1419c7530(result + 0x226, arg1[3], u"RandomNormalTexture", 0)
sub_1419c7530(result + 0x22a, arg1[3], u"RandomNormalTextureSampler", 0)
sub_1419c6ab0(result + 0x22e, arg1[3], u"GTAOParams", 0)
sub_1419c7530(result + 0x218, arg1[3], u"OutTexture", 0)
sub_1419c7530(result + 0x21c, arg1[3], u"DepthOutTexture", 0)
return result
