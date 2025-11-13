// 函数: sub_1421af750
// 地址: 0x1421af750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x2c) u<= 0
int32_t result_2 = *(arg1 + 0x28)
int32_t result_1 = result_2
int16_t arg_c

if (not(cond:0))
    result_1 = result_2
    arg_c = *(arg1 + 0x2c)
    sub_1421b4ea0(&data_143a2ee60, &result_1)

bool cond:1 = *(arg1 + 0x32) u<= 0
int32_t result_3 = *(arg1 + 0x2e)
result_1 = result_3

if (not(cond:1))
    result_1 = result_3
    arg_c = *(arg1 + 0x32)
    sub_1421b4ea0(&data_143a2ee60, &result_1)

bool cond:2 = *(arg1 + 0x38) u<= 0
int32_t result = *(arg1 + 0x34)
result_1 = result

if (cond:2)
    return result

result_1 = result
arg_c = *(arg1 + 0x38)
return sub_1421b4ea0(&data_143a2ee60, &result_1)
