// 函数: sub_141b7aa70
// 地址: 0x141b7aa70
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
arg1[0x34] = data_143e244b0
void* rax_2 = data_143e244b8
arg1[0x35] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0x36].w = 0x101
arg1[0x37] = 0
arg1[0x38].d = 0
arg1[0x39].d = 0x100
*(arg1 + 0x1cc) = 0x100
*(arg1 + 0x1ce) = 1
arg1[0x3a] = 0
arg1[0x3b] = 0
int64_t* rax_3 = sub_140f756a0(&arg_8)
arg1[0x3c].d = *rax_3
*(arg1 + 0x1e4) = *(rax_3 + 4)
arg1[0x3d].b = 1
arg1[0x3e] = 0
arg1[0x3f].d = 0
*(arg1 + 0x95) = 3
return arg1
