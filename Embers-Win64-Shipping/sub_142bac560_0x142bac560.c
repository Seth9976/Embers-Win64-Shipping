// 函数: sub_142bac560
// 地址: 0x142bac560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg2
int128_t zmm0
int128_t zmm1

if (r8 != 0)
    if (r8 == 1)
        zmm1 = *(arg1 + 0x108)
        *(arg1 + 0x38) = *(arg1 + 0xf8)
        zmm0 = *(arg1 + 0x118)
        *(arg1 + 0x48) = zmm1
        zmm1 = *(arg1 + 0x128)
        goto label_142bac5cd
    
    if (*(arg1 + 0x315) != 0)
        *(arg1 + 0x18) = 0x86
    
    return 

zmm1 = *(arg1 + 0x148)
*(arg1 + 0x38) = *(arg1 + 0x138)
zmm0 = *(arg1 + 0x158)
*(arg1 + 0x48) = zmm1
zmm1 = *(arg1 + 0x168)
label_142bac5cd:
*(arg1 + 0x58) = zmm0
*(arg1 + 0x68) = zmm1
zmm1 = *(arg1 + 0x48)
*(arg1 + 0x78) = *(arg1 + 0x38)
zmm0 = *(arg1 + 0x58)
*(arg1 + 0x88) = zmm1
zmm1 = *(arg1 + 0x68)
*(arg1 + 0x98) = zmm0
zmm0 = *(arg1 + 0x38)
*(arg1 + 0xa8) = zmm1
zmm1 = *(arg1 + 0x48)
*(arg1 + 0xb8) = zmm0
zmm0 = *(arg1 + 0x58)
*(arg1 + 0xc8) = zmm1
zmm1 = *(arg1 + 0x68)
*(arg1 + 0xd8) = zmm0
*(arg1 + 0xe8) = zmm1
*(arg1 + 0x1fc) = *arg2
*(arg1 + 0x1fe) = *arg2
*(arg1 + 0x200) = *arg2
