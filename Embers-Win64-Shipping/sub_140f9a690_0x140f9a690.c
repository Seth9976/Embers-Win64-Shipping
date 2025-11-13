// 函数: sub_140f9a690
// 地址: 0x140f9a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1 + 8

if (*result != 0)
    int64_t* result_1 = *(arg1 + 8)
    int32_t rax_5 = result_1[1].d - 1
    result = result_1
    result[1].d = rax_5
    
    if (rax_5 == 0)
        (**result_1)(result_1)
        return sub_140fc2460(result_1)

return result
