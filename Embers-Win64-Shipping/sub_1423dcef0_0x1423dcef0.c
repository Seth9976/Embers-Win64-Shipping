// 函数: sub_1423dcef0
// 地址: 0x1423dcef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result = sub_1423de110()
bool cond:0 = *(arg1 + 0xa4c) != 0
result = result + 1f
*(arg1 + 0xa48) = result

if (not(cond:0) && arg2 == 0)
    *(arg1 + 0xa4c) = arg2
    return result

*(arg1 + 0xa4c) = 1
return result
