// 函数: sub_141f205a0
// 地址: 0x141f205a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f435c0(arg1)
int32_t result = *(arg1 + 0x1fc) | arg1[0x3f].d | *(arg1 + 0x1f4) | arg1[0x3e].d

if (result != 0)
    return result

jump(*(*arg1 + 0x520))
