// 函数: sub_140f1edc0
// 地址: 0x140f1edc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a96170(arg1)
arg1[3].b = 0
arg1[4] = 0
arg1[5].d = 0
arg1[6] = 0
arg1[7] = 0
*(arg1 + 0x44) = 0
arg1[9].b = 1
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc].w = 0x101
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf].b = data_1439ae51c
*(arg1 + 0x79) = 1
arg1[0x10] = 0
arg1[0x11].d = 0
arg1[0x12].d = 0x3f800000
*(arg1 + 0x94) = 0
*(arg1 + 0x96) = 0
arg1[0x16].b = 0
*(arg1 + 0xb4) = 0
arg1[0x17] = 0
arg1[0x18].d = 0
uint128_t zmm2 = zx.o(data_143dbb1f0)
arg1[0x19].d = data_143dbb1f0.d
arg1[0x1a].b = 1
*(arg1 + 0xcc) = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = 0
arg1[0x2b].b = 0
uint64_t arg_8 = zmm2.q
sub_140a96170(&arg1[0x2c])
arg1[0x2f].b = 0
arg1[0x30] = 0
arg1[0x31].d = 0
arg1[0x32] = 0
arg1[0x33] = 0
sub_140a96170(&arg1[0x34])
arg1[0x37].b = 0
arg1[0x38] = 0
arg1[0x39].d = 0
sub_140a96170(&arg1[0x3a])
arg1[0x3d].b = 0
arg1[0x3e] = 0
arg1[0x3f].d = 0
sub_140a96170(&arg1[0x40])
arg1[0x43].b = 0
arg1[0x44] = 0
arg1[0x45].d = 0
__builtin_memset(&arg1[0x46], 0, 0x14)
*(arg1 + 0x244) = 1
arg1[0x49] = 0
arg1[0x4a].d = 0
arg1[0x4b].w = 0x100
arg1[0x4c] = 0
arg1[0x4d].d = 0
arg1[0x4e].w = 0x100
arg1[0x4f] = 0
arg1[0x50].d = 0
int64_t* rbx = data_143e243c8
int64_t r8 = *sub_140b58170(&arg_8, "NormalText", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_3 = (*(*rbx + 0x88))(rbx, data_143e243e0)

if (rax_3 == 0)
    rax_3 = sub_140e13900()

arg1[0x51] = rax_3
sub_140d93b50(&arg1[0x52])
arg1[0x5c].b = 0
arg1[0x5d] = 0
arg1[0x5e].d = 0
*(arg1 + 0x2f8) = zx.o(0)
arg1[0x61].b = 1
arg1[0x62] = 0
arg1[0x63].d = 0
arg1[0x64].d = 0x3f800000
*(arg1 + 0x324) = 1
arg1[0x65] = 0
arg1[0x66].d = 0
arg1[0x67].d = 0
*(arg1 + 0x33c) = 1
arg1[0x68] = 0
arg1[0x69].d = 0
arg1[0x6a].w = 0x100
arg1[0x6b] = 0
arg1[0x6c].d = 0
__builtin_memset(&arg1[0x6d], 0, 0x2c)
arg1[0x73] = 0
arg1[0x74].d = 0
arg1[0x75] = 0
arg1[0x76].d = 0
arg1[0x77].w = 0x101
arg1[0x78] = 0
arg1[0x79].d = 0
arg1[0x7a].w = 0x100
arg1[0x7b] = 0
arg1[0x7c].d = 0
arg1[0x7d].w = 0x101
arg1[0x7e] = 0
arg1[0x7f].d = 0
arg1[0x80].w = 0x100
arg1[0x81] = 0
arg1[0x82].d = 0
arg1[0x83].w = 0x101
arg1[0x84] = 0
arg1[0x85].d = 0
arg1[0x86].w = 0x101
arg1[0x87] = 0
arg1[0x88].d = 0
arg1[0x89] = 0
arg1[0x8a].d = 0
arg1[0x8b] = 0
arg1[0x8c].d = 0
arg1[0x8d] = 0
arg1[0x8e].d = 0
arg1[0x8f] = 0
arg1[0x90].d = 0
arg1[0x91] = 0
arg1[0x92].d = 0
arg1[0x93] = 0
arg1[0x94].d = 0
arg1[0x95] = 0
arg1[0x96].d = 0
arg1[0x97] = 0
arg1[0x98].d = 0
arg1[0x99].w = 0
arg1[0x9a].w = 0x100
arg1[0x9b] = 0
arg1[0x9c].d = 0
arg1[0x9d].w = 0x100
arg1[0x9e] = 0
arg1[0x9f].d = 0
*(arg1 + 0x501) = 0
*(arg1 + 0x503) = 0
*(arg1 + 0x95) = 1
return arg1
