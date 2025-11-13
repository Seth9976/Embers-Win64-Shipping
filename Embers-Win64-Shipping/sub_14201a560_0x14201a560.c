// 函数: sub_14201a560
// 地址: 0x14201a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*(arg1 + 0x214) &= 0xfffffffd
*(arg1 + 0x3a) |= 2
*(arg1 + 0x89) |= 0x88
*(arg1 + 0x214) |= 0x1d
*arg1 = &data_14329f9f0
arg1[5] = &data_14329ff28
arg1[0x45].b = 0
arg1[7].b = 4
arg1[0x3e].d = 0x43960000
*(arg1 + 0x20c) = 0x41400000
arg1[0x42].b = 4
uint128_t zmm0 = data_14399f720
*(arg1 + 0x214) |= 0x80
*(arg1 + 0x270) = zmm0
arg1[0x43].d = 0x41200000
*(arg1 + 0x21c) = 0x41200000
arg1[0x44] = 0x3c888889
*(arg1 + 0x22c) = data_143dbb1f8.q
*(arg1 + 0x234) = data_143dbb200
return arg1
