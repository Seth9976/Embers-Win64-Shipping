// 函数: sub_14068c640
// 地址: 0x14068c640
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
arg1[0x10] = 0
arg1[0x11].d = 0
*(arg1 + 0x79) = 1
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

arg1[0x36] = 0
__builtin_memcpy(&arg1[0x37], 
    "\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x01", 0x11)
arg1[0x3a] = 0
arg1[0x3b].d = 0
arg1[0x3c] = 0
arg1[0x3d].d = 0
arg1[0x3e] = 0
arg1[0x3f].d = 0
arg1[0x40] = 0
arg1[0x41].d = 0
arg1[0x42] = 0
arg1[0x43].d = 0
int64_t* rdi = data_143e243c8
arg1[0x44] = (*(*rdi + 0x48))(rdi, *sub_140b58170(&arg_8, "Border", 1), 0)
arg1[0x46] = 0
arg1[0x47].d = 0
arg1[0x45].b = 1
arg1[0x48].d = 0x3f800000
*(arg1 + 0x244) = 0x3f800000
arg1[0x4a] = 0
arg1[0x4b].d = 0
arg1[0x49].b = 1
arg1[0x4c].d = 0x3f800000
*(arg1 + 0x264) = 0x3f800000
arg1[0x4e] = 0
arg1[0x4f].d = 0
arg1[0x4d].b = 1
__builtin_memcpy(&arg1[0x50], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 0x11)
arg1[0x53] = 0
arg1[0x54].d = 0
*(arg1 + 0x2a8) = data_14399f5c0
arg1[0x57].b = 0
arg1[0x58] = 0
arg1[0x59] = 0
arg1[0x5b] = 0
arg1[0x5c].d = 0
arg1[0x5a].b = 1
__builtin_memcpy(&arg1[0x5d], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 0x11)
arg1[0x60] = 0
arg1[0x61] = 0
arg1[0x63] = 0
arg1[0x64].d = 0
arg1[0x62].b = 1
arg1[0x66] = 0
arg1[0x67].d = 0
arg1[0x68].b = 0
arg1[0x65].w = 0x101
return arg1
