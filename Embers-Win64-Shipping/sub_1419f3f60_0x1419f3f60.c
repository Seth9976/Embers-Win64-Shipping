// 函数: sub_1419f3f60
// 地址: 0x1419f3f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_2 = sub_140a84c80(0, 0x20, 0)
int64_t* result_1 = result_2
int32_t var_10 = 2
void arg_10

if (result_2 != 0)
    *result_2 = &data_142d43dd8
    result_2[1] = j_sub_141a005f0
    result_2[3] = sub_140a387b0()
    *result_2 = &data_142d43e30
    sub_1408d6c30(&data_143a30668, &arg_10, &result_1)
    int64_t* result_3
    
    if (var_10 == 0)
        result_3 = result_1
    label_1419f4000:
        
        if (result_3 != 0)
            sub_140a74f90(result_3)
    else
        int64_t* result_6 = result_1
        
        if (result_6 != 0)
            (*(*result_6 + 0x38))(result_6, 0)
            result_3 = sub_140a84c80(result_6, 0, 0)
            goto label_1419f4000

int64_t* result_4 = sub_140a84c80(0, 0x20, 0)
result_1 = result_4
int32_t var_10_1 = 2

if (result_4 != 0)
    *result_4 = &data_142d43dd8
    result_4[1] = sub_141a19a10
    result_4[3] = sub_140a387b0()
    *result_4 = &data_142d43e30
    sub_1408d6c30(&data_143a306f8, &arg_10, &result_1)
    int64_t* result_5
    
    if (var_10_1 == 0)
        result_5 = result_1
    label_1419f4090:
        
        if (result_5 != 0)
            sub_140a74f90(result_5)
    else
        int64_t* result_7 = result_1
        
        if (result_7 != 0)
            (*(*result_7 + 0x38))(result_7, 0)
            result_5 = sub_140a84c80(result_7, 0, 0)
            goto label_1419f4090

int64_t* result = sub_140a84c80(0, 0x20, 0)
result_1 = result
int32_t var_10_2 = 2

if (result != 0)
    *result = &data_143020688
    result[1] = sub_141a19b50
    result[3] = sub_140a387b0()
    *result = &data_1430206e0
    result = sub_1408d6c30(&data_143a306b0, &arg_10, &result_1)
    
    if (var_10_2 == 0)
        result = result_1
    label_1419f412e:
        
        if (result != 0)
            return sub_140a74f90(result)
    else
        int64_t* result_8 = result_1
        
        if (result_8 != 0)
            (*(*result_8 + 0x38))(result_8, 0)
            result = sub_140a84c80(result_8, 0, 0)
            goto label_1419f412e

return result
