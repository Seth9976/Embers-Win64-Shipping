// 函数: sub_140781190
// 地址: 0x140781190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* result

if (i_1 != arg2[1].d)
label_1407811c6:
    result.b = 0
    return result

result = *arg2

if (i_1 != 0)
    int64_t* rdx_1 = *arg1 - result
    int32_t i
    
    do
        if (*(rdx_1 + result) != *result)
            goto label_1407811c6
        
        result = &result[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
