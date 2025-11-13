// 函数: sub_140d7c850
// 地址: 0x140d7c850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    return 0x80070057

int64_t* rcx = *(arg1 + 0x18)
float var_18
float arg_20
(*(*rcx + 0x50))(rcx, &arg_20, &var_18)
float zmm0 = var_18 + arg_20
*arg3 = int.d(fconvert.t(arg_20))
arg3[1] = int.d(fconvert.t(arg4))
arg3[2] = int.d(zmm0)
float var_14
arg3[3] = int.d(var_14 + arg4)
return 0
