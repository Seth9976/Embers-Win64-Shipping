// 函数: sub_142c099b0
// 地址: 0x142c099b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if (arg2 - 1 u<= 0x7ffffffe)
    result = sub_140dc0ea0(1, 0x30)

if (arg2 - 1 u<= 0x7ffffffe && result != 0)
    *result = 1
    result[1] = 1
    *(result + 8) = 0
    *(result + 0x28) = arg5
    *(result + 0x10) = arg1
    result[6] = arg2
    result[7] = arg3
    *(result + 0x20) = arg4
    char rax_1
    
    if (arg3 == 0)
        result[7] = 1
        rax_1 = sub_142c09890(result)
    
    if (arg3 != 0 || rax_1 != 0)
        return result
    
    sub_142c09b70(result)
else if (arg5 != 0)
    arg5(arg4)

return &data_14369a5d0
