// 函数: sub_141cb2ba0
// 地址: 0x141cb2ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x90)
(*(*rcx + 0x150))(rcx)
int64_t* result = *(arg1 + 0x90)

if ((*(result + 0x29) & 1) != 0)
    *(arg1 + 0x29) |= 1
    result = &data_143f354a0
    *(arg1 + 0x90) = &data_143f354a0

return result
