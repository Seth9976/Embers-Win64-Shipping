// 函数: sub_142b750f0
// 地址: 0x142b750f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (*arg3 s> 0)
    result.b = 0
    return result

*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0

if (*(arg1 + 0x50) != 0)
    goto label_142b75186

result = j_sub_142a7dd00(0x210)
int64_t* result_1 = result
int64_t* result_2 = result

if (result == 0)
    result_2 = nullptr
else
    memset(result, 0, 0x210)
    result_2[1].d = 0x20
    *result_2 = &result_2[2]
    *(result_2 + 0xc) = 0

*(arg1 + 0x50) = result_2

if (result_2 == 0)
    *arg3 = 7
    result.b = 0
else
    *(arg1 + 0x58) = *result_2
label_142b75186:
    int32_t r8 = *(arg2 + 0x60)
    
    if (r8 s<= 0)
        goto label_142b751b5
    
    sub_142b75050(*(arg1 + 0x50), *(arg2 + 0x50), r8, arg3)
    
    if (*arg3 s> 0)
        result.b = 0
    else
        *(arg1 + 0x58) = **(arg1 + 0x50)
        *(arg1 + 0x60) = *(arg2 + 0x60)
    label_142b751b5:
        
        if (*(arg2 + 0x78) s<= 0)
            result.b = 1
        else
            if (*(arg1 + 0x68) != 0)
                goto label_142b7522a
            
            result = j_sub_142a7dd00(0x50)
            result_1 = result
            int64_t* result_3 = result
            
            if (result == 0)
                result_3 = nullptr
            else
                memset(result, 0, 0x50)
                result_3[1].d = 8
                *result_3 = &result_3[2]
                *(result_3 + 0xc) = 0
            
            *(arg1 + 0x68) = result_3
            
            if (result_3 != 0)
                *(arg1 + 0x70) = *result_3
            label_142b7522a:
                sub_142b74fb0(*(arg1 + 0x68), *(arg2 + 0x68), *(arg2 + 0x78), arg3)
                
                if (*arg3 s> 0)
                    result.b = 0
                else
                    *(arg1 + 0x70) = **(arg1 + 0x68)
                    *(arg1 + 0x78) = *(arg2 + 0x78)
                    result.b = 1
            else
                *arg3 = 7
                result.b = 0

return result
