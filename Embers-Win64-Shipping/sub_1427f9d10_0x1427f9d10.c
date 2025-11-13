// 函数: sub_1427f9d10
// 地址: 0x1427f9d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0x30104
arg1[4] = 0
*arg1 = &data_1434d0fc8
arg1[0xc] = 0
arg1[3] = &data_1434d1130
arg1[2] = 0
class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int32_t var_28 = 0x5d
int32_t* rax_1 = (*(*rax + 8))(rax, 0x70, "NonTrackedAlloc", 
    "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\physxextensions\src\E"
"xtDistanceJoint.h", 
    0x5d)
var_28.q = arg5
arg1[0xd] = rax_1
sub_1427ed250(arg1, rax_1, arg3, arg4, 0x5d, arg6)
*(rax_1 + 0x5c) = 0
*(rax_1 + 0x50) = 0
rax_1[0x16] = *arg2 * 0.0250000004f
rax_1[0x19].w = 2
return arg1
