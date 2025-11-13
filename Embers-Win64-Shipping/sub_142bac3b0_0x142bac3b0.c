// 函数: sub_142bac3b0
// 地址: 0x142bac3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg2
int128_t zmm0
int128_t zmm1

if (r8 == 0)
    zmm1 = *(arg1 + 0x148)
    *(arg1 + 0x38) = *(arg1 + 0x138)
    zmm0 = *(arg1 + 0x158)
    *(arg1 + 0x48) = zmm1
    zmm1 = *(arg1 + 0x168)
    *(arg1 + 0x58) = zmm0
    *(arg1 + 0x68) = zmm1
    *(arg1 + 0x1fc) = *arg2
    return 

if (r8 == 1)
    zmm1 = *(arg1 + 0x108)
    *(arg1 + 0x38) = *(arg1 + 0xf8)
    zmm0 = *(arg1 + 0x118)
    *(arg1 + 0x48) = zmm1
    zmm1 = *(arg1 + 0x128)
    *(arg1 + 0x58) = zmm0
    *(arg1 + 0x68) = zmm1
    *(arg1 + 0x1fc) = *arg2
    return 

if (*(arg1 + 0x315) != 0)
    *(arg1 + 0x18) = 0x86
