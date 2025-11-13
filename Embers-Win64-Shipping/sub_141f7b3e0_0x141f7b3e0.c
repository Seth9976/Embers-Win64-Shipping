// 函数: sub_141f7b3e0
// 地址: 0x141f7b3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
arg1[0x3e].d &= 0xfffffff8
arg1[0x41].d &= 0xfffffffe
*arg1 = &data_143283780
arg1[5] = &data_143283ca0
arg1[0x3f] = 0
arg1[0x40] = 0
*(arg1 + 0x20c) = 0x42c80000
arg1[0x42] = 0x42c80000
arg1[0x43].d = 0
*(arg1 + 0x21c) = 0x3f800000
arg1[0x44].d = 0x3f800000
*(arg1 + 0x224) = 1
*(arg1 + 0x234) = 0
*(arg1 + 0x23c) = 0x3f800000
arg1[0x48].d = 0x3f800000
*(arg1 + 0x244) = 1
arg1[0x49] = 0
arg1[0x4a].d = 0x3f800000
*(arg1 + 0x254) = 0x3f800000
arg1[0x4b].b = 1
*(arg1 + 0x25c) = 0x3f800000
arg1[0x4c].d = 0x3f800000
*(arg1 + 0x264) = 0x3f800000
arg1[0x4d] = 0x3f800000
arg1[0x4e] = 0
arg1[0x4f].d = 0
*(arg1 + 0x27c) = 2
arg1[0x51].d = 0
arg1[0x52].d = 0
*(arg1 + 0x28c) = 1
*(arg1 + 0x2a0) = data_143dbb0c0
*(arg1 + 0x2b0) = data_143dbb0d0
int128_t zmm0 = data_143dbb0e0
*(arg1 + 0x3a) |= 2
arg1[0x5a].w = 0
arg1[7].b = 0
*(arg1 + 0x2c0) = zmm0
return arg1
