// 函数: sub_140f64430
// 地址: 0x140f64430
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
int64_t* rbx = data_143e243c8
int64_t r8 = *sub_140b58170(&arg_8, "ProgressBar", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_3 = (*(*rbx + 0x88))(rbx, data_143e24420)

if (rax_3 == 0)
    rax_3 = sub_140e13500()

arg1[0x34] = rax_3
arg1[0x35].d = 0
*(arg1 + 0x1b4) = 0
arg1[0x37].b = 1
arg1[0x38] = 0
arg1[0x39].d = 0
int128_t zmm0_1 = data_14399f5c0
char var_37 = 1
int64_t var_30 = 0
*(arg1 + 0x1d0) = zmm0_1
arg1[0x3c].b = 0
arg1[0x3d] = 0
arg1[0x3e] = 0
arg1[0x3f].b = 1
arg1[0x40] = 0
arg1[0x41].d = 0
arg1[0x42] = 0x3f800000
arg1[0x43].b = 1
arg1[0x44] = 0
arg1[0x45].d = 0
__builtin_memset(&arg1[0x46], 0, 0x18)
arg1[0x49].d = 0x40000000
char rax_4 = data_1439ae520
char var_38 = rax_4
arg1[0xf].b = rax_4
int32_t var_28 = 0
*(arg1 + 0x79) = 1
sub_1407473e0(&arg1[0x10], &var_30)
sub_140745b20(&var_30)
return arg1
