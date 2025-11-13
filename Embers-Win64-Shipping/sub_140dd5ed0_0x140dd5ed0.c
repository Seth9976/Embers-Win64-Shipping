// 函数: sub_140dd5ed0
// 地址: 0x140dd5ed0
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
__builtin_memset(&arg1[0x32], 0, 0x14)
arg1[0x35] = sub_140dd3450(data_143e243c8, *sub_140b58170(&arg_8, "Window", 1), nullptr)
sub_140a96170(&arg1[0x36])
arg1[0x39].b = 0
arg1[0x3a] = 0
arg1[0x3b].d = 0
arg1[0x3c].w = 0x200
*(arg1 + 0x1e4) = data_143dbb1f0.d
arg1[0x3d].d = data_143dbb1f0:4.d
*(arg1 + 0x1ec) = data_143dbb1f0.d
arg1[0x3e].d = data_143dbb1f0:4.d
*(arg1 + 0x1f4) = 1
arg1[0x3f].d = 0
*(arg1 + 0x1fc) = 0x3f800000
arg1[0x40].d = 0x20000
*(arg1 + 0x204) = 0x100
arg1[0x41].d = 1
*(arg1 + 0x20c) = 0x1010100
arg1[0x42].b = 0
arg1[0x43].b = 0
arg1[0x44].b = 0
arg1[0x45].b = 0
arg1[0x46].b = 0
*(arg1 + 0x234) = 0x101
__builtin_memcpy(&arg1[0x47], 
    "\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x"
"00\x00\xa0\x40\x00\x00\xa0\x40\x00", 
    0x21)
arg1[0x4c] = data_143e244b0
void* rax_4 = data_143e244b8
arg1[0x4d] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return arg1
