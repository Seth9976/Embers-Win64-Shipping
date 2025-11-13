// 函数: sub_140a82e60
// 地址: 0x140a82e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
int64_t result = (*(*rcx + 0x10))(rcx)

if (result == 0 || arg2 == 0)
    return result

memset(result, 0xcd, arg2)
return result
