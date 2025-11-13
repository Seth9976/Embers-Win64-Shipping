// 函数: sub_141f2ea50
// 地址: 0x141f2ea50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f509d0(arg1, arg2)
*arg1 = &data_1432732d0
arg1[5] = &data_143273cb0
arg1[0x3e] = &data_143273ce0
arg1[0xc7] = &data_143273d38
arg1[0xc9] = 0
arg1[0xcd].d |= 3
arg1[0xcc] = 0
arg1[0xce].d = 0x3f800000
*(arg1 + 0x66c) = 0
arg1[0xcf] = 0
arg1[0xd0] = 0
__builtin_memset(&arg1[0xd4], 0, 0x1b)
__builtin_memset(&arg1[0xd8], 0, 0x4b)
arg1[0xea] = 0
arg1[0xeb] = 0
__builtin_memset(&arg1[0xee], 0, 0x28)
float zmm1[0x4] = data_143f3b4b0
*(arg1 + 0x7c0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x7b0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x7d0) = __andps_xmmxud_memxud(data_143f3b4b0, data_143f3b4c0)
__builtin_memset(&arg1[0xfc], 0, 0x40)
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &arg1[0x104])
sub_1423b9d00(&arg1[0x105])
void* rcx_2 = &arg1[0x11e]
arg1[0x105] = &data_1432732b0
__builtin_memset(&arg1[0x119], 0, 0x28)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x122].d = 0xffffffff
*(arg1 + 0x914) = 0
arg1[0x124] = 0
void* rcx_3 = &arg1[0x128]
arg1[0x125].d = 0
arg1[0x126] = 0
arg1[0x127] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_1 = *(rcx_3 + 0x10)

if (rax_1 != 0)
    rcx_3 = rax_1

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x12c].d = 0xffffffff
*(arg1 + 0x964) = 0
arg1[0x12e] = 0
arg1[0x12f].d = 0
__builtin_memset(&arg1[0x130], 0, 0x30)
sub_1423b9d00(&arg1[0x136])
arg1[0x136] = &data_143273290
__builtin_memset(&arg1[0x13c], 0, 0x68)
__builtin_memset(&arg1[0x14b], 0, 0x1b)
__builtin_memset(&arg1[0x14f], 0, 0x1b)
arg1[0x153] = 0
arg1[0x154] = 0
arg1[0x155] = 2
arg1[0x156] = 0
arg1[0x157] = 0
arg1[0x158] = 2
char rax_2 = *(arg1 + 0x3a)
*(arg1 + 0x89) |= 0x80
*(arg1 + 0x8a) |= 0x10
*(arg1 + 0x71b) &= 0xbf
*(arg1 + 0x3a) = (rax_2 & 0xfe) | 2
arg1[7].b = 0
arg1[0xe2].d = 0x3f800000
*(arg1 + 0x5a4) = 0
*(arg1 + 0x714) = 0
sub_141f256b0(arg1, 0)
*(arg1 + 0x9ba) |= 6
*(arg1 + 0x832) |= 2
int32_t var_50 = 0x3f800000
*(arg1 + 0x694) = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
*(arg1 + 0x69c) = 0x3f800000
arg1[0x137].b = 3
arg1[0x106].w = 0x400
*(arg1 + 0x71b) |= 8
*(arg1 + 0x76c) = 0x3f800000
arg1[0x10b] = 0x43960000
*(arg1 + 0x734) = 0x3f800000
*(arg1 + 0x716) = 0
float var_48[0x4][0x4]
float (* rax_3)[0x4] = sub_141f5e2b0(arg1, &var_48, 0)
*(arg1 + 0x870) = *rax_3
*(arg1 + 0x880) = rax_3[1]
*(arg1 + 0x890) = rax_3[2]
float zmm0_1[0x4] = *(arg1 + 0x85c)
int128_t zmm1_1 = rax_3[3]
zmm0_1[0] = zmm0_1[0] * 0.0174532924f
*(arg1 + 0x8a0) = zmm1_1
float zmm0_2 = cosf(zmm0_1[0])
zmm1_1 = arg1[0x10b].d
*(arg1 + 0x71a) &= 0xdf
*(arg1 + 0x71e) &= 0xf7
*(arg1 + 0x71d) &= 7
zmm1_1.d = zmm1_1.d f* zmm1_1.d
*(arg1 + 0x722) = 2
arg1[0x10c].d = zmm0_2
*(arg1 + 0x724) = 0x3f800000
*(arg1 + 0x864) = zmm1_1.d
arg1[0xe5].d = 0x42c80000
*(arg1 + 0x72c) = 0x3dcccccd
arg1[0xe6].d = 0x38d1b717
arg1[0xe7].d = 0x3f800000
*(arg1 + 0x73c) = 0x3f800000
arg1[0xe8] = 0x3f800000
arg1[0xe9] = 0x3f800000
int64_t* rax_4 = sub_142565030()

if (rax_4[0x23] == 0)
    int64_t rdx_1 = *rax_4
    (*(rdx_1 + 0x390))(rax_4, rdx_1)

arg1[0xb5].b &= 0xfd
*(arg1 + 0x719) = *(rax_4[0x23] + 0xac) << 7 | (*(arg1 + 0x719) & 0x7f)
int64_t* rax_7 = sub_142565030()
void* rax_8 = rax_7[0x23]

if (rax_8 == 0)
    int64_t rdx_2 = *rax_7
    (*(rdx_2 + 0x390))(rax_7, rdx_2)
    rax_8 = rax_7[0x23]

int32_t rax_9 = *(rax_8 + 0x48)
*(arg1 + 0x89) |= 8
arg1[0xed].d = rax_9
arg1[0x10d].d = 0
*(arg1 + 0x20f) = 1
arg1[0xe4].w = 0
arg1[0xf4].d = 0xffffffff
*(arg1 + 0x7b0) = data_143dbb0c0
*(arg1 + 0x7c0) = data_143dbb0d0
*(arg1 + 0x7d0) = data_143dbb0e0
void arg_8
int64_t rcx_11 = *sub_141d43300(&arg_8)
*(arg1 + 0x719) &= 0xfe
*(arg1 + 0x719) |= 4
*(arg1 + 0x71a) |= 8
*(arg1 + 0x71e) &= 0xd8
__builtin_memset(&arg1[0x116], 0, 0x18)
arg1[0xf0] = rcx_11
return arg1
