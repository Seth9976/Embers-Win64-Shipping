// 函数: sub_1408d5b40
// 地址: 0x1408d5b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2 = sub_140a84c80(0, 0x20, 0)
int64_t* result_1 = result_2
void*** result_9 = result_2
int32_t var_10 = 2
void arg_10

if (result_2 != 0)
    *result_9 = &data_142ddc5f8
    result_9[1] = sub_1408d7c40
    result_9[3] = sub_140a387b0()
    *result_9 = &data_142ddc650
    sub_1408d6c30(&data_143a30680, &arg_10, &result_1)
    int64_t* result_3
    
    if (var_10 == 0)
        result_3 = result_1
    label_1408d5bd7:
        
        if (result_3 != 0)
            sub_140a74f90(result_3)
    else
        int64_t* result_6 = result_1
        
        if (result_6 != 0)
            (*(*result_6 + 0x38))(result_6, 0)
            result_3 = sub_140a84c80(result_6, 0, 0)
            goto label_1408d5bd7

int64_t* result_4 = sub_140a84c80(0, 0x20, 0)
result_1 = result_4
int32_t var_10_1 = 2

if (result_4 != 0)
    *result_4 = &data_142ddc6a8
    result_4[1] = sub_1408d7c30
    result_4[3] = sub_140a387b0()
    *result_4 = &data_142ddc700
    sub_1408d6c30(&data_143a306e0, &arg_10, &result_1)
    int64_t* result_5
    
    if (var_10_1 == 0)
        result_5 = result_1
    label_1408d5c75:
        
        if (result_5 != 0)
            sub_140a74f90(result_5)
    else
        int64_t* result_7 = result_1
        
        if (result_7 != 0)
            (*(*result_7 + 0x38))(result_7, 0)
            result_5 = sub_140a84c80(result_7, 0, 0)
            goto label_1408d5c75

int64_t* result = sub_140a84c80(0, 0x20, 0)
result_1 = result
int32_t var_10_2 = 2

if (result != 0)
    *result = &data_142e0e630
    result[1] = sub_1408d76d0
    result[3] = sub_140a387b0()
    *result = &data_142e0e688
    result = sub_1408d6c30(&data_143a2e3c8, &arg_10, &result_1)
    
    if (var_10_2 == 0)
        result = result_1
    label_1408d5d17:
        
        if (result != 0)
            return sub_140a74f90(result) __tailcall
    else
        int64_t* result_8 = result_1
        
        if (result_8 != 0)
            (*(*result_8 + 0x38))(result_8, 0)
            result = sub_140a84c80(result_8, 0, 0)
            goto label_1408d5d17

return result
