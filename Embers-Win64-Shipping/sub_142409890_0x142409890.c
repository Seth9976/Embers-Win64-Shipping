// 函数: sub_142409890
// 地址: 0x142409890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x260)
int64_t result = (*(*arg2 + 0x10))(arg2, rbx)

if (*(rbx + 0xa0) != 1)
    return result

return sub_14240e030(rbx, 0) __tailcall
