// 函数: sub_141031590
// 地址: 0x141031590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return sub_141033300(arg2, arg1) __tailcall

int32_t rcx_2 = *(arg2 + 0x18)
*(arg2 + 0x18) = *(arg3 + 0x18)
*(arg3 + 0x18) = rcx_2
int32_t rcx_3 = *(arg2 + 0x1c)
*(arg2 + 0x1c) = *(arg3 + 0x1c)
*(arg3 + 0x1c) = rcx_3
int32_t rcx_4 = *(arg2 + 0x20)
*(arg2 + 0x20) = *(arg3 + 0x20)
*(arg3 + 0x20) = rcx_4
int64_t rcx_5 = *(arg2 + 0x30)
*(arg2 + 0x30) = *(arg3 + 0x30)
*(arg3 + 0x30) = rcx_5
sub_14105b1e0(arg2 + 0x70, arg3 + 0x70)
int32_t rcx_7 = *(arg2 + 0xd8)
*(arg2 + 0xd8) = *(arg3 + 0xd8)
*(arg3 + 0xd8) = rcx_7

if (arg2 + 0x60 != arg3 + 0x60)
    int128_t zmm1_1 = *(arg2 + 0x60)
    *(arg2 + 0x60) = *(arg3 + 0x60)
    *(arg3 + 0x60) = zmm1_1

int64_t rcx_9 = *(arg2 + 0xe0)
int64_t result = *(arg3 + 0xe0)
*(arg2 + 0xe0) = result
*(arg3 + 0xe0) = rcx_9
return result
