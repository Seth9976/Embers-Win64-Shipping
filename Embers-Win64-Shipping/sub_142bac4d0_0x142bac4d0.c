// 函数: sub_142bac4d0
// 地址: 0x142bac4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg2
int128_t zmm0
int128_t zmm1

if (r8 == 0)
    zmm1 = *(arg1 + 0x148)
    *(arg1 + 0xb8) = *(arg1 + 0x138)
    zmm0 = *(arg1 + 0x158)
    *(arg1 + 0xc8) = zmm1
    zmm1 = *(arg1 + 0x168)
label_142bac545:
    *(arg1 + 0xd8) = zmm0
    *(arg1 + 0xe8) = zmm1
    *(arg1 + 0x200) = *arg2
else
    if (r8 == 1)
        zmm1 = *(arg1 + 0x108)
        *(arg1 + 0xb8) = *(arg1 + 0xf8)
        zmm0 = *(arg1 + 0x118)
        *(arg1 + 0xc8) = zmm1
        zmm1 = *(arg1 + 0x128)
        goto label_142bac545
    
    if (*(arg1 + 0x315) != 0)
        *(arg1 + 0x18) = 0x86
