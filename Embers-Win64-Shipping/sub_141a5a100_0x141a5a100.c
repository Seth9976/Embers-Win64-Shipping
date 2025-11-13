// 函数: sub_141a5a100
// 地址: 0x141a5a100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg2
arg2.b = 1

if (sub_140d3e090(arg1 + 0x28, arg2.b, 0) != 0)
    sub_141a64420(arg1)

char result = sub_140d3e110(arg1 + 0x28)

if (result == 0)
    return result

int64_t* rcx_3 = *(arg1 + 0x30)
return (*(*rcx_3 + 0x18))(rcx_3, rsi)
