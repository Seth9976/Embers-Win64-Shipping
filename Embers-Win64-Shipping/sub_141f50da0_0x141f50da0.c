// 函数: sub_141f50da0
// 地址: 0x141f50da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f042f0(arg1, arg2)
*arg1 = &data_14327d600
arg1[5] = &data_14327db28
arg1[0x4d] = 0
memset(&arg1[0x4e], 0, 0x90)
arg1[0x61] = 0
arg1[0x64] = 0
memset(&arg1[0x66], 0, 0x90)
arg1[0x79] = 0
arg1[0x7b] = 0
arg1[0x40].d = 0x3f800000
*(arg1 + 0x204) = 0x3f800000
arg1[0x42].d = 0x3f800000
arg1[0x47].d = 0x48127c00
*(arg1 + 0x14f) = 1
*(arg1 + 0x23d) = 1
*(arg1 + 0x265) = 1
arg1[0x4a].d = 0x447a0000
arg1[0x4b] = 0x3f800000
arg1[0x4c].d = data_14399f634
int32_t rax_2 = *(arg1 + 0x20c) & 0xfffffeff
*(arg1 + 0x234) = 0x80
int128_t zmm0 = data_14399f5e0
arg1[0x60].d = 0x3f800000
*(arg1 + 0x20c) = rax_2 | 0x640
*(arg1 + 0x240) = zmm0
arg1[0x78].d = 0x3f800000
arg1[0x43].d = 4
return arg1
