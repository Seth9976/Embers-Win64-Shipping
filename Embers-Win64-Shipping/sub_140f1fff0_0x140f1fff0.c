// 函数: sub_140f1fff0
// 地址: 0x140f1fff0
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
arg1[0x34].w = 0x101
arg1[0x35] = 0
arg1[0x36].d = 0
arg1[0x37].w = 0x100
arg1[0x38].w = 0x100
arg1[0x39] = 0
arg1[0x3a].d = 0
arg1[0x3b].d = 0
*(arg1 + 0x1e0) = data_14399f5c0
arg1[0x3e].b = 0
arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x41].b = 1
arg1[0x42] = 0
arg1[0x43].d = 0
*(arg1 + 0x220) = data_14399f5c0
arg1[0x46].b = 0
arg1[0x47] = 0
arg1[0x48] = 0
arg1[0x49].b = 1
arg1[0x4a] = 0
arg1[0x4b].d = 0
int64_t* rbx = data_143e243c8
int64_t r8 = *sub_140b58170(&arg_8, "Slider", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_3 = (*(*rbx + 0x88))(rbx, data_143e24440)

if (rax_3 == 0)
    rax_3 = sub_140e13680()

arg1[0x4c] = rax_3
arg1[0x4d].d = 0x3c23d70a
*(arg1 + 0x26c) = 1
arg1[0x4e] = 0
arg1[0x4f].d = 0
arg1[0x50].d = 0x3f800000
*(arg1 + 0x284) = 1
arg1[0x51] = 0
arg1[0x52].d = 0
arg1[0x53].d = 0
*(arg1 + 0x29c) = 0x3f800000
arg1[0x54].b = 1
arg1[0x55] = 0
arg1[0x56].d = 0
arg1[0x57] = 0
arg1[0x58].d = 0
arg1[0x59] = 0
arg1[0x5a].d = 0
arg1[0x5b] = 0
arg1[0x5c].d = 0
arg1[0x5d] = 0
arg1[0x5e].d = 0
return arg1
