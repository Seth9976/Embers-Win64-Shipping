// 函数: sub_14293b6e0
// 地址: 0x14293b6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 == 0)
    sub_1428a5670(0x28, 0x6d, 0x43, "crypto\ui\ui_lib.c", 0x69)
    return nullptr

if (arg4 - 1 u<= 2 && arg6 == 0)
    sub_1428a5670((arg6 + 0x28).d, (arg6 + 0x6d).d, (arg6 + 0x69).d, "crypto\ui\ui_lib.c", 0x6c)
    return nullptr

int32_t* result = sub_1428a6730(0x48)

if (result != 0)
    *(result + 8) = arg2
    int32_t rbx
    rbx.b = arg3 != 0
    result[4] = arg5
    result[0x10] = rbx
    *result = arg4
    *(result + 0x18) = arg6

return result
