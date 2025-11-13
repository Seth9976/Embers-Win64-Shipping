// 函数: sub_141122030
// 地址: 0x141122030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x138)

if (result == 0)
    return result

sub_1419925c0(result, arg1)
*(result + 0x118) = 0xffff
__builtin_memset(result + 0x11a, 0, 0x1c)
sub_1419c7530(result + 0x11a, arg1[3], u"OcclusionTexture", 0)
sub_1419c7530(result + 0x11e, arg1[3], u"OcclusionSampler", 0)
sub_1419c7530(result + 0x122, arg1[3], u"LinearDepthTexture", 0)
sub_1419c7530(result + 0x126, arg1[3], u"LinearDepthSampler", 0)
sub_1419c6ab0(result + 0x12a, arg1[3], u"bOnlyOnRenderedOpaque", 0)
sub_1419c6ab0(result + 0x130, arg1[3], u"bUseLinearDepthTexture", 0)
sub_141396480(arg1, result + 0x118)
return result
