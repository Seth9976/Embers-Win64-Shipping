// 函数: sub_141a59a50
// 地址: 0x141a59a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6 = arg5
int64_t* result = arg2
arg2.b = 1
arg5 = arg4

if (sub_140d3e090(arg1 + 0x28, arg2.b, 0) != 0)
    arg5 = sub_141a64420(arg1)

if (sub_140d3e110(arg1 + 0x28) == 0)
    *result = *arg3
else
    int64_t* rcx_3 = *(arg1 + 0x30)
    (*(*rcx_3 + 0x28))(rcx_3, result, arg3, arg5, __saved_zmm6)

return result
