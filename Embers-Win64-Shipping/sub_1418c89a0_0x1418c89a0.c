// 函数: sub_1418c89a0
// 地址: 0x1418c89a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x18)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg2 + 0x18) = r8
int32_t r8_1 = *(arg1 + 0x1c)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg2 + 0x1c) = r8_1
int32_t rcx = *(arg1 + 0x20)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg2 + 0x20) = rcx

if (arg1 + 0x28 != arg2 + 0x28)
    int128_t zmm2 = *(arg1 + 0x28)
    int128_t zmm3 = *(arg1 + 0x38)
    int128_t zmm4 = *(arg1 + 0x48)
    int128_t zmm5 = *(arg1 + 0x58)
    int128_t zmm6 = *(arg1 + 0x68)
    int128_t zmm7 = *(arg1 + 0x78)
    int128_t zmm8 = *(arg1 + 0x88)
    int128_t zmm9 = *(arg1 + 0x98)
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg1 + 0x38) = *(arg2 + 0x38)
    *(arg1 + 0x48) = *(arg2 + 0x48)
    *(arg1 + 0x58) = *(arg2 + 0x58)
    *(arg1 + 0x68) = *(arg2 + 0x68)
    *(arg1 + 0x78) = *(arg2 + 0x78)
    *(arg1 + 0x88) = *(arg2 + 0x88)
    *(arg1 + 0x98) = *(arg2 + 0x98)
    *(arg2 + 0x28) = zmm2
    *(arg2 + 0x38) = zmm3
    *(arg2 + 0x48) = zmm4
    *(arg2 + 0x58) = zmm5
    *(arg2 + 0x68) = zmm6
    *(arg2 + 0x78) = zmm7
    *(arg2 + 0x88) = zmm8
    *(arg2 + 0x98) = zmm9

int32_t rcx_2 = *(arg1 + 0xa8)
int32_t result = *(arg2 + 0xa8)
*(arg1 + 0xa8) = result
*(arg2 + 0xa8) = rcx_2
return result
