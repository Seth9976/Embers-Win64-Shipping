// 函数: sub_141949800
// 地址: 0x141949800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = nullptr
void*** result_2 = sub_140a84c80(0, 0x20, 0)
result_1 = result_2
int32_t var_10 = 2

if (result_2 != 0)
    *result_2 = &data_142e85898
    result_2[1] = sub_141941060
    result_2[3] = sub_140a387b0()
    *result_2 = &data_142e858f0

void arg_10
int64_t* result = sub_1419d6050(&arg_10, &result_1)
data_143eff860 = *result

if (var_10 == 0)
    result = result_1
label_1419498b7:
    
    if (result != 0)
        return sub_140a74f90(result)
else
    void*** result_3 = result_1
    
    if (result_3 != 0)
        (*result_3)[7](result_3, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int32_t var_10_1 = 0
        goto label_1419498b7

return result
