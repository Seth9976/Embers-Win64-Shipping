// 函数: sub_141f65230
// 地址: 0x141f65230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141f17fa0(arg1, arg2)
int64_t* rcx = arg1[0xb6]

if (rcx == 0)
    return result

return (*(*rcx + 0x80))(rcx, arg2)
