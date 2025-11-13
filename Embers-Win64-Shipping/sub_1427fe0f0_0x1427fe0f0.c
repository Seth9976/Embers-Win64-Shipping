// 函数: sub_1427fe0f0
// 地址: 0x1427fe0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0x30101
arg1[4] = 0
*arg1 = &data_1434d1760
arg1[0xc] = 0
arg1[3] = &data_1434d18e0
arg1[2] = 0
class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int32_t var_38 = 0x6b
int32_t* rax_1 = (*(*rax + 8))(rax, 0x90, "NonTrackedAlloc", 
    "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\physxextensions\src\E"
"xtRevoluteJoint.h", 
    0x6b)
var_38.q = arg5
arg1[0xd] = rax_1
sub_1427ed250(arg1, rax_1, arg3, arg4, 0x6b, arg6)
int32_t var_24 = 0x3f000000
rax_1[0x14] = 0
int32_t var_10 = 0xbfc90fdb
int64_t var_20 = 0
rax_1[0x21] = 0x501502f9
rax_1[0x22] = 0x40490fdb
*(rax_1 + 0x5c) = 0.o
rax_1[0x15] = 0x7f7fffff
rax_1[0x16] = 0x3f800000
*(rax_1 + 0x6c) = _mm_unpacklo_ps(0x3dcccccd, 0x3fc90fdb)
rax_1[0x1d] = 0xbfc90fdb
rax_1[0x23].w = 0
return arg1
