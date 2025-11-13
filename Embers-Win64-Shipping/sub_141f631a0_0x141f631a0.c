// 函数: sub_141f631a0
// 地址: 0x141f631a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
*arg2 = 0
int32_t arg_10 = 0
int32_t arg_8 = 0
(*(*arg1 + 0x648))(arg1, &arg_10, &arg_8)
char result = sub_141f1d600(arg1)

if (result != 0 && arg1[0x88] != 0)
    result = (*(*arg1 + 0x8b0))(arg1, zx.q(arg_10), zx.q(arg_8))
    
    if (result == 1)
        return (*(*arg1 + 0x8c0))(arg1, zx.q(arg_10), zx.q(arg_8), arg2, arg3)

return result
