// 函数: sub_140cf19c0
// 地址: 0x140cf19c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140cb0190(arg1, arg2)
int64_t* rcx = *(arg1 + 0x78)

if (rcx != 0)
    result = (*(*rcx + 0x28))(rcx, arg2)

int64_t* rcx_1 = *(arg1 + 0x80)

if (rcx_1 == 0)
    return result

return (*(*rcx_1 + 0x28))(rcx_1, arg2)
