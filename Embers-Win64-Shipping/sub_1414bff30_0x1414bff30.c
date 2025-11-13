// 函数: sub_1414bff30
// 地址: 0x1414bff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
__builtin_memset(arg1 + 0x118, 0, 0x18)
__builtin_memset(arg1 + 0x130, 0, 0x1a)
int64_t* rbx_1 = arg2[3]
sub_1407862f0(arg1 + 0x118, rbx_1, u"InterpolatedVertexData")
sub_1407862f0(arg1 + 0x120, rbx_1, u"SurfelData")
sub_1407862f0(arg1 + 0x128, rbx_1, u"VPLFlux")
sub_1419c6ab0(arg1 + 0x130, arg2[3], u"SurfelStartIndex", 0)
sub_1419c6ab0(arg1 + 0x136, arg2[3], u"NumSurfelsToGenerate", 0)
sub_1419c6ab0(arg1 + 0x13c, arg2[3], u"NumTriangles", 0)
sub_1419c7530(arg1 + 0x142, arg2[3], u"TriangleVertexData", 0)
sub_1419c7530(arg1 + 0x146, arg2[3], u"TriangleCDFs", 0)
return arg1
