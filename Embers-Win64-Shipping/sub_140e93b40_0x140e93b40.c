// 函数: sub_140e93b40
// 地址: 0x140e93b40
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
uint128_t zmm1 = zx.o(data_143dbb1f0)
arg1[0x19].d = data_143dbb1f0.d
arg1[0x1a].b = 1
*(arg1 + 0xcc) = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = 0
arg1[0x2b].b = 0
sub_140a96170(&arg1[0x2c])
arg1[0x2f].b = 0
arg1[0x30] = 0
arg1[0x31].d = 0
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = data_143e244b0
void* rax_2 = data_143e244b8
arg1[0x35] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0x36] = data_143e244b0
void* rax_4 = data_143e244b8
arg1[0x37] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg1[0x38] = data_143e244b0
void* rax_6 = data_143e244b8
arg1[0x39] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[0x3a] = data_143e244b0
void* rax_8 = data_143e244b8
arg1[0x3b] = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

__builtin_memcpy(&arg1[0x3c], 
    "\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x01", 0x11)
arg1[0x3f] = 0
arg1[0x40].d = 0
arg1[0x41].b = 1
sub_140a96170(&arg1[0x42])
arg1[0x45].b = 0
arg1[0x46] = 0
arg1[0x47].d = 0
sub_140a96170(&arg1[0x48])
arg1[0x4b].b = 0
arg1[0x4c] = 0
arg1[0x4d].d = 0
sub_140e15430()
arg1[0x4e] = &data_143e24500
arg1[0x4f].b = 1
arg1[0x50] = 0
arg1[0x51].d = 0
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0x54] = 0
arg1[0x55].d = 0
arg1[0x56].b = 0
arg1[0x57] = 0
arg1[0x58].d = 0
arg1[0x59] = 0
arg1[0x5a].d = 0
arg1[0x5d].b = 1
*(arg1 + 0x2d8) = data_143dbb1e0
arg1[0x5e] = 0
arg1[0x5f].d = 0
return arg1
