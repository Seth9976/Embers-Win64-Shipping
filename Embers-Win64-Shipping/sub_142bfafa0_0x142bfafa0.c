// 函数: sub_142bfafa0
// 地址: 0x142bfafa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int32_t* result = sub_140dc0ea0(1, 0x170)
    
    if (result != 0)
        *result = 1
        result[1] = 1
        *(result + 8) = 0
        *(result + 0x10) = arg1
        *(result + 0x18) = arg2
        *(result + 0x20) = arg3
        result[0xc] = 0xffffffff
        *(result + 0x38) = result
        sub_141e43d90(&result[0x12], result)
        return result

if (arg3 != 0)
    arg3(arg2)

return &data_143ccb6b0
