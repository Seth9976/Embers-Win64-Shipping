// 函数: sub_141122610
// 地址: 0x141122610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x148)

if (result == 0)
    return result

sub_1419925c0(result, arg1)
*(result + 0x118) = 0
__builtin_memset(result + 0x120, 0, 0x26)
sub_1407862f0(result + 0x118, arg1[3], u"CopyInterpolatedVertexData")
sub_1407862f0(result + 0x120, arg1[3], u"CopySurfelData")
int64_t* rbx = arg1[3]
sub_1407862f0(result + 0x128, rbx, u"InterpolatedVertexData")
sub_1407862f0(result + 0x130, rbx, u"SurfelData")
sub_1407862f0(result + 0x138, rbx, u"VPLFlux")
sub_1419c6ab0(result + 0x140, arg1[3], u"NumSurfels", 0)
return result
