// 函数: sub_142c0e6b0
// 地址: 0x142c0e6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg4)
int128_t* const r9

if (arg4 u< *(arg3 + 0xa8))
    r9 = rsi * 0x30 + *(arg3 + 0xb0)
else
    r9 = &data_14369a5d0

sub_142c114a0(arg1, arg2, *(arg3 + 0x68), r9[2].q)
*(arg1 + 0xc0) = arg5
*(arg1 + 0xc8) = arg6
*(arg1 + 0xd0) = *(arg3 + 0x70)
__builtin_memset(arg1 + 0xe0, 0, 0x13)
*(arg1 + 0xc0) != 0 && *(arg1 + 0xc8) != 0 && *(arg1 + 0xd0) != &data_14369a5d0
int32_t result

if (rsi.d u< *(arg3 + 0xa8))
    result = *(rsi * 0x30 + *(arg3 + 0xb0) + 0x28)
else
    result = 0

*(arg1 + 0xdc) = result
return result
