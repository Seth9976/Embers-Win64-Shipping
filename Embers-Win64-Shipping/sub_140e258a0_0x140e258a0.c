// 函数: sub_140e258a0
// 地址: 0x140e258a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e20d08
int64_t result = (*(*rcx + 0x48))(rcx)

if (data_143e24361 != 0 && (*(arg1 + 0x29) & 2) == 0)
    return result

*(arg1 + 0x29) |= 4
return sub_140e206f0(arg1, arg2, arg2) __tailcall
