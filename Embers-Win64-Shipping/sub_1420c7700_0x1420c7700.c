// 函数: sub_1420c7700
// 地址: 0x1420c7700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9

if (arg4 == 0)
    r9.b = arg1 s> arg2
else
    r9.b = arg1 s>= arg2

int32_t result

if (r9 != 0)
    if (arg5 == 0)
        result.b = arg1 s< arg3
    else
        result.b = arg1 s<= arg3
    
    if (result != 0)
        result.b = 1
        return result

result.b = 0
return result
