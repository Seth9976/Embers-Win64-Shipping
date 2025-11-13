// 函数: sub_1428f33a0
// 地址: 0x1428f33a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
char* result

if (arg1 != 0)
    int64_t rax_1 = data_143fecec8
    
    if (rax_1 == 0)
        rax_1 = sub_142930d40()
        data_143fecec8 = &data_143b86460
    
    void var_28
    (*(rax_1 + 0x10))(&var_28)
    void* var_18_1 = arg1
    result = sub_142931870(&var_28, arg2, arg3)
    
    if (result == 0)
        int32_t var_38_1 = 0x111
        sub_1428a5670((&result[0xe]).d, (&result[0x6d]).d, (&result[0x6c]).d, 
            "crypto\conf\conf_lib.c", 0x111)
        var_38_1.q = arg3
        sub_1428a4880(4)
        return nullptr
else
    result = sub_142931870(arg1, arg2, arg3)
    
    if (result == 0)
        sub_1428a5670((&result[0xe]).d, (&result[0x6d]).d, (&result[0x6a]).d, 
            "crypto\conf\conf_lib.c", 0x10e)
        return 0

return result
