// 函数: sub_142bcd920
// 地址: 0x142bcd920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = arg3
int32_t result_1
*(arg1 + 0x28) = sub_142b99a90(arg3, 8, 0, arg2, 0, &result_1)
int32_t result

if (result_1 != 0)
label_142bcd9cf:
    sub_142b99980(arg3, *(arg1 + 0x28))
    result = result_1
    *(arg1 + 0x28) = 0
else
    *(arg1 + 0x30) = sub_142b99a90(arg3, 4, 0, arg2, 0, &result_1)
    result = result_1
    
    if (result != 0)
        goto label_142bcd9cf
    
    *(arg1 + 0x1c) = arg2
    *(arg1 + 0x18) = 0xdeadbeef
    *(arg1 + 0x20) = 0
    __builtin_memset(arg1, 0, 0x18)
    __builtin_memcpy(arg1 + 0x40, 
        "\x20\xd9\xbc\x42\x01\x00\x00\x00\x00\xdb\xbc\x42\x01\x00\x00\x00\x10\xda\xbc\x42\x01\x00\x00\x"
    "00\xc0\xdb\xbc\x42\x01\x00\x00\x00", 
        0x20)

return result
