// 函数: sub_140dd83d0
// 地址: 0x140dd83d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec93c0
sub_140ddbe10(&arg1[1])
sub_140ddbe10(&arg1[0x9b])
sub_140ddbb70(&arg1[0x135])
arg1[0x158] = &data_142d8ad18
arg1[0x159].d = 0x42000000
*(arg1 + 0xacc) = 0x42000000
*(arg1 + 0xad4) = 0
*(arg1 + 0xadc) = 0
*(arg1 + 0xae0) = data_14399f5c0
arg1[0x15e].b = 0
__builtin_memset(&arg1[0x15f], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0x165].b = 0
arg1[0x164].d = zmm1.d
arg1[0x163].d = zmm1.d
int128_t zmm0 = zmm1:4.d
*(arg1 + 0xb24) = zmm0.d
*(arg1 + 0xb1c) = zmm0.d
*(arg1 + 0xb2c) = 3
arg1[0x166] = 0
arg1[0x167] = 0
arg1[0x168].b &= 0xfc
__builtin_memcpy(&arg1[0x169], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
arg1[0x16c] = 0
arg1[0x16d] = 0
return arg1
