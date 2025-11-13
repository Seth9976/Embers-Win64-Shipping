// 函数: sub_142155830
// 地址: 0x142155830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg1 + 0x10
int64_t* result_4 = result_1[0x10]
int64_t* result_2 = result_1

if (result_4 != 0)
    result_2 = result_4

*result_2 = arg2
int64_t* result_3 = result_1
int64_t* result_5 = result_1[0x10]

if (result_5 != 0)
    result_3 = result_5

result_3[1].d = arg3
int64_t* result = result_1[0x10]

if (result != 0)
    result_1 = result

*(result_1 + 0xc) = arg4
return result
