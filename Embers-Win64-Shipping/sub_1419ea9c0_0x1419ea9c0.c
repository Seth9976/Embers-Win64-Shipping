// 函数: sub_1419ea9c0
// 地址: 0x1419ea9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
int64_t* rcx = &arg1[0x66]
*arg1 = &data_143017530
arg1[0x45] = 0
arg1[0x46] = 0
__builtin_memset(&arg1[0x51], 0, 0x1c)
arg1[0x56] = 0
arg1[0x57] = 0
arg1[0x58].w = 0x600
arg1[0x59] = 0
arg1[0x5a] = 0
arg1[0x5b] = 6
arg1[0x5c].b = 2
__builtin_memset(&arg1[0x5e], 0, 0x40)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x6a].d = 0xffffffff
*(arg1 + 0x354) = 0
arg1[0x6c] = 0
arg1[0x6d].d = 0
arg1[0x6e] = 0
arg1[0x6f] = 0
*(arg1 + 0x384) = 1
*(arg1 + 0x391) = (*(arg1 + 0x391) & 0xf9) | 1
arg1[0x74].d &= 0xfffffff0
__builtin_memcpy(arg1 + 0x3a4, 
    "\x00\x00\x00\x41\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
sub_14220ad50(&arg1[0x79])
arg1[0xa2] = 0
void* rcx_2 = &arg1[0xa4]
arg1[0xa3] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0xa8].d = 0xffffffff
*(arg1 + 0x544) = 0
arg1[0xaa] = 0
arg1[0xab].d = 0
*(arg1 + 0x5b) &= 0xfe
arg1[0x21].d = 0x41200000
sub_141dd84c0(arg1, 0)
sub_141dd8f80(arg1, 0)
sub_141dd7d00(arg1, 0)
*(arg1 + 0x38c) |= 4
arg1[0x72].b |= 1
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"RootComponent0", 1)
int64_t* rax_4 = sub_1425881f0()
void* rax_5 = sub_140cd9110(arg1, rbx, rax_4, rax_4, 1, 0)
int32_t var_10 = 0x43800000
int32_t var_20 = 0x43800000
int64_t var_28 = _mm_unpacklo_ps(0x43000000, 0x43000000)
arg1[0x26] = rax_5
sub_141f48ee0(rax_5, &var_28)
*(arg1[0x26] + 0x14f) = 0
arg1[0x47].d = data_143dbb180.d
*(arg1 + 0x23c) = data_143dbb180:4.d
arg1[0x71].d = 0x3f800000
arg1[0x4f].d = 0x3f800000
*(arg1 + 0x38c) = (*(arg1 + 0x38c) & 0xfffffffd) | 1
int32_t rax_13 = arg1[0xa1].d & 0xfffffffd
arg1[0x48].d = 0xffffffff
*(arg1 + 0x50c) = 0
arg1[0xa1].d = rax_13 | 1
arg1[0x4d].d = 1
__builtin_strncpy(arg1 + 0x24c, "ff&?", 4)
*(arg1 + 0x264) = 0x3f400000
__builtin_memcpy(&arg1[0x4a], 
    "\x00\x00\x00\x3f\x00\x00\xa0\x3f\x00\x00\x40\x40\xcd\xcc\x4c\x3f\x01", 0x11)
arg1[0x78].d = 0x41800000
sub_142221760(&arg1[0x79], data_143f3a598)
int32_t rax_15 = data_143f22700
arg1[0x9f].d &= 0xfffffffe
arg1[0x70].d = rax_15
data_143f22700 = rax_15 + 1
return arg1
