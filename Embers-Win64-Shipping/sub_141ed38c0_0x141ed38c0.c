// 函数: sub_141ed38c0
// 地址: 0x141ed38c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04700(arg1, arg2)
*arg1 = &data_1432636b0
arg1[5] = &data_143264188
arg1[0x27] = &data_1432641b8
arg1[0x28] = &data_143264228
arg1[0x5e].d &= 0xfffffff8
*(arg1 + 0x2f4) = 0
*(arg1 + 0x35c) = 0xffffffff
arg1[0x6c].d = 0
*(arg1 + 0x364) = 0xffffffff
arg1[0x6d].d = 0
*(arg1 + 0x36c) = 0xffffffff
__builtin_memset(&arg1[0x6e], 0, 0x14)
memset(arg1 + 0x2fc, 0, 0x88)
*(arg1 + 0x304) = 0x3f800000
arg1[0x7a] = data_143dbb1f8.q
arg1[0x7b].d = data_143dbb200
arg1[0x7c] = 0
arg1[0x89].d = 0xffffffff
*(arg1 + 0x44c) = 0
arg1[0x8a].d = 0xffffffff
*(arg1 + 0x454) = 0
arg1[0x8b].d = 0xffffffff
__builtin_memset(arg1 + 0x45c, 0, 0x14)
memset(&arg1[0x7d], 0, 0x88)
arg1[0x7e].d = 0x3f800000
sub_1423b9d00(&arg1[0x91])
arg1[0x91] = &data_143263690
arg1[0x99] = 0
sub_141ff42b0(&arg1[0x9b])
arg1[0xb2] = 0
arg1[0xb3].d = 0
*(arg1 + 0x59c) = 0x10
arg1[0xb4].b = 0
*(arg1 + 0x5a4) = 0
float zmm1[0x4] = data_143f3a950
*(arg1 + 0x5c0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x5b0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x5d0) = __andps_xmmxud_memxud(data_143f3a950, data_143f3a960)
arg1[0xbe] = 0
arg1[0xbf].d = 0
arg1[0xc0] = 0
arg1[0xc1].d = 0
int64_t rdx

if (data_143dbb3b4 == 0)
    int64_t arg_8 = 0
    rdx = 0
else
    rdx = arg1[3]

sub_141ee72c0(&arg1[0x99], rdx)
*(arg1 + 0x492) = (*(arg1 + 0x492) & 0xfb) | 2
sub_1423c9cb0(&arg1[0x91], 0)
arg1[0x3e].b |= 2
*(arg1 + 0x387) |= 0x20
char rdx_1 = arg1[0x3e].b
arg1[0x92].b = 4
__builtin_memcpy(&arg1[0x2a], 
    "\x00\x00\x80\x3f\x00\x00\x34\x42\x00\x00\xd2\x43\x00\x00\x00\x3f\x72\x0f\x33\x42\x8f\xc2\x35\x3f", 
    0x18)
*(arg1 + 0x16c) = 0x41000000
*(arg1 + 0x1dc) = 0
arg1[0x3c].d = 0x42200000
__builtin_memcpy(arg1 + 0x18c, 
    "\x00\x00\x16\x44\x00\x00\x96\x43\x00\x00\x96\x43\x00\x00\x16\x44\x00\x00\x16\x44\x00\x00\x00\x45", 
    0x18)
__builtin_memcpy(arg1 + 0x29c, 
    "\xcd\xcc\x4c\x3d\x08\x00\x00\x00\x02\x00\x00\x00\x00\x00\xfa\x43\x00\x00\xc8\x42\x00\x00\xc8\x42\x"
"00\x00\x00\x40\xcd\xcc\xcc\x3d\xcd\xcc\x4c\x3d\x0a\xd7\x23\x3d\x02\x2b\x07\x3d\x0a\xd7\x23\x3c\x0a"
"d7\x23\x3c\x00\x00\x80\x43\x00\x00\xc0\x43\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x3d\xcd\xcc\x4c\x3d\x00\x00"
"70\x41\x00\x00\x80\x40\x00\x00\x34\x41", 
    0x54)
arg1[0x53].d = 0
*(arg1 + 0x16a) = 2
*(arg1 + 0x26c) = 0xbf800000
arg1[0x4e].d = 0xbf800000
arg1[0x40].d = 0x42200000
*(arg1 + 0x204) = 0x43d20000
*(arg1 + 0x1c4) = 0x3d4ccccd
arg1[0x39].d = 0x40000000
*(arg1 + 0x1cc) = 0x41c80000
arg1[0x35].d = 0x40000000
arg1[0x36].d = 0x3cf83e10
*(arg1 + 0x1b4) = 0x45000000
*(arg1 + 0x1bc) = 0
arg1[0x41].d = 0x42c80000
*(arg1 + 0x1d4) = 0x42200000
arg1[0x3b].d = 0x3f800000
*(arg1 + 0x1e4) = (_mm_unpacklo_ps(zx.o(0), 0x43b40000)).q
*(arg1 + 0x1ec) = 0
*(arg1 + 0x240) = data_14399f720
int32_t var_10 = 0
*(arg1 + 0x25c) = data_143dbb1f8.q
*(arg1 + 0x264) = data_143dbb200
*(arg1 + 0x274) = data_143dbb1f8.q
*(arg1 + 0x27c) = data_143dbb200
arg1[0x78] = data_143dbb1f8.q
int32_t rax_4 = data_143dbb200
arg1[0x1e].b |= 0xe
*(arg1 + 0x1f3) |= 1
*(arg1 + 0x387) |= 0x1f
arg1[0x71].b &= 0xfc
*(arg1 + 0x38a) &= 0xee
arg1[0x79].d = rax_4
char rax_5 = *(arg1 + 0x1f2)
arg1[0x97] = 0
arg1[0x98] = 0
*(arg1 + 0x1f2) = (rax_5 & 0xf) | 0x30
*(arg1 + 0x125) = arg1[0x1e].b
char rax_7 = *(arg1 + 0x1f1)
*(arg1 + 0x384) = 0x401
*(arg1 + 0x386) = 1
*(arg1 + 0x1f1) = (rax_7 & 6) | 0xb8
char rax_8 = *(arg1 + 0x389)
__builtin_memcpy(arg1 + 0x20c, 
    "\x00\x00\x80\x3f\x00\x00\xfa\x43\x00\x1b\x37\x49\x00\x00\x40\xbf\x00\x00\x80\x3f\x00\x00\x80\xbf\x"
"00\x00\x7a\x43\x00\x00\x20\x40", 
    0x20)
*(arg1 + 0x389) = (rax_8 & 0xa7) | 0x21
arg1[0x9a] = 0x43700000
arg1[0x3e].b = (rdx_1 & 0xda) | 0x90
*(arg1 + 0x38c) = data_143dbb1f8.q
arg1[0x76].d |= 1
*(arg1 + 0x394) = data_143dbb200
arg1[0x73].d = 0
*(arg1 + 0x3b4) = 0xffffffff
arg1[0x77].d = 0
*(arg1 + 0x39c) = 0x43fa0000
*(arg1 + 0x170) = data_14399f720
arg1[0x30] = data_143dbb1f8.q
arg1[0x31].d = data_143dbb200
arg1[0x8e].d = 0x3dcccccd
arg1[0x8f].d = 0x41400000
*(arg1 + 0x47c) = 0x3f2b851f
arg1[0x90].d = 0x3f800000
*(arg1 + 0x484) = 0x41200000
return arg1
