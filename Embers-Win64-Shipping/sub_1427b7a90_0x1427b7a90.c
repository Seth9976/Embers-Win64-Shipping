// 函数: sub_1427b7a90
// 地址: 0x1427b7a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)
int64_t result = (*(*rcx + 0x290))(rcx)
*(arg1 + 0x58) = 0

if (*(arg1 + 0x5c) s> 0xffffffff)
    return result

return sub_1405c5570(arg1 + 0x50, 0) __tailcall
