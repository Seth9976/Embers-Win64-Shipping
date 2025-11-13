// 函数: sub_14292b660
// 地址: 0x14292b660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = sub_1428a6a70(0x18)

if (result == 0)
    sub_1428a5670((result + 0x22).d, 0xa8, (result + 0x41).d, "crypto\x509v3\pcy_node.c", 0x44)
    return nullptr

*result = arg2
result[1] = arg3
int32_t var_18_1

if (arg1 != 0)
    if (sub_1428a96d0(*(arg2 + 8)) != 0x2ea)
        int32_t* rax_3 = *(arg1 + 8)
        
        if (rax_3 == 0)
            rax_3 = sub_142898b60(sub_14292b880)
            *(arg1 + 8) = rax_3
            
            if (rax_3 != 0)
                goto label_14292b754
            
            var_18_1 = 0x53
        label_14292b793:
            sub_1428a5670(0x22, 0xa8, 0x41, "crypto\x509v3\pcy_node.c", var_18_1)
            sub_1428a6780(result)
            return nullptr
        
    label_14292b754:
        
        if (sub_142898d50(rax_3, result) == 0)
            var_18_1 = 0x57
            goto label_14292b793
    else
        if (*(arg1 + 0x10) != 0)
            sub_1428a6780(result)
            return nullptr
        
        *(arg1 + 0x10) = result

if (arg4 != 0)
    int32_t* rax_2 = *(arg4 + 0x10)
    
    if (rax_2 == 0)
        rax_2 = sub_142898ba0()
        *(arg4 + 0x10) = rax_2
        
        if (rax_2 == 0)
            var_18_1 = 0x61
            goto label_14292b793
    
    if (sub_142898d50(rax_2, arg2) == 0)
        var_18_1 = 0x65
        goto label_14292b793

if (arg3 != 0)
    *(arg3 + 0x10) += 1

return result
