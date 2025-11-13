// 函数: sub_1424e3280
// 地址: 0x1424e3280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 1)
    *arg1 = (*arg1 ^ 0x80000000).d
    arg1[1].d = (arg1[1].d ^ 0x80000000).d
    arg1[2].d = (arg1[2].d ^ 0x80000000).d
    arg1[3].d = (arg1[3].d ^ 0x80000000).d
else if (arg2 == 2)
    *(arg1 + 4) = (*(arg1 + 4) ^ 0x80000000).d
    *(arg1 + 0x14) = (*(arg1 + 0x14) ^ 0x80000000).d
    *(arg1 + 0x24) = (*(arg1 + 0x24) ^ 0x80000000).d
    *(arg1 + 0x34) = (*(arg1 + 0x34) ^ 0x80000000).d
else if (arg2 == 3)
    *(arg1 + 8) = (*(arg1 + 8) ^ 0x80000000).d
    *(arg1 + 0x18) = (*(arg1 + 0x18) ^ 0x80000000).d
    *(arg1 + 0x28) = (*(arg1 + 0x28) ^ 0x80000000).d
    *(arg1 + 0x38) = (*(arg1 + 0x38) ^ 0x80000000).d

int128_t zmm0

if (arg3 == 1)
    int128_t zmm1 = *(arg1 + 4)
    *arg1 = (*arg1 ^ 0x80000000).d
    zmm0 = *(arg1 + 8) ^ 0x80000000
    *(arg1 + 4) = (zmm1 ^ 0x80000000).d
    *(arg1 + 8) = zmm0.d
    return 

if (arg3 == 2)
    arg1[1].d = (arg1[1].d ^ 0x80000000).d
    zmm0 = *(arg1 + 0x18) ^ 0x80000000
    *(arg1 + 0x14) = (*(arg1 + 0x14) ^ 0x80000000).d
    *(arg1 + 0x18) = zmm0.d
    return 

if (arg3 != 3)
    return 

arg1[2].d = (arg1[2].d ^ 0x80000000).d
zmm0 = *(arg1 + 0x28) ^ 0x80000000
*(arg1 + 0x24) = (*(arg1 + 0x24) ^ 0x80000000).d
*(arg1 + 0x28) = zmm0.d
