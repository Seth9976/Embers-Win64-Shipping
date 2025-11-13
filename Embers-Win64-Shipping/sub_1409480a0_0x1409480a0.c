// 函数: sub_1409480a0
// 地址: 0x1409480a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
arg1[0x47].d = 1
arg1[0x46] = 0
*arg1 = &data_142e2c130
arg1[0x44] = &data_142e2c778
arg1[0x48] = 0
arg1[0x49] = 0
int32_t arg_8
arg1[0x1d] = *sub_140b58260(&arg_8, u"BeaconDriver", 1)
int32_t rcx_3 = *sub_140b5e500(&arg_8, 0x11c)
*(arg1 + 0x59) &= 0xfb
arg_8 = rcx_3
int32_t arg_c = 0
arg1[0x49] = arg_8.q
return arg1
