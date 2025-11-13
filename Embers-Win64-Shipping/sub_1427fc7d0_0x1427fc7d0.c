// 函数: sub_1427fc7d0
// 地址: 0x1427fc7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0x30102
arg1[4] = 0
*arg1 = &data_1434d14c0
arg1[0xc] = 0
arg1[3] = &data_1434d1610
arg1[2] = 0
class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int32_t var_38 = 0x5e
int32_t* rax_1 = (*(*rax + 8))(rax, 0x80, "NonTrackedAlloc", 
    "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\physxextensions\src\E"
"xtPrismaticJoint.h", 
    0x5e)
int32_t var_14 = 0x7eaaaaaa
arg1[0xd] = rax_1
int128_t zmm0 = *arg2
int32_t var_10 = 0xfeaaaaaa
float zmm2 = zmm0.d * 0.00999999978f
int64_t var_20 = 0
float var_18

var_18 = zmm2 >= 1.11158902e+38f ? 1.11158902e+38f : zmm2

zmm0.d = zmm0.d f+ zmm0.d
rax_1[0x1b] = 0x501502f9
rax_1[0x1c] = 0x40490fdb
int32_t var_24 = zmm0.d
*(rax_1 + 0x50) = 0.o
*(rax_1 + 0x60) = var_18.q
rax_1[0x1a] = 0xfeaaaaaa
var_38.q = arg5
rax_1[0x1d].w = 0
sub_1427ed250(arg1, rax_1, arg3, arg4, 0x5e, arg6)
return arg1
