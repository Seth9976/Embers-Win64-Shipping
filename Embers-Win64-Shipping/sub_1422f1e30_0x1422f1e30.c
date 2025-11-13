// 函数: sub_1422f1e30
// 地址: 0x1422f1e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
uint64_t result = zx.q(*(arg2 + 0x28))

if ((result.b & 1) != 0 && result.b s< 0 && (*(arg2 + 0x30) & 0x401000) == 0 && *(arg1 + 0x28) == 0)
    result = *(arg1 + 0x30)
    
    if (result != 0)
        result = *(result + 0x10)
        *(arg1 + 0x28) = result

return result
