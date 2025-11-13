// 函数: sub_1410f1220
// 地址: 0x1410f1220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x160)

if (result == 0)
    return result

sub_141441490(result, arg1)
__builtin_memset(result + 0x130, 0, 0x18)
__builtin_memset(result + 0x148, 0, 0x12)
int64_t* rbx = arg1[3]
sub_1407862f0(result + 0x130, rbx, u"InterpolatedVertexData")
sub_1407862f0(result + 0x138, rbx, u"SurfelData")
sub_1407862f0(result + 0x140, rbx, u"VPLFlux")
sub_1419c6ab0(result + 0x148, arg1[3], u"SurfelStartIndex", 0)
sub_1419c6ab0(result + 0x14e, arg1[3], u"NumSurfelsToGenerate", 0)
sub_1419c6ab0(result + 0x154, arg1[3], u"Instance0InverseTransform", 0)
return result
