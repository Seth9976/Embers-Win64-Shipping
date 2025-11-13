// 函数: sub_141f5b020
// 地址: 0x141f5b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141f0f750(arg1)
int64_t* rcx = *(arg1 + 0x5b0)

if (rcx != 0)
    (*(*rcx + 0x18))(rcx)
    result = sub_141997870(*(arg1 + 0x5b0))
    *(arg1 + 0x5b0) = 0

return result
