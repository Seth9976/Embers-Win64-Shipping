// 函数: sub_140e93090
// 地址: 0x140e93090
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

int64_t* rbx = data_143e243c8
int64_t r8 = *sub_140b58170(&arg_8, "Checkbox", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_5 = (*(*rbx + 0x88))(rbx, data_143e243d8)

if (rax_5 == 0)
    rax_5 = sub_140e13090()

arg1[0x36] = rax_5
*(arg1 + 0x1bc) = 0
arg1[0x38] = 0
arg1[0x39].d = 0
arg1[0x3a].w = 0x100
arg1[0x3b] = 0
arg1[0x3c].d = 0
arg1[0x3d].d = 0
*(arg1 + 0x1ec) = 1
__builtin_memset(&arg1[0x3e], 0, 0x11)
arg1[0x41] = 0
arg1[0x42].d = 0
arg1[0x43].d = 0
*(arg1 + 0x21c) = 1
arg1[0x44] = 0
arg1[0x45].d = 0
__builtin_memcpy(&arg1[0x46], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
__builtin_memset(&arg1[0x49], 0, 0x11)
arg1[0x4c] = 0
arg1[0x4d].d = 0
__builtin_memcpy(&arg1[0x4e], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
__builtin_memset(&arg1[0x51], 0, 0x11)
arg1[0x54] = 0
arg1[0x55].d = 0
arg1[0x56].b = 1
arg1[0x57] = 0
arg1[0x58].d = 0
arg1[0x5c].b = 0
arg1[0x60].b = 0
arg1[0x64].b = 0
__builtin_memset(&arg1[0x65], 0, 0x48)
return arg1
