// 函数: sub_14068cff0
// 地址: 0x14068cff0
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
int64_t* rbx = data_143e243c8
int64_t* rax_1 = sub_140b58170(&arg_8, "NormalEditableText", 1)
int64_t rax_3 = (*(*rbx + 0x88))(rbx, data_143e24408, *rax_1)

if (rax_3 == 0)
    rax_3 = sub_140e13360()

arg1[0x46] = rax_3
sub_140d93b50(&arg1[0x47])
arg1[0x51].b = 0
arg1[0x53].d = 0
arg1[0x52] = 0
__builtin_memcpy(&arg1[0x54], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
__builtin_memset(&arg1[0x57], 0, 0x11)
arg1[0x5a] = 0
arg1[0x5b].d = 0
arg1[0x5c] = 0
arg1[0x5d].b = 0
arg1[0x5e] = 0
arg1[0x5f].d = 0
arg1[0x60] = 0
arg1[0x61].b = 0
arg1[0x62] = 0
arg1[0x63].d = 0
arg1[0x64] = 0
arg1[0x65].b = 0
arg1[0x66] = 0
arg1[0x67].d = 0
arg1[0x68].w = 0x100
arg1[0x69] = 0
arg1[0x6a].d = 0
arg1[0x6b].w = 0x100
arg1[0x6c] = 0
arg1[0x6d].d = 0
arg1[0x6e].w = 0x101
arg1[0x6f] = 0
arg1[0x70].d = 0
arg1[0x71].w = 0x100
arg1[0x72] = 0
arg1[0x73].d = 0
arg1[0x74].w = 0x100
arg1[0x75] = 0
arg1[0x76].d = 0
arg1[0x77].w = 0x101
arg1[0x78] = 0
arg1[0x79].d = 0
arg1[0x7a].d = 0
*(arg1 + 0x3d4) = 1
arg1[0x7b] = 0
arg1[0x7c].d = 0
arg1[0x7d].w = 0x101
arg1[0x7e] = 0
arg1[0x7f].d = 0
arg1[0x80] = 0
arg1[0x81].d = 0
arg1[0x82] = 0
arg1[0x83].d = 0
arg1[0x84] = 0
arg1[0x85].d = 0
arg1[0x86] = 0
arg1[0x87].d = 0
arg1[0x88].d = 0
*(arg1 + 0x444) = 1
arg1[0x89] = 0
arg1[0x8a].d = 0
arg1[0x8b].w = 0x100
arg1[0x8c] = 0
arg1[0x8d].d = 0
arg1[0x8e] = 0
arg1[0x8f].d = 0
arg1[0x90] = 0
arg1[0x91].d = 0
arg1[0x92] = 0
arg1[0x93].d = 0
arg1[0x94].d = 0
*(arg1 + 0x4a4) = 1
arg1[0x95] = 0
arg1[0x96].d = 0
arg1[0x97].b = 0
arg1[0x98].w = 0x100
arg1[0x99] = 0
arg1[0x9a].d = 0
arg1[0x9c] = 0
arg1[0x9d].d = 0
*(arg1 + 0x4f1) = 0
*(arg1 + 0x4f3) = 0
arg1[0x9b].w = 0x100
*(arg1 + 0x95) = 1
return arg1
