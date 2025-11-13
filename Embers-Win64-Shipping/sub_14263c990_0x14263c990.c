// 函数: sub_14263c990
// 地址: 0x14263c990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x39) = 3
char result = sub_140d3e110(arg1 + 0x58)

if (result == 0)
    return result

int64_t* rcx_2 = sub_140d3c6e0(arg1 + 0x58) + 0xb0
return (*(*rcx_2 + 0x38))(rcx_2, arg1)
