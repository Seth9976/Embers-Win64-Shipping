// 函数: sub_141f0f700
// 地址: 0x141f0f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141edf430(arg1)
void* result = *(arg1 + 0xa8)

if (result == 0)
    result = sub_141ee69e0(arg1)

int64_t* rcx_1 = *(result + 0x1b0)

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x58))(rcx_1, arg1)

*(arg1 + 0x318) &= 0xfffffffe
return result
