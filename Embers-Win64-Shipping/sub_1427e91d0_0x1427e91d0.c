// 函数: sub_1427e91d0
// 地址: 0x1427e91d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0x30105
arg1[4] = 0
*arg1 = &data_1434cfec0
arg1[0xc] = 0
arg1[3] = &data_1434d0060
arg1[2] = 0
arg1[0xe].w = 0x101
class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int32_t var_48 = 0x47
int32_t* rax_1 = (*(*rax + 8))(rax, 0x190, "NonTrackedAlloc", 
    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
"xtD6Joint.cpp", 
    0x47)
var_48.q = arg5
arg1[0xd] = rax_1
sub_1427ed250(arg1, rax_1, arg3, arg4, 0x47, arg6)
__builtin_memset(&rax_1[0x14], 0, 0x18)
int32_t var_20 = 0xbfc90fdb
float temp0[0x4] = _mm_unpacklo_ps(0x3dcccccd, 0x3fc90fdb)
int64_t var_30 = 0
int32_t var_34 = 0x3f000000
int64_t var_30_1 = 0
*(rax_1 + 0x80) = 0.o
int32_t var_34_1 = 0x3f000000
int32_t var_20_1 = 0x3fc90fdb
*(rax_1 + 0x90) = temp0.q
*(rax_1 + 0x9c) = 0.o
rax_1[0x26] = 0xbfc90fdb
*(rax_1 + 0xac) = (_mm_unpacklo_ps(0x3dcccccd, 0x3fc90fdb)).q
rax_1[0x2d] = 0x3fc90fdb
float zmm1[0x4] = *arg2
zmm1[0] = zmm1[0] * 0.00999999978f
*(rax_1 + 0x68) = zx.o(0)
*(rax_1 + 0x78) = (_mm_unpacklo_ps(zmm1, 0x7f7fffff)).q
float zmm2 = *arg2 * 9.99999997e-07f
float temp0_3[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
rax_1[0x5f] = zmm2
*(rax_1 + 0xb8) = temp0_3.q
*(rax_1 + 0xc8) = (_mm_unpacklo_ps(zx.o(0), 0)).q
*(rax_1 + 0xc0) = 0x7f7fffff
float temp0_5[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
*(rax_1 + 0xd0) = 0x7f7fffff
*(rax_1 + 0xd8) = temp0_5.q
*(rax_1 + 0xe0) = 0x7f7fffff
*(rax_1 + 0xe8) = (_mm_unpacklo_ps(zx.o(0), 0)).q
*(rax_1 + 0xf0) = 0x7f7fffff
*(rax_1 + 0xf8) = (_mm_unpacklo_ps(zx.o(0), 0)).q
*(rax_1 + 0x100) = 0x7f7fffff
*(rax_1 + 0x108) = (_mm_unpacklo_ps(zx.o(0), 0)).q
*(rax_1 + 0x110) = 0x7f7fffff
*(rax_1 + 0x118) = 0
rax_1[0x48] = 0
*(rax_1 + 0x124) = 0x3f800000
__builtin_memset(&rax_1[0x4b], 0, 0x20)
rax_1[0x60] = 0x501502f9
rax_1[0x61] = 0x40490fdb
return arg1
