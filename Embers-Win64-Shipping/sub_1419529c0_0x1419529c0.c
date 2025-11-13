// 函数: sub_1419529c0
// 地址: 0x1419529c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x1c0)
void* result

if (i_1 != *(arg2 + 0x1c0))
label_141952a3f:
    result.b = 0
    return result

if (i_1 != 0)
    result = arg1 + 8
    int32_t* rdx = arg2 - arg1
    int32_t i
    
    do
        if (*(result - 8) != *(rdx + result - 8))
            goto label_141952a3f
        
        if (*(result - 4) != *(rdx + result - 4))
            goto label_141952a3f
        
        if (*result != *(rdx + result))
            goto label_141952a3f
        
        if (*(result + 4) != *(rdx + result + 4))
            goto label_141952a3f
        
        if (*(result + 8) != *(rdx + result + 8))
            goto label_141952a3f
        
        if (*(result + 0x10) != *(rdx + result + 0x10))
            goto label_141952a3f
        
        if (*(result + 0x11) != *(rdx + result + 0x11))
            goto label_141952a3f
        
        if (*(result + 0x12) != *(rdx + result + 0x12))
            goto label_141952a3f
        
        if (*(result + 0xc) != *(rdx + result + 0xc))
            goto label_141952a3f
        
        result += 0x1c
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
