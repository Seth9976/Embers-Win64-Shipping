// 函数: sub_14220ad50
// 地址: 0x14220ad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0xffff
*arg1 = 0xffffffff
arg1[2] = 3
char rax = arg1[3].b
*(arg1 + 0xe) &= 0x30
*(arg1 + 0xd) = 0x19
arg1[3].b = (rax & 8) | 0x40
*(arg1 + 0xf) = (*(arg1 + 0xf) & 0xfd) | 1
arg1[4] = 0x3f800000
arg1[5] = 0x3f800000
arg1[6] = 0x3f800000
*(arg1 + 0x1c) = data_143f3a508
arg1[9].w = 0x108
sub_142259c00(&arg1[0xa])
__builtin_memset(&arg1[0x12], 0, 0x14)
arg1[0x17] = 0x42c80000
sub_140d3a3a0(&arg1[0x18], nullptr)
*(arg1 + 0x68) = 0x3c23d70a
*(arg1 + 0x70) = data_143dbb1f8.q
arg1[0x1e] = data_143dbb200
*(arg1 + 0x7c) = 0
arg1[0x21] = 0
arg1[0x22] = 0x3f800000
arg1[0x23] = 0x3f800000
arg1[0x24] = 0x3f800000
arg1[0x25] = 0x3f800000
__builtin_memset(&arg1[0x26], 0, 0x11)
*(arg1 + 0xac) = 0
arg1[0x2d] = 0x3f800000
*(arg1 + 0xb8) = 0
arg1[0x31] = 0x3f800000
*(arg1 + 0xc8) = 0x3f800000
__builtin_memset(&arg1[0x34], 0, 0x20)
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &arg1[0x3c])
arg1[0x3e] = 0xffffffff
arg1[0x3f] = 0
arg1[0x40] = 0xffffffff
arg1[0x41] = 0
*(arg1 + 0x108) = 0
arg1[0x44] = 0
__builtin_memset(&arg1[0x46], 0, 0x18)
int64_t* rax_4 = sub_142565030()

if (rax_4[0x23] == 0)
    int64_t rdx_1 = *rax_4
    (*(rdx_1 + 0x390))(rax_4, rdx_1)

arg1[0x30] = *(rax_4[0x23] + 0x98)
return arg1
