// 函数: sub_142787910
// 地址: 0x142787910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04530(arg1, arg2)
*arg1 = &data_1434abac0
int32_t arg_8 = 0x437a0000
arg1[0x87] = 0
arg1[5] = &data_1434ac368
arg1[0x3e] = &data_1434ac398
arg1[0x86] = &data_1434ac3f0
arg1[0xa5] = 0
arg1[0xa6] = 0
arg1[0xa7].b = 1
*(arg1 + 0x53c) = 0
arg1[0xa8].w = 0x104
*(arg1 + 0x544) = 0
arg1[0xa9].d = 0x64
arg1[0xaa] = 0
arg1[0xab].d = 1
sub_140638750(&arg1[0xaa], 1, 0)
*arg1[0xaa] = arg_8
arg1[0xac].b = 0
*(arg1 + 0x564) = 0
arg1[0xad].d = 0x3f800000
arg1[0xb0].b = 0
__builtin_memset(arg1 + 0x584, 0, 0x18)
arg1[0xb4].b = 0
arg1[0xb5] = 0
arg1[0xb6].d = 0
*(arg1 + 0x5b4) = 0
arg1[0xb7].d = 0x200
*(arg1 + 0x5bc) = 0
arg1[0xb8].d = 0x42480000
*(arg1 + 0x5c4) = 1
arg1[0xb9].w = 0
*(arg1 + 0x5cc) = 0x200
arg1[0xba].b = 0
*(arg1 + 0x5d4) = 0x42480000
arg1[0xbb].d = 1
*(arg1 + 0x5dc) = 0
arg1[0xbc].d = 0x200
*(arg1 + 0x5e4) = 0x43480000
arg1[0xbd].d = 0x461c4000
__builtin_memset(&arg1[0xbe], 0, 0x30)
arg1[0xc4].d = 0xffffffff
__builtin_memset(arg1 + 0x624, 0, 0x14)
*(arg1 + 0x63c) = 0
arg1[0xc8] = 0
arg1[0xc9] = 0
arg1[0xca].d = 0x10000
*(arg1 + 0x654) = 0
arg1[0xcb].d = 0xffffffff
*(arg1 + 0x65c) = 0
arg1[0xcc].w = 0x100
__builtin_memset(arg1 + 0x664, 0, 0x20)
arg1[0xd1].d = 0
__builtin_memset(&arg1[0xd2], 0, 0x18)
__builtin_memset(&arg1[0xdd], 0, 0x38)
sub_14220ad50(&arg1[0xe4])
int32_t rax_1 = data_143f885e8
arg1[0x10b] = 0
arg1[0x10c] = 0
*(arg1 + 0x3a) |= 2
*(arg1 + 0x89) |= 0x88
*(arg1 + 0x65c) = rax_1 + 3
int64_t zmm2 = data_143dbb1fc
float zmm3[0x4] = data_143dbb1f8
float temp0[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
data_143f885e8 = rax_1 + 3
int32_t var_28 = 0
arg1[0xdc].d = 0x7f7fffff
int32_t var_40 = 0
float var_34 = data_143dbb200[0]
int32_t var_24 = 0
float var_3c[0x4]
var_3c[0].q = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg1 + 0x6c4) = var_3c
*(arg1 + 0x6d4) = temp0.q
*(arg1 + 0x6dc) = 0
int64_t rsi = sx.q(arg1[0x10c].d)
int32_t rax_4 = (rsi + 3).d
arg1[0x10c].d = rax_4

if (rax_4 s> *(arg1 + 0x864))
    sub_140679a80(&arg1[0x10b])

int16_t* rax_6 = rsi + arg1[0x10b]
*rax_6 = 0
rax_6[1].b = 0
arg1[0x10d].d = 0
sub_141f256b0(arg1, 0)
sub_142221d60(&arg1[0x55], 7)
uint64_t rbx_1 = *sub_140b58260(&arg_8, u"GameplayEventDispatcher", 1)
int64_t* rax_8 = sub_142776d90()
arg1[0x10e] = sub_140d1dc20(arg2, arg1, rbx_1, rax_8, rax_8, 1, 0)
int64_t* rcx_8 = arg1[0xe1]
arg1[0xe1] = 0

if (rcx_8 != 0)
    (**rcx_8)(rcx_8, 1)

return arg1
