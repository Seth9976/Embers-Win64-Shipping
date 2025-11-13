// 函数: sub_140a555e0
// 地址: 0x140a555e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)
char result = (*(*rcx + 8))(rcx)

if (result == 0 || arg3 == 0)
    return result

int64_t* rcx_1 = *(arg1 + 8)
return (*(*rcx_1 + 0x100))(rcx_1, arg2, arg1)
