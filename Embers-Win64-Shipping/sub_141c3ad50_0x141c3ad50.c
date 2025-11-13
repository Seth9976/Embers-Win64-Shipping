// 函数: sub_141c3ad50
// 地址: 0x141c3ad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0xc47a992f
int128_t zmm7 = arg2
*(arg1 + 0xc) = zmm7.d
*(arg1 + 0x10) = arg3
*(arg1 + 0x24) = arg6
*(arg1 + 8) = arg5
float zmm0

zmm0 = arg6 == 0 ? -4605.17041f : -1002.39349f

arg2.d = arg2.d f* arg3
*(arg1 + 0x14) = expf(zmm0 f/ arg2.d)
*(arg1 + 0x18) = arg4.d

if (arg6 == 0)
    zmm6 = 0xc58fe95d

zmm7.d = zmm7.d f* arg4.d
zmm6.d = zmm6.d f/ zmm7.d
float result = expf(zmm6.d)
*(arg1 + 0x1c) = result
return result
