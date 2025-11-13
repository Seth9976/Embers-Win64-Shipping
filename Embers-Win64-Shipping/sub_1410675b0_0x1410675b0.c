// 函数: sub_1410675b0
// 地址: 0x1410675b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return sub_141068090(arg2, arg1) __tailcall

int32_t rcx_2 = *(arg2 + 0x18)
*(arg2 + 0x18) = *(arg3 + 0x18)
*(arg3 + 0x18) = rcx_2
int32_t rcx_3 = *(arg2 + 0x1c)
*(arg2 + 0x1c) = *(arg3 + 0x1c)
*(arg3 + 0x1c) = rcx_3
int64_t rcx_4 = *(arg2 + 0x28)
*(arg2 + 0x28) = *(arg3 + 0x28)
*(arg3 + 0x28) = rcx_4
sub_14105b1e0(arg2 + 0x68, arg3 + 0x68)
int32_t rcx_6 = *(arg2 + 0xd0)
*(arg2 + 0xd0) = *(arg3 + 0xd0)
*(arg3 + 0xd0) = rcx_6

if (arg2 + 0x58 != arg3 + 0x58)
    int128_t zmm1_1 = *(arg2 + 0x58)
    *(arg2 + 0x58) = *(arg3 + 0x58)
    *(arg3 + 0x58) = zmm1_1

int64_t rcx_8 = *(arg2 + 0xd8)
int64_t result = *(arg3 + 0xd8)
*(arg2 + 0xd8) = result
*(arg3 + 0xd8) = rcx_8
return result
