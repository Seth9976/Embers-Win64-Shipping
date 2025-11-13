// 函数: sub_1409fdea0
// 地址: 0x1409fdea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ae2e90(arg1 + 0x468, arg2, arg3)
float zmm2 = *(arg1 + 0x264)
float zmm0 = zmm2 * arg2[3]
float zmm1 = zmm2 * arg2[4]
zmm2 = zmm2 * arg2[5]
arg2[3] = zmm0
arg2[4] = zmm1
arg2[5] = zmm2
arg2[6] = *(arg1 + 0x264) * arg2[6]
return arg2
