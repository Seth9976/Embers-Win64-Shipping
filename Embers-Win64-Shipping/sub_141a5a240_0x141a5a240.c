// 函数: sub_141a5a240
// 地址: 0x141a5a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg2
int128_t zmm6 = arg3

if (sub_140d3e090(arg1 + 0x28, 1, 0) != 0)
    zmm6, zmm7 = sub_141a64420(arg1)

char result = sub_140d3e110(arg1 + 0x28)

if (result == 0)
    return result

int64_t* rcx_3 = *(arg1 + 0x30)
return (*(*rcx_3 + 0x10))(rcx_3, zmm7, zmm6)
