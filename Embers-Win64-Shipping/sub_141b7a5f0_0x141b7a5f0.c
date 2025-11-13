// 函数: sub_141b7a5f0
// 地址: 0x141b7a5f0
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
arg1[0x40].d = 0
*(arg1 + 0x204) = 1
arg1[0x41] = 0
arg1[0x42].d = 0
arg1[0x43].w = 0x100
arg1[0x44] = 0
arg1[0x45].d = 0
arg1[0x46].w = 0x100
arg1[0x47] = 0
arg1[0x48].d = 0
__builtin_memset(&arg1[0x49], 0, 0x1c)
arg1[0x4d] = data_143e243c8
int64_t* rbx = data_143e243c8
int64_t r8 = *sub_140b58170(&arg_8, "NormalText", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_4 = (*(*rbx + 0x88))(rbx, data_143e243e0)

if (rax_4 == 0)
    rax_4 = sub_140e13900()

arg1[0x4e] = rax_4
*(arg1 + 0x278) = zx.o(0)
arg1[0x51].b = 1
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0x54].d = 0x3f800000
*(arg1 + 0x2a4) = 1
arg1[0x55] = 0
arg1[0x56].d = 0
arg1[0x57].d = 0
*(arg1 + 0x2bc) = 1
arg1[0x58] = 0
arg1[0x59].d = 0
*(arg1 + 0x2d1) = 0
*(arg1 + 0x2d3) = 0
__builtin_memset(&arg1[0x5b], 0, 0x25)
arg1[0x60] = 0
arg1[0x61].d = 0
arg1[0x62] = 0
arg1[0x63] = 0
*(arg1 + 0x95) = 4
return arg1
