// 函数: sub_140cd7530
// 地址: 0x140cd7530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140cb0190(arg1, arg2)
int64_t* rcx = *(arg1 + 0x78)

if (rcx == 0)
    return result

return (*(*rcx + 0x28))(rcx, arg2)
