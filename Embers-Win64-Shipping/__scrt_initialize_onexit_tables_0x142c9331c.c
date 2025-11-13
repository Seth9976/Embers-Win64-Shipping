// 函数: __scrt_initialize_onexit_tables
// 地址: 0x142c9331c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (data_14401b121 != 0)
    result.b = 1
else
    if (arg1 u> 1)
        __scrt_fastfail(5)
        breakpoint
    
    if (sub_142c94400() == 0 || arg1 != 0)
        __builtin_memset(&data_14401b128, 0xff, 0x30)
        data_14401b121 = 1
        result.b = 1
    else if (_initialize_onexit_table(&data_14401b128) != 0)
        result.b = 0
    else if (_initialize_onexit_table(&data_14401b140) == 0)
        data_14401b121 = 1
        result.b = 1
    else
        result.b = 0

return result
