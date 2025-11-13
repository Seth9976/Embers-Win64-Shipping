// 函数: sub_14271fa40
// 地址: 0x14271fa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = nullptr
void*** result_2 = sub_140a84c80(0, 0x20, 0)
result_1 = result_2
int32_t var_10 = 2

if (result_2 != 0)
    *result_2 = &data_14323afc0
    result_2[1] = sub_142704640
    result_2[3] = sub_140a387b0()
    *result_2 = &data_14323b018

void*** result = sub_141dd8b80(&result_1)

if (var_10 == 0)
    result = result_1
label_14271fae8:
    
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
        goto label_14271fae8

return result
