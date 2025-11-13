// 函数: sub_1427ff7f0
// 地址: 0x1427ff7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0x30100
arg1[4] = 0
*arg1 = &data_1434d1a28
arg1[0xc] = 0
arg1[3] = &data_1434d1b58
arg1[2] = 0
class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int32_t var_38 = 0x5f
int32_t* rax_1 = (*(*rax + 8))(rax, 0x80, "NonTrackedAlloc", 
    "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\physxextensions\src\E"
"xtSphericalJoint.h", 
    0x5f)
var_38.q = arg5
arg1[0xd] = rax_1
sub_1427ed250(arg1, rax_1, arg3, arg4, 0x5f, arg6)
int64_t var_20 = 0
rax_1[0x1e] = 0x501502f9
int32_t var_24 = 0x3f000000
int32_t var_10 = 0x3fc90fdb
*(rax_1 + 0x50) = 0.o
*(rax_1 + 0x60) = _mm_unpacklo_ps(0x3dcccccd, 0x3fc90fdb)
rax_1[0x1a] = 0x3fc90fdb
rax_1[0x1f].w = 0
return arg1
