// 函数: sub_1427f13f0
// 地址: 0x1427f13f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm4 = 0x3f800000
int128_t zmm6 = arg3

if (not(arg2.d f== 0f))
    zmm4 = arg2.d

if (not(zmm6.d f== 0f))
    zmm4 = zmm4 f* zmm6.d

if (not(arg4 == 0f))
    zmm4 = zmm4 f* arg4

zmm4 = zmm4 f* 4.18879032f
arg3 = arg2
int128_t zmm5
zmm5.d = arg2.d f* zmm6.d
int32_t zmm0 = zmm4 f* 0.400000006f
arg1[0xc] = zmm4
*(arg1 + 4) = 0
arg2.d = zmm6.d f* arg4
arg3.d = arg3.d f* arg4
arg2.d = arg2.d f* zmm0
arg3.d = arg3.d f* zmm0
*arg1 = arg2.d
arg1[3] = 0
arg1[4] = arg3.d
*(arg1 + 0x14) = 0
arg1[7] = 0
zmm5.d = zmm5.d f* zmm0
arg1[8] = zmm5.d
*(arg1 + 0x24) = 0
arg1[0xb] = 0
return 0
