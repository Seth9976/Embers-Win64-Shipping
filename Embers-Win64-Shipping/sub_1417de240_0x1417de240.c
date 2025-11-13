// 函数: sub_1417de240
// 地址: 0x1417de240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee9b30(arg1, arg2)
int64_t (* var_38)(void* arg1, void* arg2) = sub_1417de490
int32_t var_30 = 0
void*** result_1 = nullptr
void*** result_2 = sub_140a84c80(0, 0x30, 0)
result_1 = result_2
int32_t var_40 = 3

if (result_2 != 0)
    *result_2 = &data_142fd1390
    sub_140d3a3a0(&result_2[1], arg1)
    *(result_2 + 0x10) = var_38.o
    result_2[5] = sub_140a387b0()
    *result_2 = &data_142fd13e8

void arg_10
sub_1417d7eb0(&arg_10, &result_1)
void*** result_3

if (var_40 == 0)
    result_3 = result_1
label_1417de30c:
    
    if (result_3 != 0)
        sub_140a74f90(result_3)
else
    void*** result_7 = result_1
    
    if (result_7 != 0)
        (*result_7)[7](result_7, 0)
        result_3 = result_1
        
        if (result_3 != 0)
            result_3 = sub_140a84c80(result_3, 0, 0)
            result_1 = result_3
        
        int32_t var_40_1 = 0
        goto label_1417de30c
int32_t var_30_1 = 0
result_1 = nullptr
int64_t (* var_38_1)(void* arg1, void* arg2) = sub_1417de610
void*** result_4 = sub_140a84c80(0, 0x30, 0)
result_1 = result_4
int32_t var_40_2 = 3

if (result_4 != 0)
    *result_4 = &data_142fd1390
    sub_140d3a3a0(&result_4[1], arg1)
    *(result_4 + 0x10) = var_38_1.o
    result_4[5] = sub_140a387b0()
    *result_4 = &data_142fd13e8

sub_1417d8150(&arg_10, &result_1)
void*** result_5

if (var_40_2 == 0)
    result_5 = result_1
label_1417de3b5:
    
    if (result_5 != 0)
        sub_140a74f90(result_5)
else
    void*** result_8 = result_1
    
    if (result_8 != 0)
        (*result_8)[7](result_8, 0)
        result_5 = result_1
        
        if (result_5 != 0)
            result_5 = sub_140a84c80(result_5, 0, 0)
            result_1 = result_5
        
        int32_t var_40_3 = 0
        goto label_1417de3b5
int32_t var_30_2 = 0
result_1 = nullptr
int64_t (* var_38_2)(void* arg1, void* arg2) = sub_1417de550
void*** result_6 = sub_140a84c80(0, 0x30, 0)
result_1 = result_6
int32_t var_40_4 = 3

if (result_6 != 0)
    *result_6 = &data_142fd1390
    sub_140d3a3a0(&result_6[1], arg1)
    *(result_6 + 0x10) = var_38_2.o
    result_6[5] = sub_140a387b0()
    *result_6 = &data_142fd13e8

void*** result = sub_1417d8000(&arg_10, &result_1)

if (var_40_4 == 0)
    result = result_1
label_1417de45e:
    
    if (result != 0)
        return sub_140a74f90(result)
else
    void*** result_9 = result_1
    
    if (result_9 != 0)
        (*result_9)[7](result_9, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int32_t var_40_5 = 0
        goto label_1417de45e

return result
