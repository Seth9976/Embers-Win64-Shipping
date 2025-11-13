// 函数: sub_140d7b000
// 地址: 0x140d7b000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 0x38) u>> 1).b & 1) == 0)
    return 0x80040201

int64_t* rcx = *(arg1 + 0x18)
*arg2 = (*(*rcx + 0x18))(rcx)
return 0
